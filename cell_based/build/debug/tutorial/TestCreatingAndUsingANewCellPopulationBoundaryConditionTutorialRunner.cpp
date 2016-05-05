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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial.hpp"

static TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial suite_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial.hpp", 244, "TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial", suite_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial, Tests_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial );

static class TestDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial_TestMyBoundaryCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial_TestMyBoundaryCondition() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial, suiteDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial, 257, "TestMyBoundaryCondition" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial.TestMyBoundaryCondition(); }
} testDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial_TestMyBoundaryCondition;

static class TestDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial_TestOffLatticeSimulationWithMyBoundaryCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial_TestOffLatticeSimulationWithMyBoundaryCondition() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial, suiteDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial, 329, "TestOffLatticeSimulationWithMyBoundaryCondition" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial.TestOffLatticeSimulationWithMyBoundaryCondition(); }
} testDescription_TestCreatingAndUsingANewCellPopulationBoundaryConditionTutorial_TestOffLatticeSimulationWithMyBoundaryCondition;

#include <cxxtest/Root.cpp>
