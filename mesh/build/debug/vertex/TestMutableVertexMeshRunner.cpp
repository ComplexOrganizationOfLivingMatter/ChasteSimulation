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
#include "mesh/test/vertex/TestMutableVertexMesh.hpp"

static TestMutableVertexMesh suite_TestMutableVertexMesh;

static CxxTest::List Tests_TestMutableVertexMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMutableVertexMesh( "mesh/test/vertex/TestMutableVertexMesh.hpp", 52, "TestMutableVertexMesh", suite_TestMutableVertexMesh, Tests_TestMutableVertexMesh );

static class TestDescription_TestMutableVertexMesh_TestMutableVertexElementIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestMutableVertexElementIterator() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 137, "TestMutableVertexElementIterator" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestMutableVertexElementIterator(); }
} testDescription_TestMutableVertexMesh_TestMutableVertexElementIterator;

static class TestDescription_TestMutableVertexMesh_TestBasic2dMutableVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestBasic2dMutableVertexMesh() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 187, "TestBasic2dMutableVertexMesh" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestBasic2dMutableVertexMesh(); }
} testDescription_TestMutableVertexMesh_TestBasic2dMutableVertexMesh;

static class TestDescription_TestMutableVertexMesh_TestBasic3dMutableVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestBasic3dMutableVertexMesh() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 258, "TestBasic3dMutableVertexMesh" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestBasic3dMutableVertexMesh(); }
} testDescription_TestMutableVertexMesh_TestBasic3dMutableVertexMesh;

static class TestDescription_TestMutableVertexMesh_TestMeshConstructionFromMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestMeshConstructionFromMeshReader() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 322, "TestMeshConstructionFromMeshReader" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestMeshConstructionFromMeshReader(); }
} testDescription_TestMutableVertexMesh_TestMeshConstructionFromMeshReader;

static class TestDescription_TestMutableVertexMesh_TestSetNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestSetNode() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 350, "TestSetNode" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestSetNode(); }
} testDescription_TestMutableVertexMesh_TestSetNode;

static class TestDescription_TestMutableVertexMesh_TestAddNodeAndReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestAddNodeAndReMesh() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 378, "TestAddNodeAndReMesh" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestAddNodeAndReMesh(); }
} testDescription_TestMutableVertexMesh_TestAddNodeAndReMesh;

static class TestDescription_TestMutableVertexMesh_TestAddElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestAddElement() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 434, "TestAddElement" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestAddElement(); }
} testDescription_TestMutableVertexMesh_TestAddElement;

static class TestDescription_TestMutableVertexMesh_TestDeletingNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDeletingNodes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 498, "TestDeletingNodes" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDeletingNodes(); }
} testDescription_TestMutableVertexMesh_TestDeletingNodes;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenNodes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 538, "TestDivideVertexElementGivenNodes" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementGivenNodes(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementGivenNodes;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenNodesForCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenNodesForCoverage() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 587, "TestDivideVertexElementGivenNodesForCoverage" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementGivenNodesForCoverage(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementGivenNodesForCoverage;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementAbove : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementAbove() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 646, "TestDivideVertexElementAbove" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementAbove(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementAbove;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivision : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivision() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 690, "TestDivideVertexElementGivenAxisOfDivision" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementGivenAxisOfDivision(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivision;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementWithBoundaryNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementWithBoundaryNodes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 781, "TestDivideVertexElementWithBoundaryNodes" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementWithBoundaryNodes(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementWithBoundaryNodes;

static class TestDescription_TestMutableVertexMesh_TestDeleteElementWithBoundaryNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDeleteElementWithBoundaryNodes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 882, "TestDeleteElementWithBoundaryNodes" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDeleteElementWithBoundaryNodes(); }
} testDescription_TestMutableVertexMesh_TestDeleteElementWithBoundaryNodes;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivisionFailsForBadElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivisionFailsForBadElement() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 963, "TestDivideVertexElementGivenAxisOfDivisionFailsForBadElement" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementGivenAxisOfDivisionFailsForBadElement(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivisionFailsForBadElement;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementAlongShortAxis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementAlongShortAxis() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 997, "TestDivideVertexElementAlongShortAxis" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementAlongShortAxis(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementAlongShortAxis;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementWithNonRegularElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementWithNonRegularElement() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1074, "TestDivideVertexElementWithNonRegularElement" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementWithNonRegularElement(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementWithNonRegularElement;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementWhereNewNodesAreCloseToOldNodes1 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementWhereNewNodesAreCloseToOldNodes1() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1143, "TestDivideVertexElementWhereNewNodesAreCloseToOldNodes1" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementWhereNewNodesAreCloseToOldNodes1(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementWhereNewNodesAreCloseToOldNodes1;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementWhereNewNodesAreCloseToOldNodes2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementWhereNewNodesAreCloseToOldNodes2() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1196, "TestDivideVertexElementWhereNewNodesAreCloseToOldNodes2" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementWhereNewNodesAreCloseToOldNodes2(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementWhereNewNodesAreCloseToOldNodes2;

static class TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivisionWithShortEdge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivisionWithShortEdge() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1252, "TestDivideVertexElementGivenAxisOfDivisionWithShortEdge" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideVertexElementGivenAxisOfDivisionWithShortEdge(); }
} testDescription_TestMutableVertexMesh_TestDivideVertexElementGivenAxisOfDivisionWithShortEdge;

static class TestDescription_TestMutableVertexMesh_TestArchive2dMutableVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestArchive2dMutableVertexMesh() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1329, "TestArchive2dMutableVertexMesh" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestArchive2dMutableVertexMesh(); }
} testDescription_TestMutableVertexMesh_TestArchive2dMutableVertexMesh;

static class TestDescription_TestMutableVertexMesh_TestArchive3dMutableVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestArchive3dMutableVertexMesh() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1430, "TestArchive3dMutableVertexMesh" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestArchive3dMutableVertexMesh(); }
} testDescription_TestMutableVertexMesh_TestArchive3dMutableVertexMesh;

static class TestDescription_TestMutableVertexMesh_TestDivideEdge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestDivideEdge() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1538, "TestDivideEdge" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestDivideEdge(); }
} testDescription_TestMutableVertexMesh_TestDivideEdge;

static class TestDescription_TestMutableVertexMesh_TestElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1700, "TestElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint(); }
} testDescription_TestMutableVertexMesh_TestElementIncludesPointAndGetLocalIndexForElementEdgeClosestToPoint;

static class TestDescription_TestMutableVertexMesh_TestGetLocalIndexForElementEdgeClosestToPointWithinDoubleEpsilon : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestGetLocalIndexForElementEdgeClosestToPointWithinDoubleEpsilon() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1778, "TestGetLocalIndexForElementEdgeClosestToPointWithinDoubleEpsilon" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestGetLocalIndexForElementEdgeClosestToPointWithinDoubleEpsilon(); }
} testDescription_TestMutableVertexMesh_TestGetLocalIndexForElementEdgeClosestToPointWithinDoubleEpsilon;

static class TestDescription_TestMutableVertexMesh_TestHandleHighOrderJunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMesh_TestHandleHighOrderJunctions() : CxxTest::RealTestDescription( Tests_TestMutableVertexMesh, suiteDescription_TestMutableVertexMesh, 1808, "TestHandleHighOrderJunctions" ) {}
 void runTest() { suite_TestMutableVertexMesh.TestHandleHighOrderJunctions(); }
} testDescription_TestMutableVertexMesh_TestHandleHighOrderJunctions;

#include <cxxtest/Root.cpp>
