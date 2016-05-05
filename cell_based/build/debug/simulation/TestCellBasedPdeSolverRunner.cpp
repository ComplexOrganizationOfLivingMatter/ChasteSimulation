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
#include "cell_based/test/simulation/TestCellBasedPdeSolver.hpp"

static TestCellBasedPdeSolver suite_TestCellBasedPdeSolver;

static CxxTest::List Tests_TestCellBasedPdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellBasedPdeSolver( "cell_based/test/simulation/TestCellBasedPdeSolver.hpp", 53, "TestCellBasedPdeSolver", suite_TestCellBasedPdeSolver, Tests_TestCellBasedPdeSolver );

static class TestDescription_TestCellBasedPdeSolver_Test2dHeatEquationOnUnitSquare : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeSolver_Test2dHeatEquationOnUnitSquare() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeSolver, suiteDescription_TestCellBasedPdeSolver, 57, "Test2dHeatEquationOnUnitSquare" ) {}
 void runTest() { suite_TestCellBasedPdeSolver.Test2dHeatEquationOnUnitSquare(); }
} testDescription_TestCellBasedPdeSolver_Test2dHeatEquationOnUnitSquare;

#include <cxxtest/Root.cpp>
