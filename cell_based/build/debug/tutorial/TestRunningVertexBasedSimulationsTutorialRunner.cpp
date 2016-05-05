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
#include "cell_based/test/tutorial/TestRunningVertexBasedSimulationsTutorial.hpp"

static TestRunningVertexBasedSimulationsTutorial suite_TestRunningVertexBasedSimulationsTutorial;

static CxxTest::List Tests_TestRunningVertexBasedSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningVertexBasedSimulationsTutorial( "cell_based/test/tutorial/TestRunningVertexBasedSimulationsTutorial.hpp", 106, "TestRunningVertexBasedSimulationsTutorial", suite_TestRunningVertexBasedSimulationsTutorial, Tests_TestRunningVertexBasedSimulationsTutorial );

static class TestDescription_TestRunningVertexBasedSimulationsTutorial_TestMonolayer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningVertexBasedSimulationsTutorial_TestMonolayer() : CxxTest::RealTestDescription( Tests_TestRunningVertexBasedSimulationsTutorial, suiteDescription_TestRunningVertexBasedSimulationsTutorial, 118, "TestMonolayer" ) {}
 void runTest() { suite_TestRunningVertexBasedSimulationsTutorial.TestMonolayer(); }
} testDescription_TestRunningVertexBasedSimulationsTutorial_TestMonolayer;

static class TestDescription_TestRunningVertexBasedSimulationsTutorial_TestPeriodicMonolayer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningVertexBasedSimulationsTutorial_TestPeriodicMonolayer() : CxxTest::RealTestDescription( Tests_TestRunningVertexBasedSimulationsTutorial, suiteDescription_TestRunningVertexBasedSimulationsTutorial, 210, "TestPeriodicMonolayer" ) {}
 void runTest() { suite_TestRunningVertexBasedSimulationsTutorial.TestPeriodicMonolayer(); }
} testDescription_TestRunningVertexBasedSimulationsTutorial_TestPeriodicMonolayer;

#include <cxxtest/Root.cpp>
