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
#include "cell_based/test/tutorial/TestRunningPottsBasedSimulationsTutorial.hpp"

static TestRunningPottsBasedSimulationsTutorial suite_TestRunningPottsBasedSimulationsTutorial;

static CxxTest::List Tests_TestRunningPottsBasedSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningPottsBasedSimulationsTutorial( "cell_based/test/tutorial/TestRunningPottsBasedSimulationsTutorial.hpp", 97, "TestRunningPottsBasedSimulationsTutorial", suite_TestRunningPottsBasedSimulationsTutorial, Tests_TestRunningPottsBasedSimulationsTutorial );

static class TestDescription_TestRunningPottsBasedSimulationsTutorial_TestMonolayer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningPottsBasedSimulationsTutorial_TestMonolayer() : CxxTest::RealTestDescription( Tests_TestRunningPottsBasedSimulationsTutorial, suiteDescription_TestRunningPottsBasedSimulationsTutorial, 109, "TestMonolayer" ) {}
 void runTest() { suite_TestRunningPottsBasedSimulationsTutorial.TestMonolayer(); }
} testDescription_TestRunningPottsBasedSimulationsTutorial_TestMonolayer;

static class TestDescription_TestRunningPottsBasedSimulationsTutorial_TestPottsMonolayerCellSorting : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningPottsBasedSimulationsTutorial_TestPottsMonolayerCellSorting() : CxxTest::RealTestDescription( Tests_TestRunningPottsBasedSimulationsTutorial, suiteDescription_TestRunningPottsBasedSimulationsTutorial, 248, "TestPottsMonolayerCellSorting" ) {}
 void runTest() { suite_TestRunningPottsBasedSimulationsTutorial.TestPottsMonolayerCellSorting(); }
} testDescription_TestRunningPottsBasedSimulationsTutorial_TestPottsMonolayerCellSorting;

static class TestDescription_TestRunningPottsBasedSimulationsTutorial_TestPottsSpheroidCellSorting : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningPottsBasedSimulationsTutorial_TestPottsSpheroidCellSorting() : CxxTest::RealTestDescription( Tests_TestRunningPottsBasedSimulationsTutorial, suiteDescription_TestRunningPottsBasedSimulationsTutorial, 342, "TestPottsSpheroidCellSorting" ) {}
 void runTest() { suite_TestRunningPottsBasedSimulationsTutorial.TestPottsSpheroidCellSorting(); }
} testDescription_TestRunningPottsBasedSimulationsTutorial_TestPottsSpheroidCellSorting;

#include <cxxtest/Root.cpp>
