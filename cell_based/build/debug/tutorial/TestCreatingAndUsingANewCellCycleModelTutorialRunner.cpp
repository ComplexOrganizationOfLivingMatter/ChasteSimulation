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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewCellCycleModelTutorial.hpp"

static TestCreatingAndUsingANewCellCycleModelTutorial suite_TestCreatingAndUsingANewCellCycleModelTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewCellCycleModelTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewCellCycleModelTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewCellCycleModelTutorial.hpp", 238, "TestCreatingAndUsingANewCellCycleModelTutorial", suite_TestCreatingAndUsingANewCellCycleModelTutorial, Tests_TestCreatingAndUsingANewCellCycleModelTutorial );

static class TestDescription_TestCreatingAndUsingANewCellCycleModelTutorial_TestMyCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellCycleModelTutorial_TestMyCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellCycleModelTutorial, suiteDescription_TestCreatingAndUsingANewCellCycleModelTutorial, 247, "TestMyCellCycleModel" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellCycleModelTutorial.TestMyCellCycleModel(); }
} testDescription_TestCreatingAndUsingANewCellCycleModelTutorial_TestMyCellCycleModel;

static class TestDescription_TestCreatingAndUsingANewCellCycleModelTutorial_TestOffLatticeSimulationWithMyCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellCycleModelTutorial_TestOffLatticeSimulationWithMyCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellCycleModelTutorial, suiteDescription_TestCreatingAndUsingANewCellCycleModelTutorial, 377, "TestOffLatticeSimulationWithMyCellCycleModel" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellCycleModelTutorial.TestOffLatticeSimulationWithMyCellCycleModel(); }
} testDescription_TestCreatingAndUsingANewCellCycleModelTutorial_TestOffLatticeSimulationWithMyCellCycleModel;

#include <cxxtest/Root.cpp>
