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
#include "cell_based/test/tutorial/TestRunningNodeBasedSimulationsTutorial.hpp"

static TestRunningNodeBasedSimulationsTutorial suite_TestRunningNodeBasedSimulationsTutorial;

static CxxTest::List Tests_TestRunningNodeBasedSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningNodeBasedSimulationsTutorial( "cell_based/test/tutorial/TestRunningNodeBasedSimulationsTutorial.hpp", 92, "TestRunningNodeBasedSimulationsTutorial", suite_TestRunningNodeBasedSimulationsTutorial, Tests_TestRunningNodeBasedSimulationsTutorial );

static class TestDescription_TestRunningNodeBasedSimulationsTutorial_TestMonolayer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningNodeBasedSimulationsTutorial_TestMonolayer() : CxxTest::RealTestDescription( Tests_TestRunningNodeBasedSimulationsTutorial, suiteDescription_TestRunningNodeBasedSimulationsTutorial, 104, "TestMonolayer" ) {}
 void runTest() { suite_TestRunningNodeBasedSimulationsTutorial.TestMonolayer(); }
} testDescription_TestRunningNodeBasedSimulationsTutorial_TestMonolayer;

static class TestDescription_TestRunningNodeBasedSimulationsTutorial_TestSpheroid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningNodeBasedSimulationsTutorial_TestSpheroid() : CxxTest::RealTestDescription( Tests_TestRunningNodeBasedSimulationsTutorial, suiteDescription_TestRunningNodeBasedSimulationsTutorial, 192, "TestSpheroid" ) {}
 void runTest() { suite_TestRunningNodeBasedSimulationsTutorial.TestSpheroid(); }
} testDescription_TestRunningNodeBasedSimulationsTutorial_TestSpheroid;

static class TestDescription_TestRunningNodeBasedSimulationsTutorial_TestOnSurfaceOfSphere : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningNodeBasedSimulationsTutorial_TestOnSurfaceOfSphere() : CxxTest::RealTestDescription( Tests_TestRunningNodeBasedSimulationsTutorial, suiteDescription_TestRunningNodeBasedSimulationsTutorial, 270, "TestOnSurfaceOfSphere" ) {}
 void runTest() { suite_TestRunningNodeBasedSimulationsTutorial.TestOnSurfaceOfSphere(); }
} testDescription_TestRunningNodeBasedSimulationsTutorial_TestOnSurfaceOfSphere;

#include <cxxtest/Root.cpp>
