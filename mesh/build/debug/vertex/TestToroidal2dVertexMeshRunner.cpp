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
#include "mesh/test/vertex/TestToroidal2dVertexMesh.hpp"

static TestToroidal2dVertexMesh suite_TestToroidal2dVertexMesh;

static CxxTest::List Tests_TestToroidal2dVertexMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestToroidal2dVertexMesh( "mesh/test/vertex/TestToroidal2dVertexMesh.hpp", 53, "TestToroidal2dVertexMesh", suite_TestToroidal2dVertexMesh, Tests_TestToroidal2dVertexMesh );

static class TestDescription_TestToroidal2dVertexMesh_TestEachNodeIsContainedInAtLeastOneElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestEachNodeIsContainedInAtLeastOneElement() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 57, "TestEachNodeIsContainedInAtLeastOneElement" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestEachNodeIsContainedInAtLeastOneElement(); }
} testDescription_TestToroidal2dVertexMesh_TestEachNodeIsContainedInAtLeastOneElement;

static class TestDescription_TestToroidal2dVertexMesh_TestMeshGetWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestMeshGetWidth() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 75, "TestMeshGetWidth" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestMeshGetWidth(); }
} testDescription_TestToroidal2dVertexMesh_TestMeshGetWidth;

static class TestDescription_TestToroidal2dVertexMesh_TestGetVectorFromAtoB : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestGetVectorFromAtoB() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 97, "TestGetVectorFromAtoB" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestGetVectorFromAtoB(); }
} testDescription_TestToroidal2dVertexMesh_TestGetVectorFromAtoB;

static class TestDescription_TestToroidal2dVertexMesh_TestSetNodeLocationForToroidalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestSetNodeLocationForToroidalMesh() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 155, "TestSetNodeLocationForToroidalMesh" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestSetNodeLocationForToroidalMesh(); }
} testDescription_TestToroidal2dVertexMesh_TestSetNodeLocationForToroidalMesh;

static class TestDescription_TestToroidal2dVertexMesh_TestAddNodeAndReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestAddNodeAndReMesh() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 198, "TestAddNodeAndReMesh" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestAddNodeAndReMesh(); }
} testDescription_TestToroidal2dVertexMesh_TestAddNodeAndReMesh;

static class TestDescription_TestToroidal2dVertexMesh_TestElementAreaPerimeterCentroidAndMoments : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestElementAreaPerimeterCentroidAndMoments() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 281, "TestElementAreaPerimeterCentroidAndMoments" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestElementAreaPerimeterCentroidAndMoments(); }
} testDescription_TestToroidal2dVertexMesh_TestElementAreaPerimeterCentroidAndMoments;

static class TestDescription_TestToroidal2dVertexMesh_TestDivideElementAlongGivenAxis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestDivideElementAlongGivenAxis() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 352, "TestDivideElementAlongGivenAxis" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestDivideElementAlongGivenAxis(); }
} testDescription_TestToroidal2dVertexMesh_TestDivideElementAlongGivenAxis;

static class TestDescription_TestToroidal2dVertexMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 446, "TestArchiving" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestArchiving(); }
} testDescription_TestToroidal2dVertexMesh_TestArchiving;

static class TestDescription_TestToroidal2dVertexMesh_TestToroidalReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestToroidalReMesh() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 540, "TestToroidalReMesh" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestToroidalReMesh(); }
} testDescription_TestToroidal2dVertexMesh_TestToroidalReMesh;

static class TestDescription_TestToroidal2dVertexMesh_TestToroidalReMeshAfterDelete : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestToroidalReMeshAfterDelete() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 559, "TestToroidalReMeshAfterDelete" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestToroidalReMeshAfterDelete(); }
} testDescription_TestToroidal2dVertexMesh_TestToroidalReMeshAfterDelete;

static class TestDescription_TestToroidal2dVertexMesh_TestToroidalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestToroidalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 585, "TestToroidalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestToroidalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint(); }
} testDescription_TestToroidal2dVertexMesh_TestToroidalElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint;

static class TestDescription_TestToroidal2dVertexMesh_TestGetMeshForVtk : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestGetMeshForVtk() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 645, "TestGetMeshForVtk" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestGetMeshForVtk(); }
} testDescription_TestToroidal2dVertexMesh_TestGetMeshForVtk;

static class TestDescription_TestToroidal2dVertexMesh_TestConstructFromMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidal2dVertexMesh_TestConstructFromMeshReader() : CxxTest::RealTestDescription( Tests_TestToroidal2dVertexMesh, suiteDescription_TestToroidal2dVertexMesh, 711, "TestConstructFromMeshReader" ) {}
 void runTest() { suite_TestToroidal2dVertexMesh.TestConstructFromMeshReader(); }
} testDescription_TestToroidal2dVertexMesh_TestConstructFromMeshReader;

#include <cxxtest/Root.cpp>
