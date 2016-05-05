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
#include "mesh/test/vertex/TestCylindrical2dVertexMesh.hpp"

static TestCylindrical2dVertexMesh suite_TestCylindrical2dVertexMesh;

static CxxTest::List Tests_TestCylindrical2dVertexMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCylindrical2dVertexMesh( "mesh/test/vertex/TestCylindrical2dVertexMesh.hpp", 56, "TestCylindrical2dVertexMesh", suite_TestCylindrical2dVertexMesh, Tests_TestCylindrical2dVertexMesh );

static class TestDescription_TestCylindrical2dVertexMesh_TestEachNodeIsContainedInAtLeastOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestEachNodeIsContainedInAtLeastOneElement() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 60, "TestEachNodeIsContainedInAtLeastOneElement" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestEachNodeIsContainedInAtLeastOneElement(); }
} testDescription_TestCylindrical2dVertexMesh_TestEachNodeIsContainedInAtLeastOneElement;

static class TestDescription_TestCylindrical2dVertexMesh_TestMeshGetWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestMeshGetWidth() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 75, "TestMeshGetWidth" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestMeshGetWidth(); }
} testDescription_TestCylindrical2dVertexMesh_TestMeshGetWidth;

static class TestDescription_TestCylindrical2dVertexMesh_TestGetVectorFromAtoB : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestGetVectorFromAtoB() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 104, "TestGetVectorFromAtoB" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestGetVectorFromAtoB(); }
} testDescription_TestCylindrical2dVertexMesh_TestGetVectorFromAtoB;

static class TestDescription_TestCylindrical2dVertexMesh_TestSetNodeLocationForCylindricalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestSetNodeLocationForCylindricalMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 133, "TestSetNodeLocationForCylindricalMesh" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestSetNodeLocationForCylindricalMesh(); }
} testDescription_TestCylindrical2dVertexMesh_TestSetNodeLocationForCylindricalMesh;

static class TestDescription_TestCylindrical2dVertexMesh_TestAddNodeAndReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestAddNodeAndReMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 162, "TestAddNodeAndReMesh" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestAddNodeAndReMesh(); }
} testDescription_TestCylindrical2dVertexMesh_TestAddNodeAndReMesh;

static class TestDescription_TestCylindrical2dVertexMesh_TestElementAreaPerimeterCentroidAndMoments : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestElementAreaPerimeterCentroidAndMoments() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 217, "TestElementAreaPerimeterCentroidAndMoments" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestElementAreaPerimeterCentroidAndMoments(); }
} testDescription_TestCylindrical2dVertexMesh_TestElementAreaPerimeterCentroidAndMoments;

static class TestDescription_TestCylindrical2dVertexMesh_TestDivideElementAlongGivenAxis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestDivideElementAlongGivenAxis() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 283, "TestDivideElementAlongGivenAxis" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestDivideElementAlongGivenAxis(); }
} testDescription_TestCylindrical2dVertexMesh_TestDivideElementAlongGivenAxis;

static class TestDescription_TestCylindrical2dVertexMesh_TestTessellationConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestTessellationConstructor() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 353, "TestTessellationConstructor" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestTessellationConstructor(); }
} testDescription_TestCylindrical2dVertexMesh_TestTessellationConstructor;

static class TestDescription_TestCylindrical2dVertexMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 437, "TestArchiving" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestArchiving(); }
} testDescription_TestCylindrical2dVertexMesh_TestArchiving;

static class TestDescription_TestCylindrical2dVertexMesh_TestCylindricalReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestCylindricalReMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 528, "TestCylindricalReMesh" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestCylindricalReMesh(); }
} testDescription_TestCylindrical2dVertexMesh_TestCylindricalReMesh;

static class TestDescription_TestCylindrical2dVertexMesh_TestCylindricalReMeshAfterDelete : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestCylindricalReMeshAfterDelete() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 547, "TestCylindricalReMeshAfterDelete" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestCylindricalReMeshAfterDelete(); }
} testDescription_TestCylindrical2dVertexMesh_TestCylindricalReMeshAfterDelete;

static class TestDescription_TestCylindrical2dVertexMesh_TestCylindricalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestCylindricalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 573, "TestCylindricalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestCylindricalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint(); }
} testDescription_TestCylindrical2dVertexMesh_TestCylindricalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint;

static class TestDescription_TestCylindrical2dVertexMesh_TestGetMeshForVtk : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dVertexMesh_TestGetMeshForVtk() : CxxTest::RealTestDescription( Tests_TestCylindrical2dVertexMesh, suiteDescription_TestCylindrical2dVertexMesh, 619, "TestGetMeshForVtk" ) {}
 void runTest() { suite_TestCylindrical2dVertexMesh.TestGetMeshForVtk(); }
} testDescription_TestCylindrical2dVertexMesh_TestGetMeshForVtk;

#include <cxxtest/Root.cpp>
