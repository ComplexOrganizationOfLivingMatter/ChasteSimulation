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
#include "cell_based/test/cell/TestCellSrn.hpp"

static TestCellSrn suite_TestCellSrn;

static CxxTest::List Tests_TestCellSrn = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellSrn( "cell_based/test/cell/TestCellSrn.hpp", 55, "TestCellSrn", suite_TestCellSrn, Tests_TestCellSrn );

static class TestDescription_TestCellSrn_TestGoldbeter1991OdeSteadyState : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellSrn_TestGoldbeter1991OdeSteadyState() : CxxTest::RealTestDescription( Tests_TestCellSrn, suiteDescription_TestCellSrn, 59, "TestGoldbeter1991OdeSteadyState" ) {}
 void runTest() { suite_TestCellSrn.TestGoldbeter1991OdeSteadyState(); }
} testDescription_TestCellSrn_TestGoldbeter1991OdeSteadyState;

#include <cxxtest/Root.cpp>
