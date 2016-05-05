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
#include "cell_based/test/cell/TestCellCycleModelOdeSolver.hpp"

static TestCellCycleModelOdeSolver suite_TestCellCycleModelOdeSolver;

static CxxTest::List Tests_TestCellCycleModelOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellCycleModelOdeSolver( "cell_based/test/cell/TestCellCycleModelOdeSolver.hpp", 129, "TestCellCycleModelOdeSolver", suite_TestCellCycleModelOdeSolver, Tests_TestCellCycleModelOdeSolver );

static class TestDescription_TestCellCycleModelOdeSolver_TestMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellCycleModelOdeSolver_TestMethods() : CxxTest::RealTestDescription( Tests_TestCellCycleModelOdeSolver, suiteDescription_TestCellCycleModelOdeSolver, 133, "TestMethods" ) {}
 void runTest() { suite_TestCellCycleModelOdeSolver.TestMethods(); }
} testDescription_TestCellCycleModelOdeSolver_TestMethods;

static class TestDescription_TestCellCycleModelOdeSolver_TestWithBackwardEulerIvpOdeSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellCycleModelOdeSolver_TestWithBackwardEulerIvpOdeSolver() : CxxTest::RealTestDescription( Tests_TestCellCycleModelOdeSolver, suiteDescription_TestCellCycleModelOdeSolver, 170, "TestWithBackwardEulerIvpOdeSolver" ) {}
 void runTest() { suite_TestCellCycleModelOdeSolver.TestWithBackwardEulerIvpOdeSolver(); }
} testDescription_TestCellCycleModelOdeSolver_TestWithBackwardEulerIvpOdeSolver;

static class TestDescription_TestCellCycleModelOdeSolver_TestWithCvodeAdaptor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellCycleModelOdeSolver_TestWithCvodeAdaptor() : CxxTest::RealTestDescription( Tests_TestCellCycleModelOdeSolver, suiteDescription_TestCellCycleModelOdeSolver, 216, "TestWithCvodeAdaptor" ) {}
 void runTest() { suite_TestCellCycleModelOdeSolver.TestWithCvodeAdaptor(); }
} testDescription_TestCellCycleModelOdeSolver_TestWithCvodeAdaptor;

static class TestDescription_TestCellCycleModelOdeSolver_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellCycleModelOdeSolver_TestArchiving() : CxxTest::RealTestDescription( Tests_TestCellCycleModelOdeSolver, suiteDescription_TestCellCycleModelOdeSolver, 240, "TestArchiving" ) {}
 void runTest() { suite_TestCellCycleModelOdeSolver.TestArchiving(); }
} testDescription_TestCellCycleModelOdeSolver_TestArchiving;

#include <cxxtest/Root.cpp>
