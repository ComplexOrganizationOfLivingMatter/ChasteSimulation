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
#include "cell_based/test/tutorial/TestRunningMeshBasedSimulationsTutorial.hpp"

static TestRunningMeshBasedSimulationsTutorial suite_TestRunningMeshBasedSimulationsTutorial;

static CxxTest::List Tests_TestRunningMeshBasedSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningMeshBasedSimulationsTutorial( "cell_based/test/tutorial/TestRunningMeshBasedSimulationsTutorial.hpp", 101, "TestRunningMeshBasedSimulationsTutorial", suite_TestRunningMeshBasedSimulationsTutorial, Tests_TestRunningMeshBasedSimulationsTutorial );

static class TestDescription_TestRunningMeshBasedSimulationsTutorial_TestMonolayer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningMeshBasedSimulationsTutorial_TestMonolayer() : CxxTest::RealTestDescription( Tests_TestRunningMeshBasedSimulationsTutorial, suiteDescription_TestRunningMeshBasedSimulationsTutorial, 110, "TestMonolayer" ) {}
 void runTest() { suite_TestRunningMeshBasedSimulationsTutorial.TestMonolayer(); }
} testDescription_TestRunningMeshBasedSimulationsTutorial_TestMonolayer;

static class TestDescription_TestRunningMeshBasedSimulationsTutorial_TestMonolayerWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningMeshBasedSimulationsTutorial_TestMonolayerWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestRunningMeshBasedSimulationsTutorial, suiteDescription_TestRunningMeshBasedSimulationsTutorial, 222, "TestMonolayerWithGhostNodes" ) {}
 void runTest() { suite_TestRunningMeshBasedSimulationsTutorial.TestMonolayerWithGhostNodes(); }
} testDescription_TestRunningMeshBasedSimulationsTutorial_TestMonolayerWithGhostNodes;

#include <cxxtest/Root.cpp>
