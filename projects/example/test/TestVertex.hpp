/*

 Copyright (c) 2005-2015, University of Oxford.
 All rights reserved.

 University of Oxford means the Chancellor, Masters and Scholars of the
 University of Oxford, having an administrative office at Wellington
 Square, Oxford OX1 2JD, UK.

 This file is part of Chaste.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
 this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
 contributors may be used to endorse or promote products derived from this
 software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 */

#ifndef TEST_TESTVERTEX_HPP_
#define TEST_TESTVERTEX_HPP_

#include <cxxtest/TestSuite.h>
#include "CheckpointArchiveTypes.hpp"
#include "AbstractCellBasedTestSuite.hpp"

#include "CellsGenerator.hpp"
#include "OffLatticeSimulation.hpp"
#include "TransitCellProliferativeType.hpp"
#include "SmartPointers.hpp"
#include "StochasticDurationCellCycleModel.hpp"
#include "HoneycombVertexMeshGenerator.hpp"
#include "CylindricalHoneycombVertexMeshGenerator.hpp"
#include "VertexBasedCellPopulation.hpp"
#include "NagaiHondaForce.hpp"
#include "SimpleTargetAreaModifier.hpp"
#include "PlaneBoundaryCondition.hpp"
#include "PlaneBasedCellKiller.hpp"

#include "FakePetscSetup.hpp"

class TestRunningVertexBasedSimulationsTutorial: public AbstractCellBasedTestSuite {
public:
	void TestMonolayer() throw (Exception) {
		HoneycombVertexMeshGenerator generator(2, 2); // Parameters are: cells across, cells up
		MutableVertexMesh<2, 2>* p_mesh = generator.GetMesh();

		std::vector<CellPtr> cells;
		MAKE_PTR(TransitCellProliferativeType, p_transit_type);
		CellsGenerator<StochasticDurationCellCycleModel, 2> cells_generator;
		cells_generator.GenerateBasicRandom(cells, p_mesh->GetNumElements(),
				p_transit_type);

		VertexBasedCellPopulation<2> cell_population(*p_mesh, cells);

		OffLatticeSimulation<2> simulator(cell_population);
		simulator.SetOutputDirectory("VertexBasedMonolayer");
		simulator.SetEndTime(1.0);

		simulator.SetSamplingTimestepMultiple(50);

		MAKE_PTR(NagaiHondaForce<2>, p_force);
		simulator.AddForce(p_force);

		MAKE_PTR(SimpleTargetAreaModifier<2>, p_growth_modifier);
		simulator.AddSimulationModifier(p_growth_modifier);

		simulator.Solve();

		TS_ASSERT_EQUALS(cell_population.GetNumRealCells(), 4u);
		TS_ASSERT_DELTA(SimulationTime::Instance()->GetTime(), 1.0, 1e-10);
	}

	void TestPeriodicMonolayer() throw (Exception) {
		CylindricalHoneycombVertexMeshGenerator generator(4, 4); // Parameters are: cells across, cells up
		Cylindrical2dVertexMesh* p_mesh = generator.GetCylindricalMesh();

		std::vector<CellPtr> cells;
		MAKE_PTR(TransitCellProliferativeType, p_transit_type);
		CellsGenerator<StochasticDurationCellCycleModel, 2> cells_generator;
		cells_generator.GenerateBasicRandom(cells, p_mesh->GetNumElements(),
				p_transit_type);

		VertexBasedCellPopulation<2> cell_population(*p_mesh, cells);

		OffLatticeSimulation<2> simulator(cell_population);
		simulator.SetOutputDirectory("VertexBasedPeriodicMonolayer");
		simulator.SetSamplingTimestepMultiple(50);
		simulator.SetEndTime(1.0);

		MAKE_PTR(NagaiHondaForce<2>, p_force);
		simulator.AddForce(p_force);

		MAKE_PTR(SimpleTargetAreaModifier<2>, p_growth_modifier);
		simulator.AddSimulationModifier(p_growth_modifier);

		c_vector<double, 2> point = zero_vector<double>(2);
		c_vector<double, 2> normal = zero_vector<double>(2);
		normal(1) = -1.0;
		MAKE_PTR_ARGS(PlaneBoundaryCondition<2>, p_bc,
				(&cell_population, point, normal));
		simulator.AddCellPopulationBoundaryCondition(p_bc);

		point(1) = 3.0;
		normal(1) = 1.0;
		MAKE_PTR_ARGS(PlaneBasedCellKiller<2>, p_killer,
				(&cell_population, point, normal));
		simulator.AddCellKiller(p_killer);

		simulator.Solve();

		TS_ASSERT_EQUALS(cell_population.GetNumRealCells(), 12u);
		TS_ASSERT_DELTA(SimulationTime::Instance()->GetTime(), 1.0, 1e-10);
	}
};

#endif // TEST_TESTVERTEX_HPP_
