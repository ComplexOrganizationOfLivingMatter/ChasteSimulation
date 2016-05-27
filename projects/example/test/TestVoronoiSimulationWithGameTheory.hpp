#ifndef TESTVORONOISIMULATIONWITHGAMETHEORY_HPP_
#define TESTVORONOISIMULATIONWITHGAMETHEORY_HPP_

#include <cxxtest/TestSuite.h>

#include <cstdio>
#include <ctime>
#include <cmath>

//Area modifiers
#include "FoodDifferentialByLabelAreaModifier.h"

//Division rule
#include "RandomDirectionVertexBasedDivisionRule.hpp"
#include "AbstractVertexBasedDivisionRule.hpp"

//Tracking modifiers
#include "VolumeTrackingModifier.hpp"
#include "NeighbourTrackingModifier.hpp"

#include "CryptSimulation2d.hpp"
#include "CheckpointArchiveTypes.hpp"
#include "OffLatticeSimulation.hpp"
#include "HoneycombVertexMeshGenerator.hpp"
#include "CylindricalHoneycombVertexMeshGenerator.hpp"

#include "CellsGenerator.hpp"
#include "GameTheoryCellCycleModel.hpp"
#include "GeneralisedLinearSpringForce.hpp"
#include "ChemotacticForce.hpp"
#include "RandomCellKiller.hpp"
#include "PlaneBasedCellKiller.hpp"
#include "PlaneBoundaryCondition.hpp"

#include "SphereGeometryBoundaryCondition.hpp"
#include "AbstractCellBasedTestSuite.hpp"

#include "NumericFileComparison.hpp"
#include "CellBasedEventHandler.hpp"
#include "WildTypeCellMutationState.hpp"
#include "DifferentiatedCellProliferativeType.hpp"
#include "CellLabel.hpp"
#include "TransitCellProliferativeType.hpp"
#include "SmartPointers.hpp"
#include "FileComparison.hpp"
#include "CellNeighboursWriter.hpp"

#include "CellMutationStatesWriter.hpp"
#include "CellProliferativeTypesWriter.hpp"
#include "CellIdWriter.hpp"
#include "CheckpointArchiveTypes.hpp"
#include "AbstractCellBasedTestSuite.hpp"

#include "VertexBasedCellPopulation.hpp"
//Cell writers //output info
#include "CellAgesWriter.hpp"
#include "CellVolumesWriter.hpp"
#include "CellMutationStatesCountWriter.hpp"

//Basics

//Boundaries

//Forces
#include <FarhadifarDifferentialByLabelForce.h>

//Cell killers
#include "ApoptoticCellKiller.hpp"

//Parallelization
#include "PetscSetupAndFinalize.hpp"
//#include "FakePetscSetup.hpp" //NotParallelize

class TestVoronoiSimulationWithGameTheory: public AbstractCellBasedTestSuite {
private:

	double mLastStartTime;
	void setUp() {
		mLastStartTime = (double) std::clock();
		AbstractCellBasedTestSuite::setUp();
	}
	void tearDown() {
		double time = (double) std::clock();
		double elapsed_time = (time - mLastStartTime) / (CLOCKS_PER_SEC);
		std::cout << "Elapsed time: " << elapsed_time << std::endl;
		AbstractCellBasedTestSuite::tearDown();
	}

public:

