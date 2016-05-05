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
#include "mesh/test/mutable/TestHoneycombMeshGenerator.hpp"

static TestHoneycombMeshGenerator suite_TestHoneycombMeshGenerator;

static CxxTest::List Tests_TestHoneycombMeshGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHoneycombMeshGenerator( "mesh/test/mutable/TestHoneycombMeshGenerator.hpp", 45, "TestHoneycombMeshGenerator", suite_TestHoneycombMeshGenerator, Tests_TestHoneycombMeshGenerator );

static class TestDescription_TestHoneycombMeshGenerator_TestSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestSimpleMesh() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 67, "TestSimpleMesh" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestSimpleMesh(); }
} testDescription_TestHoneycombMeshGenerator_TestSimpleMesh;

static class TestDescription_TestHoneycombMeshGenerator_TestMonolayerHoneycombMeshGeneratorRelaxed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestMonolayerHoneycombMeshGeneratorRelaxed() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 87, "TestMonolayerHoneycombMeshGeneratorRelaxed" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestMonolayerHoneycombMeshGeneratorRelaxed(); }
} testDescription_TestHoneycombMeshGenerator_TestMonolayerHoneycombMeshGeneratorRelaxed;

static class TestDescription_TestHoneycombMeshGenerator_TestMonolayerHoneycombMeshGeneratorCompressed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestMonolayerHoneycombMeshGeneratorCompressed() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 164, "TestMonolayerHoneycombMeshGeneratorCompressed" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestMonolayerHoneycombMeshGeneratorCompressed(); }
} testDescription_TestHoneycombMeshGenerator_TestMonolayerHoneycombMeshGeneratorCompressed;

static class TestDescription_TestHoneycombMeshGenerator_TestBoundaryNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestBoundaryNodes() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 242, "TestBoundaryNodes" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestBoundaryNodes(); }
} testDescription_TestHoneycombMeshGenerator_TestBoundaryNodes;

static class TestDescription_TestHoneycombMeshGenerator_TestGetCircularMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestGetCircularMesh() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 265, "TestGetCircularMesh" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestGetCircularMesh(); }
} testDescription_TestHoneycombMeshGenerator_TestGetCircularMesh;

static class TestDescription_TestHoneycombMeshGenerator_TestGetCircularMeshWithGhostNodesThrowsException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestGetCircularMeshWithGhostNodesThrowsException() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 282, "TestGetCircularMeshWithGhostNodesThrowsException" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestGetCircularMeshWithGhostNodesThrowsException(); }
} testDescription_TestHoneycombMeshGenerator_TestGetCircularMeshWithGhostNodesThrowsException;

static class TestDescription_TestHoneycombMeshGenerator_TestCircularMeshIsJacobian : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestCircularMeshIsJacobian() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 293, "TestCircularMeshIsJacobian" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestCircularMeshIsJacobian(); }
} testDescription_TestHoneycombMeshGenerator_TestCircularMeshIsJacobian;

static class TestDescription_TestHoneycombMeshGenerator_TestLargeMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombMeshGenerator_TestLargeMesh() : CxxTest::RealTestDescription( Tests_TestHoneycombMeshGenerator, suiteDescription_TestHoneycombMeshGenerator, 302, "TestLargeMesh" ) {}
 void runTest() { suite_TestHoneycombMeshGenerator.TestLargeMesh(); }
} testDescription_TestHoneycombMeshGenerator_TestLargeMesh;

#include <cxxtest/Root.cpp>
