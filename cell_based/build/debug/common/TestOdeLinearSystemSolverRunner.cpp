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
#include "cell_based/test/common/TestOdeLinearSystemSolver.hpp"

static TestOdeLinearSystemSolver suite_TestOdeLinearSystemSolver;

static CxxTest::List Tests_TestOdeLinearSystemSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOdeLinearSystemSolver( "cell_based/test/common/TestOdeLinearSystemSolver.hpp", 49, "TestOdeLinearSystemSolver", suite_TestOdeLinearSystemSolver, Tests_TestOdeLinearSystemSolver );

static class TestDescription_TestOdeLinearSystemSolver_TestWithTrivial2dProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeLinearSystemSolver_TestWithTrivial2dProblem() : CxxTest::RealTestDescription( Tests_TestOdeLinearSystemSolver, suiteDescription_TestOdeLinearSystemSolver, 55, "TestWithTrivial2dProblem" ) {}
 void runTest() { suite_TestOdeLinearSystemSolver.TestWithTrivial2dProblem(); }
} testDescription_TestOdeLinearSystemSolver_TestWithTrivial2dProblem;

static class TestDescription_TestOdeLinearSystemSolver_TestWithSimple2dProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeLinearSystemSolver_TestWithSimple2dProblem() : CxxTest::RealTestDescription( Tests_TestOdeLinearSystemSolver, suiteDescription_TestOdeLinearSystemSolver, 107, "TestWithSimple2dProblem" ) {}
 void runTest() { suite_TestOdeLinearSystemSolver.TestWithSimple2dProblem(); }
} testDescription_TestOdeLinearSystemSolver_TestWithSimple2dProblem;

static class TestDescription_TestOdeLinearSystemSolver_TestWithSimple4dProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeLinearSystemSolver_TestWithSimple4dProblem() : CxxTest::RealTestDescription( Tests_TestOdeLinearSystemSolver, suiteDescription_TestOdeLinearSystemSolver, 157, "TestWithSimple4dProblem" ) {}
 void runTest() { suite_TestOdeLinearSystemSolver.TestWithSimple4dProblem(); }
} testDescription_TestOdeLinearSystemSolver_TestWithSimple4dProblem;

#include <cxxtest/Root.cpp>