	void TestGameTheoryDemo() throw (Exception) {
		//EXIT_IF_PARALLEL;    // HoneycombMeshGenerator does not work in parallel

		int num_cells_depth = 6;
		int num_cells_width = 6;

		HoneycombVertexMeshGenerator generator(num_cells_width,
				num_cells_depth); // Parameters are: cells across, cells up
		MutableVertexMesh<2, 2>* p_mesh = generator.GetMesh();
		std::vector<CellPtr> cells;
		cells.clear();

		cells.reserve(p_mesh->GetNumElements());

		boost::shared_ptr<AbstractCellProperty> p_state(
				CellPropertyRegistry::Instance()->Get<WildTypeCellMutationState>());
		MAKE_PTR(DifferentiatedCellProliferativeType, p_differentiated_type);
		MAKE_PTR(StemCellProliferativeType, p_stem_type);
		MAKE_PTR(TransitCellProliferativeType, p_transit_type);
		MAKE_PTR(CellLabel, p_label);

		for (unsigned i = 0; i < p_mesh->GetNumElements(); i++) {
			GameTheoryCellCycleModel* p_model = new GameTheoryCellCycleModel();
			p_model->SetDimension(2);

			CellPtr p_cell(new Cell(p_state, p_model));
			p_cell -> SetBirthTime(-RandomNumberGenerator::Instance()->ranf() * 12.0);


			/*if (i%2){
			 //std::cout<<"hola soy mala " << i<<endl;
			 p_cell->AddCellProperty(p_label);
			 }*/
			int aux = i % num_cells_depth;
			if (aux < num_cells_depth / 2) {
				p_cell->AddCellProperty(p_label);
				p_cell->SetCellProliferativeType(p_differentiated_type);
			}
			else
			{
				p_cell->SetCellProliferativeType(p_transit_type);
			}

			cells.push_back(p_cell);
		}

		VertexBasedCellPopulation<2> cell_population(*p_mesh, cells);
		//boost::shared_ptr<AbstractVertexBasedDivisionRule<2> > p_division_rule_to_set(new RandomDirectionVertexBasedDivisionRule<2>());
		//cell_population.SetVertexBasedDivisionRule(p_division_rule_to_set);

		//check equivalent for nodes
		//cell_population.SetWriteVtkAsPoints(true);
		//cell_population.SetOutputMeshInVtk(true);

		cell_population.AddCellWriter<CellMutationStatesWriter>();
		cell_population.AddCellWriter<CellProliferativeTypesWriter>();
		cell_population.AddCellWriter<CellIdWriter>();
		cell_population.AddCellWriter<CellNeighboursWriter>();
		cell_population.AddCellWriter<CellAgesWriter>();
		cell_population.AddCellWriter<CellVolumesWriter>();

		// Set up cell-based simulation

		OffLatticeSimulation<2> simulator(cell_population);
		//CryptSimulation2d simulator(cell_population); The cells start to grow from the bottom.
		simulator.SetOutputDirectory("GameTheory");

		//simulator.SetDt(0.001);
		//Ratio pictures/sec
		simulator.SetSamplingTimestepMultiple(10);

		MAKE_PTR_ARGS(NeighbourTrackingModifier<2>, p_modifier, ());
		simulator.AddSimulationModifier(p_modifier);

		MAKE_PTR_ARGS(VolumeTrackingModifier<2>, v_modifier, ());
		simulator.AddSimulationModifier(v_modifier);

		// Create a force law and pass it to the simulation
		//https://chaste.cs.ox.ac.uk/public-docs/classAbstractForce.html
		//cell_based/test/population/TestForces.cpp
		/* Kinds of force:
		 * - ChemotacticForce. Not useful here. Concentrations.
		 * - DiffusionForce. Viscosity and temperature: seem not to be here.
		 * - FarhadifarForce. Interesting!
		 * - NagaiHondaForce. Inherited from it - NagaiHondaDifferentialAdhesionForce.
		 * - VertexCryptBoundaryForce.
		 * - WelikyOsterForce.
		 * - BuskeCompressionForce.
		 */
		/*MAKE_PTR(NagaiHondaDifferentialAdhesionForce<2>, p_force);
		 p_force->SetNagaiHondaDeformationEnergyParameter(55.0);
		 p_force->SetNagaiHondaMembraneSurfaceEnergyParameter(0.0);
		 p_force->SetNagaiHondaCellCellAdhesionEnergyParameter(1.0);
		 p_force->SetNagaiHondaLabelledCellCellAdhesionEnergyParameter(6.0);
		 p_force->SetNagaiHondaLabelledCellLabelledCellAdhesionEnergyParameter(3.0);
		 p_force->SetNagaiHondaCellBoundaryAdhesionEnergyParameter(12.0);
		 p_force->SetNagaiHondaLabelledCellBoundaryAdhesionEnergyParameter(40.0);*/

		/* Defaults: These parameters are Case I in Farhadifar's paper
		 * mAreaElasticityCellLabelledParameter(1.0)
		 * mPerimeterContractilityCellLabelledParameter(0.04)
		 * mLineTensionCellLabelledParameter(0.12)
		 * mBoundaryLineTensionCellLabelledParameter(0.12)
		 */
		MAKE_PTR(FarhadifarDifferentialByLabelForce<2>, p_force);

		//limit the area
		p_force->SetAreaElasticityParameter(20);
		p_force->SetAreaElasticityCellLabelledParameter(20);
		//Seems to decrease the size of the cells
		p_force->SetPerimeterContractilityParameter(0.2); //not working with a high number > 0.5?
		p_force->SetPerimeterContractilityCellLabelledParameter(0.2); //not working with a high number > 0.5?
		//p_force->SetLineTensionParameter(1);
		//p_force->SetLineTensionCellLabelledParameter(1);
		//p_force->SetBoundaryLineTensionParameter(1);
		//p_force->SetBoundaryLineTensionCellLabelledParameter(1);

		// We need to reset the cell rearrangement threshold - vertex movements are kept below that threshold
		//cell_population.rGetMesh().SetCellRearrangementThreshold(0.5);

		simulator.AddForce(p_force);

		MAKE_PTR(FoodDifferentialByLabelAreaModifier<2>, p_growth_modifier);
		simulator.AddSimulationModifier(p_growth_modifier);

		//add a new random seed
		srand(time(NULL));

		//enclose the population in a square
		/*c_vector<double, 2> point = zero_vector<double>(2);
		 c_vector<double, 2> normal = zero_vector<double>(2);
		 point(0) = 0.0;
		 normal(0) = -1.0;
		 MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc1,
		 (&cell_population, point, normal));
		 simulator.AddCellPopulationBoundaryCondition(p_bc1);

		 point(0) = 9.0;
		 normal(0) = 1.0;
		 MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc2,
		 (&cell_population, point, normal));
		 simulator.AddCellPopulationBoundaryCondition(p_bc2);

		 point(0) = 0.0;
		 point(1) = 0.0;
		 normal(0) = 0.0;
		 normal(1) = -1.0;
		 MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc3,
		 (&cell_population, point, normal));
		 simulator.AddCellPopulationBoundaryCondition(p_bc3);

		 point(1) = 9.0;
		 normal(1) = 1.0;
		 MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc4,
		 (&cell_population, point, normal));
		 simulator.AddCellPopulationBoundaryCondition(p_bc4);

		 MAKE_PTR_ARGS(PlaneBasedCellKiller<2>, p_killer,
		 (&cell_population, point, normal));
		 simulator.AddCellKiller(p_killer);*/

		//enclose the population in boundaries
		c_vector<double, 2> point = zero_vector<double>(2);
		c_vector<double, 2> normal = zero_vector<double>(2);
		//normal(1) = -1.0;
		point(1) = num_cells_depth;
		normal(1) = 1.0;

		MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc,
				(&cell_population, point, normal));
		simulator.AddCellPopulationBoundaryCondition(p_bc);

		point(1) = 0.0;
		normal(1) = -1.0;

		MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc_2,
				(&cell_population, point, normal));
		simulator.AddCellPopulationBoundaryCondition(p_bc_2);

		MAKE_PTR_ARGS(PlaneBasedCellKiller<2>, p_killer,
				(&cell_population, point, normal));
		simulator.AddCellKiller(p_killer);

		simulator.SetEndTime(50.0);

		simulator.Solve();
		//std::cout << "adios" << endl;
	}
};

#endif /*TESTVORONOISIMULATIONWITHGAMETHEORY_HPP_*/
