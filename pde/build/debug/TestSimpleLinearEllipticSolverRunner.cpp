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
#include "pde/test/TestSimpleLinearEllipticSolver.hpp"

static TestSimpleLinearEllipticSolver suite_TestSimpleLinearEllipticSolver;

static CxxTest::List Tests_TestSimpleLinearEllipticSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimpleLinearEllipticSolver( "pde/test/TestSimpleLinearEllipticSolver.hpp", 86, "TestSimpleLinearEllipticSolver", suite_TestSimpleLinearEllipticSolver, Tests_TestSimpleLinearEllipticSolver );

static class TestDescription_TestSimpleLinearEllipticSolver_TestWithPoissonsEquationAndMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestWithPoissonsEquationAndMeshReader() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 90, "TestWithPoissonsEquationAndMeshReader" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestWithPoissonsEquationAndMeshReader(); }
} testDescription_TestSimpleLinearEllipticSolver_TestWithPoissonsEquationAndMeshReader;

static class TestDescription_TestSimpleLinearEllipticSolver_TestWithHeatEquation2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestWithHeatEquation2() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 130, "TestWithHeatEquation2" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestWithHeatEquation2(); }
} testDescription_TestSimpleLinearEllipticSolver_TestWithHeatEquation2;

static class TestDescription_TestSimpleLinearEllipticSolver_TestWithHeatEquationNonzeroNeumannCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestWithHeatEquationNonzeroNeumannCondition() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 166, "TestWithHeatEquationNonzeroNeumannCondition" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestWithHeatEquationNonzeroNeumannCondition(); }
} testDescription_TestSimpleLinearEllipticSolver_TestWithHeatEquationNonzeroNeumannCondition;

static class TestDescription_TestSimpleLinearEllipticSolver_Test2dHeatEquationOnUnitSquare : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_Test2dHeatEquationOnUnitSquare() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 205, "Test2dHeatEquationOnUnitSquare" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.Test2dHeatEquationOnUnitSquare(); }
} testDescription_TestSimpleLinearEllipticSolver_Test2dHeatEquationOnUnitSquare;

static class TestDescription_TestSimpleLinearEllipticSolver_TestHeatEquationWithNeumannOnUnitDisc : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestHeatEquationWithNeumannOnUnitDisc() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 237, "TestHeatEquationWithNeumannOnUnitDisc" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestHeatEquationWithNeumannOnUnitDisc(); }
} testDescription_TestSimpleLinearEllipticSolver_TestHeatEquationWithNeumannOnUnitDisc;

static class TestDescription_TestSimpleLinearEllipticSolver_TestVaryingPdeAndMeshReader1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestVaryingPdeAndMeshReader1D() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 279, "TestVaryingPdeAndMeshReader1D" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestVaryingPdeAndMeshReader1D(); }
} testDescription_TestSimpleLinearEllipticSolver_TestVaryingPdeAndMeshReader1D;

static class TestDescription_TestSimpleLinearEllipticSolver_Test3dEllipticEquationDirichletCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_Test3dEllipticEquationDirichletCondition() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 400, "Test3dEllipticEquationDirichletCondition" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.Test3dEllipticEquationDirichletCondition(); }
} testDescription_TestSimpleLinearEllipticSolver_Test3dEllipticEquationDirichletCondition;

static class TestDescription_TestSimpleLinearEllipticSolver_Test3dEllipticEquationNeumannCondition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_Test3dEllipticEquationNeumannCondition() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 445, "Test3dEllipticEquationNeumannCondition" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.Test3dEllipticEquationNeumannCondition(); }
} testDescription_TestSimpleLinearEllipticSolver_Test3dEllipticEquationNeumannCondition;

static class TestDescription_TestSimpleLinearEllipticSolver_TestWithLinearSourceTerm : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestWithLinearSourceTerm() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 510, "TestWithLinearSourceTerm" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestWithLinearSourceTerm(); }
} testDescription_TestSimpleLinearEllipticSolver_TestWithLinearSourceTerm;

static class TestDescription_TestSimpleLinearEllipticSolver_TestWithLinearSourceTerm2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestWithLinearSourceTerm2d() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 552, "TestWithLinearSourceTerm2d" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestWithLinearSourceTerm2d(); }
} testDescription_TestSimpleLinearEllipticSolver_TestWithLinearSourceTerm2d;

static class TestDescription_TestSimpleLinearEllipticSolver_TestOrdering : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestOrdering() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 599, "TestOrdering" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestOrdering(); }
} testDescription_TestSimpleLinearEllipticSolver_TestOrdering;

static class TestDescription_TestSimpleLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn2dSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn2dSpace() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 637, "TestWithPoissonsEquation1dMeshIn2dSpace" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestWithPoissonsEquation1dMeshIn2dSpace(); }
} testDescription_TestSimpleLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn2dSpace;

static class TestDescription_TestSimpleLinearEllipticSolver_TestCylinderAxisymmetricWithConstantSourceTerm : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleLinearEllipticSolver_TestCylinderAxisymmetricWithConstantSourceTerm() : CxxTest::RealTestDescription( Tests_TestSimpleLinearEllipticSolver, suiteDescription_TestSimpleLinearEllipticSolver, 773, "TestCylinderAxisymmetricWithConstantSourceTerm" ) {}
 void runTest() { suite_TestSimpleLinearEllipticSolver.TestCylinderAxisymmetricWithConstantSourceTerm(); }
} testDescription_TestSimpleLinearEllipticSolver_TestCylinderAxisymmetricWithConstantSourceTerm;

#include <cxxtest/Root.cpp>
