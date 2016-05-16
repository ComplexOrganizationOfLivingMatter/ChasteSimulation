#ifndef TESTVORONOISIMULATIONWITHGAMETHEORY_HPP_
#define TESTVORONOISIMULATIONWITHGAMETHEORY_HPP_

#include <cxxtest/TestSuite.h>

#include <cstdio>
#include <ctime>
#include <cmath>

#include "NagaiHondaForce.hpp"
#include "SimpleTargetAreaModifier.hpp"

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
#include "AbstractCellBasedTestSuite.hpp"
#include "NeighbourTrackingModifier.hpp"
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

#include "StochasticDurationCellCycleModel.hpp"
#include "VertexBasedCellPopulation.hpp"

#include "FakePetscSetup.hpp"

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
		//HoneycombMeshGenerator generator(num_cells_width, num_cells_depth,0);
		//MutableMesh<2,2>* p_mesh = generator.GetMesh();

		std::vector<CellPtr> cells;
		cells.clear();

		cells.reserve(p_mesh->GetNumElements());

		boost::shared_ptr<AbstractCellProperty> p_state(
				CellPropertyRegistry::Instance()->Get<WildTypeCellMutationState>());
		MAKE_PTR(DifferentiatedCellProliferativeType, p_differentiated_type);
		MAKE_PTR(CellLabel, p_label);
		for (unsigned i = 0; i < p_mesh->GetNumElements(); i++) {
			GameTheoryCellCycleModel* p_model = new GameTheoryCellCycleModel();
			p_model->SetDimension(2);

			CellPtr p_cell(new Cell(p_state, p_model));
			p_cell->SetCellProliferativeType(p_differentiated_type);
			double birth_time = -RandomNumberGenerator::Instance()->ranf()
					* 18.0;
			p_cell->SetBirthTime(birth_time);

			// uncomment this for all cells to become cheaters
			//    p_cell->AddCellProperty(p_label);

			cells.push_back(p_cell);
		}

		VertexBasedCellPopulation<2> cell_population(*p_mesh, cells); //casca

		//check equivalent for nodes
		//cell_population.SetWriteVtkAsPoints(true);
		//cell_population.SetOutputMeshInVtk(true);

		cell_population.AddCellWriter<CellMutationStatesWriter>();
		cell_population.AddCellWriter<CellProliferativeTypesWriter>();
		cell_population.AddCellWriter<CellIdWriter>();
		cell_population.AddCellWriter<CellNeighboursWriter>();

		// Set up cell-based simulation
		OffLatticeSimulation<2> simulator(cell_population);
		simulator.SetOutputDirectory("GameTheory");

//        simulator.SetDt(0.01);
		simulator.SetSamplingTimestepMultiple(12);

		MAKE_PTR_ARGS(NeighbourTrackingModifier<2>, p_modifier, ());
		simulator.AddSimulationModifier(p_modifier);

		// Create a force law and pass it to the simulation
		MAKE_PTR(NagaiHondaForce<2>, p_force);
		simulator.AddForce(p_force);

		MAKE_PTR(SimpleTargetAreaModifier<2>, p_growth_modifier);
		simulator.AddSimulationModifier(p_growth_modifier);

		//add a new random seed
		srand(time(NULL));

		//enclose the population in a square
		c_vector<double, 2> point = zero_vector<double>(2);
		c_vector<double, 2> normal = zero_vector<double>(2);
		normal(0) = -1.0;
		MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc1,
				(&cell_population, point, normal));
		simulator.AddCellPopulationBoundaryCondition(p_bc1);

		point(0) = 10.0;
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

		point(1) = 10.0;
		normal(1) = 1.0;
		MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc4,
				(&cell_population, point, normal));
		simulator.AddCellPopulationBoundaryCondition(p_bc4);

		simulator.SetEndTime(50.0);

		simulator.Solve();
	}
};

#endif /*TESTVORONOISIMULATIONWITHGAMETHEORY_HPP_*/
