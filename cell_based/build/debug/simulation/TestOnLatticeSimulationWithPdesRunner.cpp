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
#include "cell_based/test/simulation/TestOnLatticeSimulationWithPdes.hpp"

static TestOnLatticeSimulationWithPdes suite_TestOnLatticeSimulationWithPdes;

static CxxTest::List Tests_TestOnLatticeSimulationWithPdes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOnLatticeSimulationWithPdes( "cell_based/test/simulation/TestOnLatticeSimulationWithPdes.hpp", 104, "TestOnLatticeSimulationWithPdes", suite_TestOnLatticeSimulationWithPdes, Tests_TestOnLatticeSimulationWithPdes );

static class TestDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithoutCoarseMeshThrowsException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithoutCoarseMeshThrowsException() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 108, "TestPottsBasedWithoutCoarseMeshThrowsException" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestPottsBasedWithoutCoarseMeshThrowsException(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithoutCoarseMeshThrowsException;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithCoarseMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithCoarseMesh() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 152, "TestPottsBasedWithCoarseMesh" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestPottsBasedWithCoarseMesh(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithCoarseMesh;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithoutCoarseMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithoutCoarseMesh() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 243, "TestCaBasedWithoutCoarseMesh" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestCaBasedWithoutCoarseMesh(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithoutCoarseMesh;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCellwiseSourcePde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCellwiseSourcePde() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 324, "TestCaBasedWithCellwiseSourcePde" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestCaBasedWithCellwiseSourcePde(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCellwiseSourcePde;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCellwiseSourcePdeWithTightBoundaries : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCellwiseSourcePdeWithTightBoundaries() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 401, "TestCaBasedWithCellwiseSourcePdeWithTightBoundaries" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestCaBasedWithCellwiseSourcePdeWithTightBoundaries(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCellwiseSourcePdeWithTightBoundaries;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithoutCoarseMeshUsingPdeHandlerOnCuboid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithoutCoarseMeshUsingPdeHandlerOnCuboid() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 461, "TestCaBasedWithoutCoarseMeshUsingPdeHandlerOnCuboid" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestCaBasedWithoutCoarseMeshUsingPdeHandlerOnCuboid(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithoutCoarseMeshUsingPdeHandlerOnCuboid;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedCellsOutsideMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedCellsOutsideMesh() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 525, "TestCaBasedCellsOutsideMesh" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestCaBasedCellsOutsideMesh(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestCaBasedCellsOutsideMesh;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCoarseMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCoarseMesh() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 576, "TestCaBasedWithCoarseMesh" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestCaBasedWithCoarseMesh(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestCaBasedWithCoarseMesh;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithCoarseMeshTwoEquations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithCoarseMeshTwoEquations() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 681, "TestPottsBasedWithCoarseMeshTwoEquations" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestPottsBasedWithCoarseMeshTwoEquations(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestPottsBasedWithCoarseMeshTwoEquations;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestOnLatticeSpheroidWithNutrient : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestOnLatticeSpheroidWithNutrient() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 765, "TestOnLatticeSpheroidWithNutrient" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestOnLatticeSpheroidWithNutrient(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestOnLatticeSpheroidWithNutrient;

static class TestDescription_TestOnLatticeSimulationWithPdes_TestPdeOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithPdes_TestPdeOutput() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithPdes, suiteDescription_TestOnLatticeSimulationWithPdes, 831, "TestPdeOutput" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithPdes.TestPdeOutput(); }
} testDescription_TestOnLatticeSimulationWithPdes_TestPdeOutput;

#include <cxxtest/Root.cpp>
