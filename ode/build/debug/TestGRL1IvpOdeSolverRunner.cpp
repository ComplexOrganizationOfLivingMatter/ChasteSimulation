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
#include "ode/test/TestGRL1IvpOdeSolver.hpp"

static TestGRL1IvpOdeSolver suite_TestGRL1IvpOdeSolver;

static CxxTest::List Tests_TestGRL1IvpOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGRL1IvpOdeSolver( "ode/test/TestGRL1IvpOdeSolver.hpp", 71, "TestGRL1IvpOdeSolver", suite_TestGRL1IvpOdeSolver, Tests_TestGRL1IvpOdeSolver );

static class TestDescription_TestGRL1IvpOdeSolver_TestGRL1Solver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL1IvpOdeSolver_TestGRL1Solver() : CxxTest::RealTestDescription( Tests_TestGRL1IvpOdeSolver, suiteDescription_TestGRL1IvpOdeSolver, 178, "TestGRL1Solver" ) {}
 void runTest() { suite_TestGRL1IvpOdeSolver.TestGRL1Solver(); }
} testDescription_TestGRL1IvpOdeSolver_TestGRL1Solver;

static class TestDescription_TestGRL1IvpOdeSolver_TestOrderOdeThirdOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL1IvpOdeSolver_TestOrderOdeThirdOrder() : CxxTest::RealTestDescription( Tests_TestGRL1IvpOdeSolver, suiteDescription_TestGRL1IvpOdeSolver, 195, "TestOrderOdeThirdOrder" ) {}
 void runTest() { suite_TestGRL1IvpOdeSolver.TestOrderOdeThirdOrder(); }
} testDescription_TestGRL1IvpOdeSolver_TestOrderOdeThirdOrder;

static class TestDescription_TestGRL1IvpOdeSolver_TestOrderOnSimpleSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL1IvpOdeSolver_TestOrderOnSimpleSystem() : CxxTest::RealTestDescription( Tests_TestGRL1IvpOdeSolver, suiteDescription_TestGRL1IvpOdeSolver, 250, "TestOrderOnSimpleSystem" ) {}
 void runTest() { suite_TestGRL1IvpOdeSolver.TestOrderOnSimpleSystem(); }
} testDescription_TestGRL1IvpOdeSolver_TestOrderOnSimpleSystem;

static class TestDescription_TestGRL1IvpOdeSolver_TestOrderOnMediumSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL1IvpOdeSolver_TestOrderOnMediumSystem() : CxxTest::RealTestDescription( Tests_TestGRL1IvpOdeSolver, suiteDescription_TestGRL1IvpOdeSolver, 282, "TestOrderOnMediumSystem" ) {}
 void runTest() { suite_TestGRL1IvpOdeSolver.TestOrderOnMediumSystem(); }
} testDescription_TestGRL1IvpOdeSolver_TestOrderOnMediumSystem;

static class TestDescription_TestGRL1IvpOdeSolver_TestOrderOnHardSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL1IvpOdeSolver_TestOrderOnHardSystem() : CxxTest::RealTestDescription( Tests_TestGRL1IvpOdeSolver, suiteDescription_TestGRL1IvpOdeSolver, 314, "TestOrderOnHardSystem" ) {}
 void runTest() { suite_TestGRL1IvpOdeSolver.TestOrderOnHardSystem(); }
} testDescription_TestGRL1IvpOdeSolver_TestOrderOnHardSystem;

static class TestDescription_TestGRL1IvpOdeSolver_TestArchivingSolvers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL1IvpOdeSolver_TestArchivingSolvers() : CxxTest::RealTestDescription( Tests_TestGRL1IvpOdeSolver, suiteDescription_TestGRL1IvpOdeSolver, 345, "TestArchivingSolvers" ) {}
 void runTest() { suite_TestGRL1IvpOdeSolver.TestArchivingSolvers(); }
} testDescription_TestGRL1IvpOdeSolver_TestArchivingSolvers;

#include <cxxtest/Root.cpp>
