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
#include "ode/test/TestMockEulerIvpOdeSolver.hpp"

static TestMockEulerIvpOdeSolver suite_TestMockEulerIvpOdeSolver;

static CxxTest::List Tests_TestMockEulerIvpOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMockEulerIvpOdeSolver( "ode/test/TestMockEulerIvpOdeSolver.hpp", 51, "TestMockEulerIvpOdeSolver", suite_TestMockEulerIvpOdeSolver, Tests_TestMockEulerIvpOdeSolver );

static class TestDescription_TestMockEulerIvpOdeSolver_TestMockEulerSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMockEulerIvpOdeSolver_TestMockEulerSolver() : CxxTest::RealTestDescription( Tests_TestMockEulerIvpOdeSolver, suiteDescription_TestMockEulerIvpOdeSolver, 55, "TestMockEulerSolver" ) {}
 void runTest() { suite_TestMockEulerIvpOdeSolver.TestMockEulerSolver(); }
} testDescription_TestMockEulerIvpOdeSolver_TestMockEulerSolver;

static class TestDescription_TestMockEulerIvpOdeSolver_TestArchivingMockEulerSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMockEulerIvpOdeSolver_TestArchivingMockEulerSolver() : CxxTest::RealTestDescription( Tests_TestMockEulerIvpOdeSolver, suiteDescription_TestMockEulerIvpOdeSolver, 93, "TestArchivingMockEulerSolver" ) {}
 void runTest() { suite_TestMockEulerIvpOdeSolver.TestArchivingMockEulerSolver(); }
} testDescription_TestMockEulerIvpOdeSolver_TestArchivingMockEulerSolver;

#include <cxxtest/Root.cpp>
