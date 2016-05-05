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
#include "mesh/test/vertex/TestVoronoiVertexMeshGenerator.hpp"

static TestVoronoiVertexMeshGenerator suite_TestVoronoiVertexMeshGenerator;

static CxxTest::List Tests_TestVoronoiVertexMeshGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVoronoiVertexMeshGenerator( "mesh/test/vertex/TestVoronoiVertexMeshGenerator.hpp", 47, "TestVoronoiVertexMeshGenerator", suite_TestVoronoiVertexMeshGenerator, Tests_TestVoronoiVertexMeshGenerator );

static class TestDescription_TestVoronoiVertexMeshGenerator_TestSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestSimpleMesh() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 51, "TestSimpleMesh" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestSimpleMesh(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestSimpleMesh;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestBoundaryNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestBoundaryNodes() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 80, "TestBoundaryNodes" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestBoundaryNodes(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestBoundaryNodes;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestConstructorExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestConstructorExceptions() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 111, "TestConstructorExceptions" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestConstructorExceptions(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestConstructorExceptions;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestValidateSeedLocations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestValidateSeedLocations() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 130, "TestValidateSeedLocations" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestValidateSeedLocations(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestValidateSeedLocations;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestGetToroidalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestGetToroidalMesh() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 210, "TestGetToroidalMesh" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestGetToroidalMesh(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestGetToroidalMesh;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestNodesAreRepositionedInToroidalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestNodesAreRepositionedInToroidalMesh() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 224, "TestNodesAreRepositionedInToroidalMesh" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestNodesAreRepositionedInToroidalMesh(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestNodesAreRepositionedInToroidalMesh;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestGetPolygonDistributionAndAreaVariation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestGetPolygonDistributionAndAreaVariation() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 254, "TestGetPolygonDistributionAndAreaVariation" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestGetPolygonDistributionAndAreaVariation(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestGetPolygonDistributionAndAreaVariation;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestRefreshSeedsAndRegenerateMeshCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestRefreshSeedsAndRegenerateMeshCoverage() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 286, "TestRefreshSeedsAndRegenerateMeshCoverage" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestRefreshSeedsAndRegenerateMeshCoverage(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestRefreshSeedsAndRegenerateMeshCoverage;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestSetAndGetMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestSetAndGetMethods() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 302, "TestSetAndGetMethods" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestSetAndGetMethods(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestSetAndGetMethods;

static class TestDescription_TestVoronoiVertexMeshGenerator_TestDummyClassCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoronoiVertexMeshGenerator_TestDummyClassCoverage() : CxxTest::RealTestDescription( Tests_TestVoronoiVertexMeshGenerator, suiteDescription_TestVoronoiVertexMeshGenerator, 319, "TestDummyClassCoverage" ) {}
 void runTest() { suite_TestVoronoiVertexMeshGenerator.TestDummyClassCoverage(); }
} testDescription_TestVoronoiVertexMeshGenerator_TestDummyClassCoverage;

#include <cxxtest/Root.cpp>
