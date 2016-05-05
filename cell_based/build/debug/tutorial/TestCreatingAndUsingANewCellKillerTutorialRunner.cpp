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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewCellKillerTutorial.hpp"

static TestCreatingAndUsingANewCellKillerTutorial suite_TestCreatingAndUsingANewCellKillerTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewCellKillerTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewCellKillerTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewCellKillerTutorial.hpp", 195, "TestCreatingAndUsingANewCellKillerTutorial", suite_TestCreatingAndUsingANewCellKillerTutorial, Tests_TestCreatingAndUsingANewCellKillerTutorial );

static class TestDescription_TestCreatingAndUsingANewCellKillerTutorial_TestMyCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellKillerTutorial_TestMyCellKiller() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellKillerTutorial, suiteDescription_TestCreatingAndUsingANewCellKillerTutorial, 204, "TestMyCellKiller" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellKillerTutorial.TestMyCellKiller(); }
} testDescription_TestCreatingAndUsingANewCellKillerTutorial_TestMyCellKiller;

static class TestDescription_TestCreatingAndUsingANewCellKillerTutorial_TestOffLatticeSimulationWithMyCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellKillerTutorial_TestOffLatticeSimulationWithMyCellKiller() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellKillerTutorial, suiteDescription_TestCreatingAndUsingANewCellKillerTutorial, 296, "TestOffLatticeSimulationWithMyCellKiller" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellKillerTutorial.TestOffLatticeSimulationWithMyCellKiller(); }
} testDescription_TestCreatingAndUsingANewCellKillerTutorial_TestOffLatticeSimulationWithMyCellKiller;

#include <cxxtest/Root.cpp>
