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
#include "pde/test/TestSimpleNonlinearEllipticSolver.hpp"

static TestSimpleNonlinearEllipticSolver suite_TestSimpleNonlinearEllipticSolver;

static CxxTest::List Tests_TestSimpleNonlinearEllipticSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimpleNonlinearEllipticSolver( "pde/test/TestSimpleNonlinearEllipticSolver.hpp", 102, "TestSimpleNonlinearEllipticSolver", suite_TestSimpleNonlinearEllipticSolver, Tests_TestSimpleNonlinearEllipticSolver );

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestNumericalAgainstAnalyticJacobian : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestNumericalAgainstAnalyticJacobian() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 105, "TestNumericalAgainstAnalyticJacobian" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestNumericalAgainstAnalyticJacobian(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestNumericalAgainstAnalyticJacobian;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 127, "TestWithHeatEquation1D" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation1D(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1DAndNeumannBCs : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1DAndNeumannBCs() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 163, "TestWithHeatEquation1DAndNeumannBCs" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation1DAndNeumannBCs(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1DAndNeumannBCs;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D2() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 206, "TestWithHeatEquation1D2" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation1D2(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D2;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D3 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D3() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 248, "TestWithHeatEquation1D3" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation1D3(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D3;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D4 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D4() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 294, "TestWithHeatEquation1D4" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation1D4(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D4;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D5 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D5() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 340, "TestWithHeatEquation1D5" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation1D5(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1D5;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1DAndNeumannBCs2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1DAndNeumannBCs2() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 389, "TestWithHeatEquation1DAndNeumannBCs2" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation1DAndNeumannBCs2(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation1DAndNeumannBCs2;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestHeatEquationWithNeumannOnUnitDisc : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestHeatEquationWithNeumannOnUnitDisc() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 438, "TestHeatEquationWithNeumannOnUnitDisc" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestHeatEquationWithNeumannOnUnitDisc(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestHeatEquationWithNeumannOnUnitDisc;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation2DAndNeumannBCs : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation2DAndNeumannBCs() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 485, "TestWithHeatEquation2DAndNeumannBCs" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestWithHeatEquation2DAndNeumannBCs(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestWithHeatEquation2DAndNeumannBCs;

static class TestDescription_TestSimpleNonlinearEllipticSolver_Test2dOnUnitSquare : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_Test2dOnUnitSquare() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 552, "Test2dOnUnitSquare" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.Test2dOnUnitSquare(); }
} testDescription_TestSimpleNonlinearEllipticSolver_Test2dOnUnitSquare;

static class TestDescription_TestSimpleNonlinearEllipticSolver_TestNasty2dEquationOnUnitSquare : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleNonlinearEllipticSolver_TestNasty2dEquationOnUnitSquare() : CxxTest::RealTestDescription( Tests_TestSimpleNonlinearEllipticSolver, suiteDescription_TestSimpleNonlinearEllipticSolver, 650, "TestNasty2dEquationOnUnitSquare" ) {}
 void runTest() { suite_TestSimpleNonlinearEllipticSolver.TestNasty2dEquationOnUnitSquare(); }
} testDescription_TestSimpleNonlinearEllipticSolver_TestNasty2dEquationOnUnitSquare;

#include <cxxtest/Root.cpp>
