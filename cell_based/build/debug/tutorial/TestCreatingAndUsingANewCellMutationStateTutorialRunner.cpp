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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewCellMutationStateTutorial.hpp"

static TestCreatingAndUsingANewCellMutationStateTutorial suite_TestCreatingAndUsingANewCellMutationStateTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewCellMutationStateTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewCellMutationStateTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewCellMutationStateTutorial.hpp", 157, "TestCreatingAndUsingANewCellMutationStateTutorial", suite_TestCreatingAndUsingANewCellMutationStateTutorial, Tests_TestCreatingAndUsingANewCellMutationStateTutorial );

static class TestDescription_TestCreatingAndUsingANewCellMutationStateTutorial_TestP53GainOfFunctionCellMutationState : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellMutationStateTutorial_TestP53GainOfFunctionCellMutationState() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellMutationStateTutorial, suiteDescription_TestCreatingAndUsingANewCellMutationStateTutorial, 170, "TestP53GainOfFunctionCellMutationState" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellMutationStateTutorial.TestP53GainOfFunctionCellMutationState(); }
} testDescription_TestCreatingAndUsingANewCellMutationStateTutorial_TestP53GainOfFunctionCellMutationState;

static class TestDescription_TestCreatingAndUsingANewCellMutationStateTutorial_TestOffLatticeSimulationWithP53GainOfFunctionCellMutationState : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellMutationStateTutorial_TestOffLatticeSimulationWithP53GainOfFunctionCellMutationState() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellMutationStateTutorial, suiteDescription_TestCreatingAndUsingANewCellMutationStateTutorial, 249, "TestOffLatticeSimulationWithP53GainOfFunctionCellMutationState" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellMutationStateTutorial.TestOffLatticeSimulationWithP53GainOfFunctionCellMutationState(); }
} testDescription_TestCreatingAndUsingANewCellMutationStateTutorial_TestOffLatticeSimulationWithP53GainOfFunctionCellMutationState;

#include <cxxtest/Root.cpp>
