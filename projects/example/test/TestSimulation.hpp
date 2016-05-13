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

#ifndef TEST_TESTSIMULATION_HPP_
#define TEST_TESTSIMULATION_HPP_

/*
 * Allows us to use certain methods in our test.
 * This header file must be included in any Chaste test.
 */
#include <cxxtest/TestSuite.h>
/*
 *  It enables us to write tests where the SimulationTime
 *  is handled automatically and simplifies the tests.
 *  It also sets up the random number generator and the
 *  CellPropertyRegistry
 */
#include "AbstractCellBasedTestSuite.hpp"
/*
 * Any test in which the GetIdentifier() method is used,
 * even via the main cell_based code (through calls to
 * AbstractCellPopulation output methods), must also
 * include CheckpointArchiveTypes.hpp
 */
#include "CheckpointArchiveTypes.hpp"
/*
 * includes the Boost shared_ptr smart pointer, and
 * defines some useful macros to save typing when using it.
 */
#include "SmartPointers.hpp"

/* The remaining header files define classes that will
 *  be used in the cell population simulation test.
 */

//a helper class for generating a suitable collection of cells.
#include "CellsGenerator.hpp"
#include "TransitCellProliferativeType.hpp"

//defines a stochastic cell-cycle model class
#include "StochasticDurationCellCycleModel.hpp"
//defines a helper class for generating a suitable mesh
#include "HoneycombMeshGenerator.hpp"
/*defines the class that simulates the evolution of an
 * off-lattice CellPopulation
 */
#include "OffLatticeSimulation.hpp"
/*
 * define classes for mesh-based CellPopulations
 * with and without ghost nodes
 */
#include "MeshBasedCellPopulation.hpp"
#include "MeshBasedCellPopulationWithGhostNodes.hpp"
/*
 * defines a force law for describing the mechanical
 * interactions between neighbouring cells in the cell population
 */
#include "GeneralisedLinearSpringForce.hpp"
//defines a class for writing output that can be visualized in Paraview.
#include "VoronoiDataWriter.hpp"

//ensures that the test never runs in parallel
#include "FakePetscSetup.hpp"

class TestSimulation: public AbstractCellBasedTestSuite {
public:
	void TestMonolayer() throw (Exception) {
		HoneycombMeshGenerator generator(2, 2);
		// Parameters are: cells across, cells up
		MutableMesh<2, 2> *p_mesh = generator.GetMesh();

		/*
		 * We create an empty vector of cells and pass this
		 * into the method along with the mesh. The second
		 * argument represents the size of that the vector
		 * cells should become - one cell for each node,
		 * the third argument specifies the proliferative
		 * type of the cell.
		 */
		std::vector<CellPtr> cells;
		MAKE_PTR(TransitCellProliferativeType, p_transit_type);
		CellsGenerator<StochasticDurationCellCycleModel, 2> cells_generator;
		cells_generator.GenerateBasicRandom(cells, p_mesh->GetNumNodes(),
				p_transit_type);

		/*
		 * Now we have a mesh and a set of cells to go with it,
		 * we can create a CellPopulation. In general, this
		 * class associates a collection of cells with a mesh.
		 * For this test, because we have a MutableMesh, we
		 * use a particular type of cell population called a
		 * MeshBasedCellPopulation.
		 */
		MeshBasedCellPopulation<2> cell_population(*p_mesh, cells);

		//Paraview simulation
		/*
		 * Generating .vtu files
		 */
		cell_population.AddPopulationWriter<VoronoiDataWriter>();
		OffLatticeSimulation<2> simulator(cell_population);
		//"Simulation" will be the folder
		simulator.SetOutputDirectory("Simulation");
		simulator.SetEndTime(10.0);

		/*
		 * reate one or more force laws, which determine the mechanics of the
		 * centres of each cell in a cell population. For this test, we use one
		 * force law, based on the spring based model, and pass it to the
		 * OffLatticeSimulation. For a list of possible forces see subclasses of
		 * AbstractForce
		 */
		MAKE_PTR(GeneralisedLinearSpringForce<2>, p_force);
		simulator.AddForce(p_force);

		//Run simulation
		simulator.Solve();

		//Test
		TS_ASSERT_EQUALS(cell_population.GetNumRealCells(), 8u);
		TS_ASSERT_DELTA(SimulationTime::Instance()->GetTime(), 10.0, 1e-10);
	}

	void TestMonolayerWithGhostNodes() throw (Exception) {
		//The third argument specifies the number of layers of ghost nodes to make.
		HoneycombMeshGenerator generator(2, 2, 2);
		MutableMesh<2, 2>* p_mesh = generator.GetMesh();

		std::vector<unsigned> location_indices =
				generator.GetCellLocationIndices();

		std::vector<CellPtr> cells;
		MAKE_PTR(TransitCellProliferativeType, p_transit_type);
		CellsGenerator<StochasticDurationCellCycleModel, 2> cells_generator;
		cells_generator.GenerateBasicRandom(cells, location_indices.size(),
				p_transit_type);

		MeshBasedCellPopulationWithGhostNodes<2> cell_population(*p_mesh, cells,
				location_indices); //**Changed**//

		cell_population.AddPopulationWriter<VoronoiDataWriter>();
		OffLatticeSimulation<2> simulator(cell_population);
		simulator.SetOutputDirectory("TestSimulationWithGhost");
		simulator.SetSamplingTimestepMultiple(12);
		simulator.SetEndTime(10.0);

		MAKE_PTR(GeneralisedLinearSpringForce<2>, p_force);
		simulator.AddForce(p_force);

		//Run simulation
		simulator.Solve();

		//Test
		TS_ASSERT_EQUALS(cell_population.GetNumRealCells(), 8u);
		TS_ASSERT_DELTA(SimulationTime::Instance()->GetTime(), 10.0, 1e-10);
	}
};

#endif // TEST_TESTSIMULATION_HPP_
