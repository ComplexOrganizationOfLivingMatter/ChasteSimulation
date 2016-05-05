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
#include "pde/test/TestCoupledCableTestProblem.hpp"

static TestCoupledCableTestProblem suite_TestCoupledCableTestProblem;

static CxxTest::List Tests_TestCoupledCableTestProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCoupledCableTestProblem( "pde/test/TestCoupledCableTestProblem.hpp", 277, "TestCoupledCableTestProblem", suite_TestCoupledCableTestProblem, Tests_TestCoupledCableTestProblem );

static class TestDescription_TestCoupledCableTestProblem_TestSolvingTestProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCoupledCableTestProblem_TestSolvingTestProblem() : CxxTest::RealTestDescription( Tests_TestCoupledCableTestProblem, suiteDescription_TestCoupledCableTestProblem, 280, "TestSolvingTestProblem" ) {}
 void runTest() { suite_TestCoupledCableTestProblem.TestSolvingTestProblem(); }
} testDescription_TestCoupledCableTestProblem_TestSolvingTestProblem;

#include <cxxtest/Root.cpp>
