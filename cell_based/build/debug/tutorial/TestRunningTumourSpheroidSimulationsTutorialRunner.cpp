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
#include "cell_based/test/tutorial/TestRunningTumourSpheroidSimulationsTutorial.hpp"

static TestRunningTumourSpheroidSimulationsTutorial suite_TestRunningTumourSpheroidSimulationsTutorial;

static CxxTest::List Tests_TestRunningTumourSpheroidSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningTumourSpheroidSimulationsTutorial( "cell_based/test/tutorial/TestRunningTumourSpheroidSimulationsTutorial.hpp", 122, "TestRunningTumourSpheroidSimulationsTutorial", suite_TestRunningTumourSpheroidSimulationsTutorial, Tests_TestRunningTumourSpheroidSimulationsTutorial );

static class TestDescription_TestRunningTumourSpheroidSimulationsTutorial_TestSpheroidTutorial : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningTumourSpheroidSimulationsTutorial_TestSpheroidTutorial() : CxxTest::RealTestDescription( Tests_TestRunningTumourSpheroidSimulationsTutorial, suiteDescription_TestRunningTumourSpheroidSimulationsTutorial, 125, "TestSpheroidTutorial" ) {}
 void runTest() { suite_TestRunningTumourSpheroidSimulationsTutorial.TestSpheroidTutorial(); }
} testDescription_TestRunningTumourSpheroidSimulationsTutorial_TestSpheroidTutorial;

#include <cxxtest/Root.cpp>
