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
#include "continuum_mechanics/test/TestIncompressibleNonlinearElasticitySolver.hpp"

static TestIncompressibleNonlinearElasticitySolver suite_TestIncompressibleNonlinearElasticitySolver;

static CxxTest::List Tests_TestIncompressibleNonlinearElasticitySolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestIncompressibleNonlinearElasticitySolver( "continuum_mechanics/test/TestIncompressibleNonlinearElasticitySolver.hpp", 124, "TestIncompressibleNonlinearElasticitySolver", suite_TestIncompressibleNonlinearElasticitySolver, Tests_TestIncompressibleNonlinearElasticitySolver );

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestAssembleSystem3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestAssembleSystem3D() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 128, "TestAssembleSystem3D" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestAssembleSystem3D(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestAssembleSystem3D;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestAssembleSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestAssembleSystem() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 154, "TestAssembleSystem" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestAssembleSystem(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestAssembleSystem;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestComputeResidualAndGetNormWithBadDeformation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestComputeResidualAndGetNormWithBadDeformation() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 319, "TestComputeResidualAndGetNormWithBadDeformation" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestComputeResidualAndGetNormWithBadDeformation(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestComputeResidualAndGetNormWithBadDeformation;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestWithZeroDisplacement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestWithZeroDisplacement() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 380, "TestWithZeroDisplacement" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestWithZeroDisplacement(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestWithZeroDisplacement;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSettingUpHeterogeneousProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSettingUpHeterogeneousProblem() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 431, "TestSettingUpHeterogeneousProblem" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestSettingUpHeterogeneousProblem(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestSettingUpHeterogeneousProblem;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolve : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolve() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 466, "TestSolve" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestSolve(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestSolve;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveWithNonZeroBoundaryConditions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveWithNonZeroBoundaryConditions() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 554, "TestSolveWithNonZeroBoundaryConditions" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestSolveWithNonZeroBoundaryConditions(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveWithNonZeroBoundaryConditions;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestAgainstExactSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestAgainstExactSolution() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 745, "TestAgainstExactSolution" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestAgainstExactSolution(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestAgainstExactSolution;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveWithPressureBcsOnDeformedSurface : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveWithPressureBcsOnDeformedSurface() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 882, "TestSolveWithPressureBcsOnDeformedSurface" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestSolveWithPressureBcsOnDeformedSurface(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveWithPressureBcsOnDeformedSurface;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSlidingBoundaryConditions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSlidingBoundaryConditions() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 1010, "TestSlidingBoundaryConditions" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestSlidingBoundaryConditions(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestSlidingBoundaryConditions;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestWithReordering : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestWithReordering() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 1115, "TestWithReordering" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestWithReordering(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestWithReordering;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveDistributedQuadraticMeshWithNonZeroBoundaryConditions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveDistributedQuadraticMeshWithNonZeroBoundaryConditions() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 1220, "TestSolveDistributedQuadraticMeshWithNonZeroBoundaryConditions" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestSolveDistributedQuadraticMeshWithNonZeroBoundaryConditions(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestSolveDistributedQuadraticMeshWithNonZeroBoundaryConditions;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestVtkCoverage3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestVtkCoverage3d() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 1392, "TestVtkCoverage3d" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestVtkCoverage3d(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestVtkCoverage3d;

static class TestDescription_TestIncompressibleNonlinearElasticitySolver_TestRemoveDummyPressure : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIncompressibleNonlinearElasticitySolver_TestRemoveDummyPressure() : CxxTest::RealTestDescription( Tests_TestIncompressibleNonlinearElasticitySolver, suiteDescription_TestIncompressibleNonlinearElasticitySolver, 1427, "TestRemoveDummyPressure" ) {}
 void runTest() { suite_TestIncompressibleNonlinearElasticitySolver.TestRemoveDummyPressure(); }
} testDescription_TestIncompressibleNonlinearElasticitySolver_TestRemoveDummyPressure;

#include <cxxtest/Root.cpp>
