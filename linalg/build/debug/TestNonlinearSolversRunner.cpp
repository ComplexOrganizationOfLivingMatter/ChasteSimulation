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
#include "linalg/test/TestNonlinearSolvers.hpp"

static TestNonlinearSolvers suite_TestNonlinearSolvers;

static CxxTest::List Tests_TestNonlinearSolvers = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNonlinearSolvers( "linalg/test/TestNonlinearSolvers.hpp", 59, "TestNonlinearSolvers", suite_TestNonlinearSolvers, Tests_TestNonlinearSolvers );

static class TestDescription_TestNonlinearSolvers_TestNonlinearProblemException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonlinearSolvers_TestNonlinearProblemException() : CxxTest::RealTestDescription( Tests_TestNonlinearSolvers, suiteDescription_TestNonlinearSolvers, 62, "TestNonlinearProblemException" ) {}
 void runTest() { suite_TestNonlinearSolvers.TestNonlinearProblemException(); }
} testDescription_TestNonlinearSolvers_TestNonlinearProblemException;

static class TestDescription_TestNonlinearSolvers_TestOn2dNonlinearProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonlinearSolvers_TestOn2dNonlinearProblem() : CxxTest::RealTestDescription( Tests_TestNonlinearSolvers, suiteDescription_TestNonlinearSolvers, 79, "TestOn2dNonlinearProblem" ) {}
 void runTest() { suite_TestNonlinearSolvers.TestOn2dNonlinearProblem(); }
} testDescription_TestNonlinearSolvers_TestOn2dNonlinearProblem;

static class TestDescription_TestNonlinearSolvers_TestOn3dNonlinearProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonlinearSolvers_TestOn3dNonlinearProblem() : CxxTest::RealTestDescription( Tests_TestNonlinearSolvers, suiteDescription_TestNonlinearSolvers, 119, "TestOn3dNonlinearProblem" ) {}
 void runTest() { suite_TestNonlinearSolvers.TestOn3dNonlinearProblem(); }
} testDescription_TestNonlinearSolvers_TestOn3dNonlinearProblem;

#include <cxxtest/Root.cpp>
