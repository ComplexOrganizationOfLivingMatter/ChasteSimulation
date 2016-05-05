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
#include "ode/test/TestAbstractIvpOdeSolver.hpp"

static TestAbstractIvpOdeSolver suite_TestAbstractIvpOdeSolver;

static CxxTest::List Tests_TestAbstractIvpOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractIvpOdeSolver( "ode/test/TestAbstractIvpOdeSolver.hpp", 72, "TestAbstractIvpOdeSolver", suite_TestAbstractIvpOdeSolver, Tests_TestAbstractIvpOdeSolver );

static class TestDescription_TestAbstractIvpOdeSolver_TestCoverageOfWriteToFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestCoverageOfWriteToFile() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 179, "TestCoverageOfWriteToFile" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestCoverageOfWriteToFile(); }
} testDescription_TestAbstractIvpOdeSolver_TestCoverageOfWriteToFile;

static class TestDescription_TestAbstractIvpOdeSolver_TestEulerSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestEulerSolver() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 208, "TestEulerSolver" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestEulerSolver(); }
} testDescription_TestAbstractIvpOdeSolver_TestEulerSolver;

static class TestDescription_TestAbstractIvpOdeSolver_TestRungeKutta2Solver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestRungeKutta2Solver() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 231, "TestRungeKutta2Solver" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestRungeKutta2Solver(); }
} testDescription_TestAbstractIvpOdeSolver_TestRungeKutta2Solver;

static class TestDescription_TestAbstractIvpOdeSolver_TestRungeKutta4Solver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestRungeKutta4Solver() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 249, "TestRungeKutta4Solver" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestRungeKutta4Solver(); }
} testDescription_TestAbstractIvpOdeSolver_TestRungeKutta4Solver;

static class TestDescription_TestAbstractIvpOdeSolver_TestWithParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestWithParameters() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 266, "TestWithParameters" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestWithParameters(); }
} testDescription_TestAbstractIvpOdeSolver_TestWithParameters;

static class TestDescription_TestAbstractIvpOdeSolver_TestLastTimeStep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestLastTimeStep() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 328, "TestLastTimeStep" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestLastTimeStep(); }
} testDescription_TestAbstractIvpOdeSolver_TestLastTimeStep;

static class TestDescription_TestAbstractIvpOdeSolver_TestGlobalError : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestGlobalError() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 350, "TestGlobalError" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestGlobalError(); }
} testDescription_TestAbstractIvpOdeSolver_TestGlobalError;

static class TestDescription_TestAbstractIvpOdeSolver_TestGlobalErrorSystemOf2Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestGlobalErrorSystemOf2Equations() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 424, "TestGlobalErrorSystemOf2Equations" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestGlobalErrorSystemOf2Equations(); }
} testDescription_TestAbstractIvpOdeSolver_TestGlobalErrorSystemOf2Equations;

static class TestDescription_TestAbstractIvpOdeSolver_TestGlobalErrorSystemOf3Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestGlobalErrorSystemOf3Equations() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 487, "TestGlobalErrorSystemOf3Equations" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestGlobalErrorSystemOf3Equations(); }
} testDescription_TestAbstractIvpOdeSolver_TestGlobalErrorSystemOf3Equations;

static class TestDescription_TestAbstractIvpOdeSolver_TestGlobalError2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestGlobalError2() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 558, "TestGlobalError2" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestGlobalError2(); }
} testDescription_TestAbstractIvpOdeSolver_TestGlobalError2;

static class TestDescription_TestAbstractIvpOdeSolver_TestArchivingSolvers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractIvpOdeSolver_TestArchivingSolvers() : CxxTest::RealTestDescription( Tests_TestAbstractIvpOdeSolver, suiteDescription_TestAbstractIvpOdeSolver, 608, "TestArchivingSolvers" ) {}
 void runTest() { suite_TestAbstractIvpOdeSolver.TestArchivingSolvers(); }
} testDescription_TestAbstractIvpOdeSolver_TestArchivingSolvers;

#include <cxxtest/Root.cpp>
