/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "heart/test/mechanics/TestNhsModelWithBackwardSolver.hpp"

static TestNhsModelWithBackwardSolver suite_TestNhsModelWithBackwardSolver;

static CxxTest::List Tests_TestNhsModelWithBackwardSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNhsModelWithBackwardSolver( "heart/test/mechanics/TestNhsModelWithBackwardSolver.hpp", 51, "TestNhsModelWithBackwardSolver", suite_TestNhsModelWithBackwardSolver, Tests_TestNhsModelWithBackwardSolver );

static class TestDescription_TestNhsModelWithBackwardSolver_TestSolverSingleTimestep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNhsModelWithBackwardSolver_TestSolverSingleTimestep() : CxxTest::RealTestDescription( Tests_TestNhsModelWithBackwardSolver, suiteDescription_TestNhsModelWithBackwardSolver, 63, "TestSolverSingleTimestep" ) {}
 void runTest() { suite_TestNhsModelWithBackwardSolver.TestSolverSingleTimestep(); }
} testDescription_TestNhsModelWithBackwardSolver_TestSolverSingleTimestep;

static class TestDescription_TestNhsModelWithBackwardSolver_TestSolverManyTimestepsCompareWithEuler : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNhsModelWithBackwardSolver_TestSolverManyTimestepsCompareWithEuler() : CxxTest::RealTestDescription( Tests_TestNhsModelWithBackwardSolver, suiteDescription_TestNhsModelWithBackwardSolver, 111, "TestSolverManyTimestepsCompareWithEuler" ) {}
 void runTest() { suite_TestNhsModelWithBackwardSolver.TestSolverManyTimestepsCompareWithEuler(); }
} testDescription_TestNhsModelWithBackwardSolver_TestSolverManyTimestepsCompareWithEuler;

static class TestDescription_TestNhsModelWithBackwardSolver_TestRunDoesNotUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNhsModelWithBackwardSolver_TestRunDoesNotUpdate() : CxxTest::RealTestDescription( Tests_TestNhsModelWithBackwardSolver, suiteDescription_TestNhsModelWithBackwardSolver, 194, "TestRunDoesNotUpdate" ) {}
 void runTest() { suite_TestNhsModelWithBackwardSolver.TestRunDoesNotUpdate(); }
} testDescription_TestNhsModelWithBackwardSolver_TestRunDoesNotUpdate;

static class TestDescription_TestNhsModelWithBackwardSolver_TestGetActiveTension : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNhsModelWithBackwardSolver_TestGetActiveTension() : CxxTest::RealTestDescription( Tests_TestNhsModelWithBackwardSolver, suiteDescription_TestNhsModelWithBackwardSolver, 247, "TestGetActiveTension" ) {}
 void runTest() { suite_TestNhsModelWithBackwardSolver.TestGetActiveTension(); }
} testDescription_TestNhsModelWithBackwardSolver_TestGetActiveTension;

#include <cxxtest/Root.cpp>
