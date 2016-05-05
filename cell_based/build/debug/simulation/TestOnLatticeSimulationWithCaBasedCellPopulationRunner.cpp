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
#include "cell_based/test/simulation/TestOnLatticeSimulationWithCaBasedCellPopulation.hpp"

static TestOnLatticeSimulationWithCaBasedCellPopulation suite_TestOnLatticeSimulationWithCaBasedCellPopulation;

static CxxTest::List Tests_TestOnLatticeSimulationWithCaBasedCellPopulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation( "cell_based/test/simulation/TestOnLatticeSimulationWithCaBasedCellPopulation.hpp", 73, "TestOnLatticeSimulationWithCaBasedCellPopulation", suite_TestOnLatticeSimulationWithCaBasedCellPopulation, Tests_TestOnLatticeSimulationWithCaBasedCellPopulation );

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestOnLatticeSimulationExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestOnLatticeSimulationExceptions() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 88, "TestOnLatticeSimulationExceptions" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestOnLatticeSimulationExceptions(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestOnLatticeSimulationExceptions;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaSingleCellRandomMovement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaSingleCellRandomMovement() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 112, "TestCaSingleCellRandomMovement" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaSingleCellRandomMovement(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaSingleCellRandomMovement;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithBirth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithBirth() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 199, "TestCaMonolayerWithBirth" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaMonolayerWithBirth(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithBirth;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithDeath() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 268, "TestCaMonolayerWithDeath" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaMonolayerWithDeath(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithDeath;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithApoptoticCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithApoptoticCellKiller() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 336, "TestCaMonolayerWithApoptoticCellKiller" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaMonolayerWithApoptoticCellKiller(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithApoptoticCellKiller;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithRandomSwitching : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithRandomSwitching() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 404, "TestCaMonolayerWithRandomSwitching" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaMonolayerWithRandomSwitching(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithRandomSwitching;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithRandomSwitchingAndUpdateNodesInNonRandomOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithRandomSwitchingAndUpdateNodesInNonRandomOrder() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 474, "TestCaMonolayerWithRandomSwitchingAndUpdateNodesInNonRandomOrder" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaMonolayerWithRandomSwitchingAndUpdateNodesInNonRandomOrder(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMonolayerWithRandomSwitchingAndUpdateNodesInNonRandomOrder;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMultipleCellsRandomMovement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMultipleCellsRandomMovement() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 557, "TestCaMultipleCellsRandomMovement" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaMultipleCellsRandomMovement(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMultipleCellsRandomMovement;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMultipleCellsRandomMovementIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMultipleCellsRandomMovementIn3d() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 602, "TestCaMultipleCellsRandomMovementIn3d" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestCaMultipleCellsRandomMovementIn3d(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestCaMultipleCellsRandomMovementIn3d;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestMultipleCellsPerLatticeSiteWithBirth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestMultipleCellsPerLatticeSiteWithBirth() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 652, "TestMultipleCellsPerLatticeSiteWithBirth" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestMultipleCellsPerLatticeSiteWithBirth(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestMultipleCellsPerLatticeSiteWithBirth;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestMultipleCellsPerLatticeSiteWithDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestMultipleCellsPerLatticeSiteWithDeath() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 716, "TestMultipleCellsPerLatticeSiteWithDeath" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestMultipleCellsPerLatticeSiteWithDeath(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestMultipleCellsPerLatticeSiteWithDeath;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestStandardResultForArchivingTestsBelow : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestStandardResultForArchivingTestsBelow() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 785, "TestStandardResultForArchivingTestsBelow" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestStandardResultForArchivingTestsBelow(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestStandardResultForArchivingTestsBelow;

static class TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestSave : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestSave() : CxxTest::RealTestDescription( Tests_TestOnLatticeSimulationWithCaBasedCellPopulation, suiteDescription_TestOnLatticeSimulationWithCaBasedCellPopulation, 828, "TestSave" ) {}
 void runTest() { suite_TestOnLatticeSimulationWithCaBasedCellPopulation.TestSave(); }
} testDescription_TestOnLatticeSimulationWithCaBasedCellPopulation_TestSave;

#include <cxxtest/Root.cpp>
