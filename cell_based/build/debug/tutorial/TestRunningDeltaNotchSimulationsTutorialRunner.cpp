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
#include "cell_based/test/tutorial/TestRunningDeltaNotchSimulationsTutorial.hpp"

static TestRunningDeltaNotchSimulationsTutorial suite_TestRunningDeltaNotchSimulationsTutorial;

static CxxTest::List Tests_TestRunningDeltaNotchSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningDeltaNotchSimulationsTutorial( "cell_based/test/tutorial/TestRunningDeltaNotchSimulationsTutorial.hpp", 114, "TestRunningDeltaNotchSimulationsTutorial", suite_TestRunningDeltaNotchSimulationsTutorial, Tests_TestRunningDeltaNotchSimulationsTutorial );

static class TestDescription_TestRunningDeltaNotchSimulationsTutorial_TestVertexBasedMonolayerWithDeltaNotch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningDeltaNotchSimulationsTutorial_TestVertexBasedMonolayerWithDeltaNotch() : CxxTest::RealTestDescription( Tests_TestRunningDeltaNotchSimulationsTutorial, suiteDescription_TestRunningDeltaNotchSimulationsTutorial, 128, "TestVertexBasedMonolayerWithDeltaNotch" ) {}
 void runTest() { suite_TestRunningDeltaNotchSimulationsTutorial.TestVertexBasedMonolayerWithDeltaNotch(); }
} testDescription_TestRunningDeltaNotchSimulationsTutorial_TestVertexBasedMonolayerWithDeltaNotch;

static class TestDescription_TestRunningDeltaNotchSimulationsTutorial_TestNodeBasedMonolayerWithDeltaNotch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningDeltaNotchSimulationsTutorial_TestNodeBasedMonolayerWithDeltaNotch() : CxxTest::RealTestDescription( Tests_TestRunningDeltaNotchSimulationsTutorial, suiteDescription_TestRunningDeltaNotchSimulationsTutorial, 212, "TestNodeBasedMonolayerWithDeltaNotch" ) {}
 void runTest() { suite_TestRunningDeltaNotchSimulationsTutorial.TestNodeBasedMonolayerWithDeltaNotch(); }
} testDescription_TestRunningDeltaNotchSimulationsTutorial_TestNodeBasedMonolayerWithDeltaNotch;

#include <cxxtest/Root.cpp>
