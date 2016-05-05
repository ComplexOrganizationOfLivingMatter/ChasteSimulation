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
#include "cell_based/test/cell/TestCellMutationStates.hpp"

static TestCellMutationStates suite_TestCellMutationStates;

static CxxTest::List Tests_TestCellMutationStates = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellMutationStates( "cell_based/test/cell/TestCellMutationStates.hpp", 60, "TestCellMutationStates", suite_TestCellMutationStates, Tests_TestCellMutationStates );

static class TestDescription_TestCellMutationStates_TestCellMutationStateMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellMutationStates_TestCellMutationStateMethods() : CxxTest::RealTestDescription( Tests_TestCellMutationStates, suiteDescription_TestCellMutationStates, 64, "TestCellMutationStateMethods" ) {}
 void runTest() { suite_TestCellMutationStates.TestCellMutationStateMethods(); }
} testDescription_TestCellMutationStates_TestCellMutationStateMethods;

static class TestDescription_TestCellMutationStates_TestArchiveCellMutationState : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellMutationStates_TestArchiveCellMutationState() : CxxTest::RealTestDescription( Tests_TestCellMutationStates, suiteDescription_TestCellMutationStates, 95, "TestArchiveCellMutationState" ) {}
 void runTest() { suite_TestCellMutationStates.TestArchiveCellMutationState(); }
} testDescription_TestCellMutationStates_TestArchiveCellMutationState;

#include <cxxtest/Root.cpp>
