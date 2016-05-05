/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

#include "CommandLineArguments.hpp"
int main( int argc, char *argv[] ) {
 CommandLineArguments::Instance()->p_argc = &argc;
 CommandLineArguments::Instance()->p_argv = &argv;
 return CxxTest::ErrorPrinter().run();
}
#include "crypt/test/mechanics/TestLinearSpringWithVariableSpringConstantsForce.hpp"

static TestLinearSpringWithVariableSpringConstantsForce suite_TestLinearSpringWithVariableSpringConstantsForce;

static CxxTest::List Tests_TestLinearSpringWithVariableSpringConstantsForce = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLinearSpringWithVariableSpringConstantsForce( "crypt/test/mechanics/TestLinearSpringWithVariableSpringConstantsForce.hpp", 60, "TestLinearSpringWithVariableSpringConstantsForce", suite_TestLinearSpringWithVariableSpringConstantsForce, Tests_TestLinearSpringWithVariableSpringConstantsForce );

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationNoGhostsFails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationNoGhostsFails() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 64, "TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationNoGhostsFails" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationNoGhostsFails(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationNoGhostsFails;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationWithGhosts : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationWithGhosts() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 105, "TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationWithGhosts" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationWithGhosts(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCellsSimulationWithGhosts;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCells() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 147, "TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCells" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCells(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForIngeBCatCells;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithEdgeLengthBasedSpring : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithEdgeLengthBasedSpring() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 190, "TestGeneralisedLinearSpringForceWithEdgeLengthBasedSpring" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestGeneralisedLinearSpringForceWithEdgeLengthBasedSpring(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithEdgeLengthBasedSpring;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithEdgeBasedSpringsOnPeriodicMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithEdgeBasedSpringsOnPeriodicMesh() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 361, "TestGeneralisedLinearSpringForceWithEdgeBasedSpringsOnPeriodicMesh" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestGeneralisedLinearSpringForceWithEdgeBasedSpringsOnPeriodicMesh(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithEdgeBasedSpringsOnPeriodicMesh;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForMutantCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForMutantCells() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 496, "TestGeneralisedLinearSpringForceWithSpringConstantsForMutantCells" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestGeneralisedLinearSpringForceWithSpringConstantsForMutantCells(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForMutantCells;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForApoptoticCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForApoptoticCells() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 546, "TestGeneralisedLinearSpringForceWithSpringConstantsForApoptoticCells" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestGeneralisedLinearSpringForceWithSpringConstantsForApoptoticCells(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestGeneralisedLinearSpringForceWithSpringConstantsForApoptoticCells;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestForceOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestForceOutputParameters() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 609, "TestForceOutputParameters" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestForceOutputParameters(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestForceOutputParameters;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestLinearSpringWithVariableSpringConstantsForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestLinearSpringWithVariableSpringConstantsForceArchiving() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 629, "TestLinearSpringWithVariableSpringConstantsForceArchiving" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestLinearSpringWithVariableSpringConstantsForceArchiving(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestLinearSpringWithVariableSpringConstantsForceArchiving;

static class TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestLinearSpringWithVariableSpringConstantsForceWithNodeBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSpringWithVariableSpringConstantsForce_TestLinearSpringWithVariableSpringConstantsForceWithNodeBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestLinearSpringWithVariableSpringConstantsForce, suiteDescription_TestLinearSpringWithVariableSpringConstantsForce, 708, "TestLinearSpringWithVariableSpringConstantsForceWithNodeBasedCellPopulation" ) {}
 void runTest() { suite_TestLinearSpringWithVariableSpringConstantsForce.TestLinearSpringWithVariableSpringConstantsForceWithNodeBasedCellPopulation(); }
} testDescription_TestLinearSpringWithVariableSpringConstantsForce_TestLinearSpringWithVariableSpringConstantsForceWithNodeBasedCellPopulation;

#include <cxxtest/Root.cpp>
