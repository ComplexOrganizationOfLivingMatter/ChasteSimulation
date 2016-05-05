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
#include "cell_based/test/tutorial/TestRunningDifferentialAdhesionSimulationsTutorial.hpp"

static TestRunningDifferentialAdhesionSimulationsTutorial suite_TestRunningDifferentialAdhesionSimulationsTutorial;

static CxxTest::List Tests_TestRunningDifferentialAdhesionSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningDifferentialAdhesionSimulationsTutorial( "cell_based/test/tutorial/TestRunningDifferentialAdhesionSimulationsTutorial.hpp", 106, "TestRunningDifferentialAdhesionSimulationsTutorial", suite_TestRunningDifferentialAdhesionSimulationsTutorial, Tests_TestRunningDifferentialAdhesionSimulationsTutorial );

static class TestDescription_TestRunningDifferentialAdhesionSimulationsTutorial_TestVertexBasedDifferentialAdhesionSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningDifferentialAdhesionSimulationsTutorial_TestVertexBasedDifferentialAdhesionSimulation() : CxxTest::RealTestDescription( Tests_TestRunningDifferentialAdhesionSimulationsTutorial, suiteDescription_TestRunningDifferentialAdhesionSimulationsTutorial, 118, "TestVertexBasedDifferentialAdhesionSimulation" ) {}
 void runTest() { suite_TestRunningDifferentialAdhesionSimulationsTutorial.TestVertexBasedDifferentialAdhesionSimulation(); }
} testDescription_TestRunningDifferentialAdhesionSimulationsTutorial_TestVertexBasedDifferentialAdhesionSimulation;

#include <cxxtest/Root.cpp>
