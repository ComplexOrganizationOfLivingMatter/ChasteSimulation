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
#include "ode/test/TestHeun2IvpOdeSolver.hpp"

static TestHeun2IvpOdeSolver suite_TestHeun2IvpOdeSolver;

static CxxTest::List Tests_TestHeun2IvpOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeun2IvpOdeSolver( "ode/test/TestHeun2IvpOdeSolver.hpp", 60, "TestHeun2IvpOdeSolver", suite_TestHeun2IvpOdeSolver, Tests_TestHeun2IvpOdeSolver );

static class TestDescription_TestHeun2IvpOdeSolver_TestHeunSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestHeunSolver() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 164, "TestHeunSolver" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestHeunSolver(); }
} testDescription_TestHeun2IvpOdeSolver_TestHeunSolver;

static class TestDescription_TestHeun2IvpOdeSolver_TestGlobalError : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestGlobalError() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 181, "TestGlobalError" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestGlobalError(); }
} testDescription_TestHeun2IvpOdeSolver_TestGlobalError;

static class TestDescription_TestHeun2IvpOdeSolver_TestGlobalErrorSystemOf2Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestGlobalErrorSystemOf2Equations() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 206, "TestGlobalErrorSystemOf2Equations" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestGlobalErrorSystemOf2Equations(); }
} testDescription_TestHeun2IvpOdeSolver_TestGlobalErrorSystemOf2Equations;

static class TestDescription_TestHeun2IvpOdeSolver_TestGlobalErrorSystemOf3Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestGlobalErrorSystemOf3Equations() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 237, "TestGlobalErrorSystemOf3Equations" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestGlobalErrorSystemOf3Equations(); }
} testDescription_TestHeun2IvpOdeSolver_TestGlobalErrorSystemOf3Equations;

static class TestDescription_TestHeun2IvpOdeSolver_TestGlobalError2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestGlobalError2() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 270, "TestGlobalError2" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestGlobalError2(); }
} testDescription_TestHeun2IvpOdeSolver_TestGlobalError2;

static class TestDescription_TestHeun2IvpOdeSolver_TestOrderOnSimpleSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestOrderOnSimpleSystem() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 295, "TestOrderOnSimpleSystem" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestOrderOnSimpleSystem(); }
} testDescription_TestHeun2IvpOdeSolver_TestOrderOnSimpleSystem;

static class TestDescription_TestHeun2IvpOdeSolver_TestOrderOnMediumSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestOrderOnMediumSystem() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 328, "TestOrderOnMediumSystem" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestOrderOnMediumSystem(); }
} testDescription_TestHeun2IvpOdeSolver_TestOrderOnMediumSystem;

static class TestDescription_TestHeun2IvpOdeSolver_TestOrderOnHardSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestOrderOnHardSystem() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 360, "TestOrderOnHardSystem" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestOrderOnHardSystem(); }
} testDescription_TestHeun2IvpOdeSolver_TestOrderOnHardSystem;

static class TestDescription_TestHeun2IvpOdeSolver_TestArchivingSolvers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeun2IvpOdeSolver_TestArchivingSolvers() : CxxTest::RealTestDescription( Tests_TestHeun2IvpOdeSolver, suiteDescription_TestHeun2IvpOdeSolver, 392, "TestArchivingSolvers" ) {}
 void runTest() { suite_TestHeun2IvpOdeSolver.TestArchivingSolvers(); }
} testDescription_TestHeun2IvpOdeSolver_TestArchivingSolvers;

#include <cxxtest/Root.cpp>
