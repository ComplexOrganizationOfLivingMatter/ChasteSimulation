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
#include "pde/test/TestCableTestProblem.hpp"

static TestCableTestProblem suite_TestCableTestProblem;

static CxxTest::List Tests_TestCableTestProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCableTestProblem( "pde/test/TestCableTestProblem.hpp", 131, "TestCableTestProblem", suite_TestCableTestProblem, Tests_TestCableTestProblem );

static class TestDescription_TestCableTestProblem_TestSolvingTestProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCableTestProblem_TestSolvingTestProblem() : CxxTest::RealTestDescription( Tests_TestCableTestProblem, suiteDescription_TestCableTestProblem, 134, "TestSolvingTestProblem" ) {}
 void runTest() { suite_TestCableTestProblem.TestSolvingTestProblem(); }
} testDescription_TestCableTestProblem_TestSolvingTestProblem;

#include <cxxtest/Root.cpp>
