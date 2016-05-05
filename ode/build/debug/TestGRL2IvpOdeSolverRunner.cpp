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
#include "ode/test/TestGRL2IvpOdeSolver.hpp"

static TestGRL2IvpOdeSolver suite_TestGRL2IvpOdeSolver;

static CxxTest::List Tests_TestGRL2IvpOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGRL2IvpOdeSolver( "ode/test/TestGRL2IvpOdeSolver.hpp", 71, "TestGRL2IvpOdeSolver", suite_TestGRL2IvpOdeSolver, Tests_TestGRL2IvpOdeSolver );

static class TestDescription_TestGRL2IvpOdeSolver_TestGRL2Solver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL2IvpOdeSolver_TestGRL2Solver() : CxxTest::RealTestDescription( Tests_TestGRL2IvpOdeSolver, suiteDescription_TestGRL2IvpOdeSolver, 178, "TestGRL2Solver" ) {}
 void runTest() { suite_TestGRL2IvpOdeSolver.TestGRL2Solver(); }
} testDescription_TestGRL2IvpOdeSolver_TestGRL2Solver;

static class TestDescription_TestGRL2IvpOdeSolver_TestOrderOdeThirdOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL2IvpOdeSolver_TestOrderOdeThirdOrder() : CxxTest::RealTestDescription( Tests_TestGRL2IvpOdeSolver, suiteDescription_TestGRL2IvpOdeSolver, 195, "TestOrderOdeThirdOrder" ) {}
 void runTest() { suite_TestGRL2IvpOdeSolver.TestOrderOdeThirdOrder(); }
} testDescription_TestGRL2IvpOdeSolver_TestOrderOdeThirdOrder;

static class TestDescription_TestGRL2IvpOdeSolver_TestOrderOnMediumSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL2IvpOdeSolver_TestOrderOnMediumSystem() : CxxTest::RealTestDescription( Tests_TestGRL2IvpOdeSolver, suiteDescription_TestGRL2IvpOdeSolver, 248, "TestOrderOnMediumSystem" ) {}
 void runTest() { suite_TestGRL2IvpOdeSolver.TestOrderOnMediumSystem(); }
} testDescription_TestGRL2IvpOdeSolver_TestOrderOnMediumSystem;

static class TestDescription_TestGRL2IvpOdeSolver_TestOrderOnHardSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL2IvpOdeSolver_TestOrderOnHardSystem() : CxxTest::RealTestDescription( Tests_TestGRL2IvpOdeSolver, suiteDescription_TestGRL2IvpOdeSolver, 280, "TestOrderOnHardSystem" ) {}
 void runTest() { suite_TestGRL2IvpOdeSolver.TestOrderOnHardSystem(); }
} testDescription_TestGRL2IvpOdeSolver_TestOrderOnHardSystem;

static class TestDescription_TestGRL2IvpOdeSolver_TestArchivingSolvers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGRL2IvpOdeSolver_TestArchivingSolvers() : CxxTest::RealTestDescription( Tests_TestGRL2IvpOdeSolver, suiteDescription_TestGRL2IvpOdeSolver, 311, "TestArchivingSolvers" ) {}
 void runTest() { suite_TestGRL2IvpOdeSolver.TestArchivingSolvers(); }
} testDescription_TestGRL2IvpOdeSolver_TestArchivingSolvers;

#include <cxxtest/Root.cpp>
