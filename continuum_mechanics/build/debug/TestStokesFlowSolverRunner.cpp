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
#include "continuum_mechanics/test/TestStokesFlowSolver.hpp"

static TestStokesFlowSolver suite_TestStokesFlowSolver;

static CxxTest::List Tests_TestStokesFlowSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStokesFlowSolver( "continuum_mechanics/test/TestStokesFlowSolver.hpp", 55, "TestStokesFlowSolver", suite_TestStokesFlowSolver, Tests_TestStokesFlowSolver );

static class TestDescription_TestStokesFlowSolver_TestStokesExactSolutionSimple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestStokesExactSolutionSimple() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 63, "TestStokesExactSolutionSimple" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestStokesExactSolutionSimple(); }
} testDescription_TestStokesFlowSolver_TestStokesExactSolutionSimple;

static class TestDescription_TestStokesFlowSolver_TestStokesExactSolutionLessSimple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestStokesExactSolutionLessSimple() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 140, "TestStokesExactSolutionLessSimple" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestStokesExactSolutionLessSimple(); }
} testDescription_TestStokesFlowSolver_TestStokesExactSolutionLessSimple;

static class TestDescription_TestStokesFlowSolver_TestStokesWithImposedPipeCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestStokesWithImposedPipeCondition() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 205, "TestStokesWithImposedPipeCondition" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestStokesWithImposedPipeCondition(); }
} testDescription_TestStokesFlowSolver_TestStokesWithImposedPipeCondition;

static class TestDescription_TestStokesFlowSolver_TestStokesExactSolutionNonzeroNeumann : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestStokesExactSolutionNonzeroNeumann() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 298, "TestStokesExactSolutionNonzeroNeumann" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestStokesExactSolutionNonzeroNeumann(); }
} testDescription_TestStokesFlowSolver_TestStokesExactSolutionNonzeroNeumann;

static class TestDescription_TestStokesFlowSolver_TestConvergenceWithAnalyticSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestConvergenceWithAnalyticSolution() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 395, "TestConvergenceWithAnalyticSolution" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestConvergenceWithAnalyticSolution(); }
} testDescription_TestStokesFlowSolver_TestConvergenceWithAnalyticSolution;

static class TestDescription_TestStokesFlowSolver_TestStokesWithLidDrivenCavity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestStokesWithLidDrivenCavity() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 514, "TestStokesWithLidDrivenCavity" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestStokesWithLidDrivenCavity(); }
} testDescription_TestStokesFlowSolver_TestStokesWithLidDrivenCavity;

static class TestDescription_TestStokesFlowSolver_TestStokesSimple3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestStokesSimple3d() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 622, "TestStokesSimple3d" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestStokesSimple3d(); }
} testDescription_TestStokesFlowSolver_TestStokesSimple3d;

static class TestDescription_TestStokesFlowSolver_TestStokesWithLidDrivenCavity3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowSolver_TestStokesWithLidDrivenCavity3d() : CxxTest::RealTestDescription( Tests_TestStokesFlowSolver, suiteDescription_TestStokesFlowSolver, 692, "TestStokesWithLidDrivenCavity3d" ) {}
 void runTest() { suite_TestStokesFlowSolver.TestStokesWithLidDrivenCavity3d(); }
} testDescription_TestStokesFlowSolver_TestStokesWithLidDrivenCavity3d;

#include <cxxtest/Root.cpp>
