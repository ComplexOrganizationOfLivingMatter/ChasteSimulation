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
#include "pde/test/TestSimpleLinearParabolicSolver.hpp"

static TestSimpleLinearParabolicSolver suite_TestSimpleLinearParabolicSolver;

static CxxTest::List Tests_TestSimpleLinearParabolicSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimpleLinearParabolicSolver( "pde/test/TestSimpleLinearParabolicSolver.hpp", 156, "TestSimpleLinearParabolicSolver", suite_TestSimpleLinearParabolicSolver, Tests_TestSimpleLinearParabolicSolver );

static class TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver1DZeroDirich : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver1DZeroDirich() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 160, "TestSimpleLinearParabolicSolver1DZeroDirich" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestSimpleLinearParabolicSolver1DZeroDirich(); }
} testDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver1DZeroDirich;

static class TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver1DZeroDirichWithSourceTerm : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver1DZeroDirichWithSourceTerm() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 217, "TestSimpleLinearParabolicSolver1DZeroDirichWithSourceTerm" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestSimpleLinearParabolicSolver1DZeroDirichWithSourceTerm(); }
} testDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver1DZeroDirichWithSourceTerm;

static class TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolverNonzeroNeumannCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolverNonzeroNeumannCondition() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 269, "TestSimpleLinearParabolicSolverNonzeroNeumannCondition" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestSimpleLinearParabolicSolverNonzeroNeumannCondition(); }
} testDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolverNonzeroNeumannCondition;

static class TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DZeroDirich : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DZeroDirich() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 324, "TestSimpleLinearParabolicSolver2DZeroDirich" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestSimpleLinearParabolicSolver2DZeroDirich(); }
} testDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DZeroDirich;

static class TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DNonzeroDirichWithSourceTerm : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DNonzeroDirichWithSourceTerm() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 448, "TestSimpleLinearParabolicSolver2DNonzeroDirichWithSourceTerm" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestSimpleLinearParabolicSolver2DNonzeroDirichWithSourceTerm(); }
} testDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DNonzeroDirichWithSourceTerm;

static class TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DMixedOnCoarseMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DMixedOnCoarseMesh() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 582, "TestSimpleLinearParabolicSolver2DMixedOnCoarseMesh" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestSimpleLinearParabolicSolver2DMixedOnCoarseMesh(); }
} testDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DMixedOnCoarseMesh;

static class TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DMixed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DMixed() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 662, "TestSimpleLinearParabolicSolver2DMixed" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestSimpleLinearParabolicSolver2DMixed(); }
} testDescription_TestSimpleLinearParabolicSolver_TestSimpleLinearParabolicSolver2DMixed;

static class TestDescription_TestSimpleLinearParabolicSolver_TestHeatEquationSolutionDoesntDrift2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestHeatEquationSolutionDoesntDrift2D() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 746, "TestHeatEquationSolutionDoesntDrift2D" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestHeatEquationSolutionDoesntDrift2D(); }
} testDescription_TestSimpleLinearParabolicSolver_TestHeatEquationSolutionDoesntDrift2D;

static class TestDescription_TestSimpleLinearParabolicSolver_TestHeatEquationSolutionDoesntDrift1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_TestHeatEquationSolutionDoesntDrift1D() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 793, "TestHeatEquationSolutionDoesntDrift1D" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.TestHeatEquationSolutionDoesntDrift1D(); }
} testDescription_TestSimpleLinearParabolicSolver_TestHeatEquationSolutionDoesntDrift1D;

static class TestDescription_TestSimpleLinearParabolicSolver_Test1DProblemUsingTimeAdaptivityController : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearParabolicSolver_Test1DProblemUsingTimeAdaptivityController() : CxxTest::RealTestDescription( Tests_TestSimpleLinearParabolicSolver, suiteDescription_TestSimpleLinearParabolicSolver, 966, "Test1DProblemUsingTimeAdaptivityController" ) {}
 void runTest() { suite_TestSimpleLinearParabolicSolver.Test1DProblemUsingTimeAdaptivityController(); }
} testDescription_TestSimpleLinearParabolicSolver_Test1DProblemUsingTimeAdaptivityController;

#include <cxxtest/Root.cpp>
