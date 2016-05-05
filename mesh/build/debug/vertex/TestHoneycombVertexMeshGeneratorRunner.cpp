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
#include "mesh/test/vertex/TestHoneycombVertexMeshGenerator.hpp"

static TestHoneycombVertexMeshGenerator suite_TestHoneycombVertexMeshGenerator;

static CxxTest::List Tests_TestHoneycombVertexMeshGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHoneycombVertexMeshGenerator( "mesh/test/vertex/TestHoneycombVertexMeshGenerator.hpp", 43, "TestHoneycombVertexMeshGenerator", suite_TestHoneycombVertexMeshGenerator, Tests_TestHoneycombVertexMeshGenerator );

static class TestDescription_TestHoneycombVertexMeshGenerator_TestSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombVertexMeshGenerator_TestSimpleMesh() : CxxTest::RealTestDescription( Tests_TestHoneycombVertexMeshGenerator, suiteDescription_TestHoneycombVertexMeshGenerator, 47, "TestSimpleMesh" ) {}
 void runTest() { suite_TestHoneycombVertexMeshGenerator.TestSimpleMesh(); }
} testDescription_TestHoneycombVertexMeshGenerator_TestSimpleMesh;

static class TestDescription_TestHoneycombVertexMeshGenerator_TestBoundaryNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombVertexMeshGenerator_TestBoundaryNodes() : CxxTest::RealTestDescription( Tests_TestHoneycombVertexMeshGenerator, suiteDescription_TestHoneycombVertexMeshGenerator, 58, "TestBoundaryNodes" ) {}
 void runTest() { suite_TestHoneycombVertexMeshGenerator.TestBoundaryNodes(); }
} testDescription_TestHoneycombVertexMeshGenerator_TestBoundaryNodes;

static class TestDescription_TestHoneycombVertexMeshGenerator_TestLargeMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombVertexMeshGenerator_TestLargeMesh() : CxxTest::RealTestDescription( Tests_TestHoneycombVertexMeshGenerator, suiteDescription_TestHoneycombVertexMeshGenerator, 77, "TestLargeMesh" ) {}
 void runTest() { suite_TestHoneycombVertexMeshGenerator.TestLargeMesh(); }
} testDescription_TestHoneycombVertexMeshGenerator_TestLargeMesh;

static class TestDescription_TestHoneycombVertexMeshGenerator_TestElementArea : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHoneycombVertexMeshGenerator_TestElementArea() : CxxTest::RealTestDescription( Tests_TestHoneycombVertexMeshGenerator, suiteDescription_TestHoneycombVertexMeshGenerator, 86, "TestElementArea" ) {}
 void runTest() { suite_TestHoneycombVertexMeshGenerator.TestElementArea(); }
} testDescription_TestHoneycombVertexMeshGenerator_TestElementArea;

#include <cxxtest/Root.cpp>
