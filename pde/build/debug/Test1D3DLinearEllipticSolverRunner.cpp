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
#include "pde/test/Test1D3DLinearEllipticSolver.hpp"

static Test1D3DLinearEllipticSolver suite_Test1D3DLinearEllipticSolver;

static CxxTest::List Tests_Test1D3DLinearEllipticSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test1D3DLinearEllipticSolver( "pde/test/Test1D3DLinearEllipticSolver.hpp", 58, "Test1D3DLinearEllipticSolver", suite_Test1D3DLinearEllipticSolver, Tests_Test1D3DLinearEllipticSolver );

static class TestDescription_Test1D3DLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn2dSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_Test1D3DLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn2dSpace() : CxxTest::RealTestDescription( Tests_Test1D3DLinearEllipticSolver, suiteDescription_Test1D3DLinearEllipticSolver, 62, "TestWithPoissonsEquation1dMeshIn2dSpace" ) {}
 void runTest() { suite_Test1D3DLinearEllipticSolver.TestWithPoissonsEquation1dMeshIn2dSpace(); }
} testDescription_Test1D3DLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn2dSpace;

static class TestDescription_Test1D3DLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn3dSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_Test1D3DLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn3dSpace() : CxxTest::RealTestDescription( Tests_Test1D3DLinearEllipticSolver, suiteDescription_Test1D3DLinearEllipticSolver, 97, "TestWithPoissonsEquation1dMeshIn3dSpace" ) {}
 void runTest() { suite_Test1D3DLinearEllipticSolver.TestWithPoissonsEquation1dMeshIn3dSpace(); }
} testDescription_Test1D3DLinearEllipticSolver_TestWithPoissonsEquation1dMeshIn3dSpace;

static class TestDescription_Test1D3DLinearEllipticSolver_TestBranchedPoissonsEquation1dMeshIn3dSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_Test1D3DLinearEllipticSolver_TestBranchedPoissonsEquation1dMeshIn3dSpace() : CxxTest::RealTestDescription( Tests_Test1D3DLinearEllipticSolver, suiteDescription_Test1D3DLinearEllipticSolver, 133, "TestBranchedPoissonsEquation1dMeshIn3dSpace" ) {}
 void runTest() { suite_Test1D3DLinearEllipticSolver.TestBranchedPoissonsEquation1dMeshIn3dSpace(); }
} testDescription_Test1D3DLinearEllipticSolver_TestBranchedPoissonsEquation1dMeshIn3dSpace;

#include <cxxtest/Root.cpp>
