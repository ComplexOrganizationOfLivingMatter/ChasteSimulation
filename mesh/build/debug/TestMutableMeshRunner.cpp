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
#include "mesh/test/TestMutableMesh.hpp"

static TestMutableMesh suite_TestMutableMesh;

static CxxTest::List Tests_TestMutableMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMutableMesh( "mesh/test/TestMutableMesh.hpp", 53, "TestMutableMesh", suite_TestMutableMesh, Tests_TestMutableMesh );

static class TestDescription_TestMutableMesh_TestNodeIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestNodeIterator() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 117, "TestNodeIterator" ) {}
 void runTest() { suite_TestMutableMesh.TestNodeIterator(); }
} testDescription_TestMutableMesh_TestNodeIterator;

static class TestDescription_TestMutableMesh_TestElementIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestElementIterator() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 154, "TestElementIterator" ) {}
 void runTest() { suite_TestMutableMesh.TestElementIterator(); }
} testDescription_TestMutableMesh_TestElementIterator;

static class TestDescription_TestMutableMesh_TestRescaleMeshFromBoundaryNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestRescaleMeshFromBoundaryNode() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 174, "TestRescaleMeshFromBoundaryNode" ) {}
 void runTest() { suite_TestMutableMesh.TestRescaleMeshFromBoundaryNode(); }
} testDescription_TestMutableMesh_TestRescaleMeshFromBoundaryNode;

static class TestDescription_TestMutableMesh_Test1DSetPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test1DSetPoint() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 188, "Test1DSetPoint" ) {}
 void runTest() { suite_TestMutableMesh.Test1DSetPoint(); }
} testDescription_TestMutableMesh_Test1DSetPoint;

static class TestDescription_TestMutableMesh_Test2DSetPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test2DSetPoint() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 261, "Test2DSetPoint" ) {}
 void runTest() { suite_TestMutableMesh.Test2DSetPoint(); }
} testDescription_TestMutableMesh_Test2DSetPoint;

static class TestDescription_TestMutableMesh_TestMovingNodesIn3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestMovingNodesIn3D() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 333, "TestMovingNodesIn3D" ) {}
 void runTest() { suite_TestMutableMesh.TestMovingNodesIn3D(); }
} testDescription_TestMutableMesh_TestMovingNodesIn3D;

static class TestDescription_TestMutableMesh_Test1DMeshIn2DSetPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test1DMeshIn2DSetPoint() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 423, "Test1DMeshIn2DSetPoint" ) {}
 void runTest() { suite_TestMutableMesh.Test1DMeshIn2DSetPoint(); }
} testDescription_TestMutableMesh_Test1DMeshIn2DSetPoint;

static class TestDescription_TestMutableMesh_Test2DMeshIn3DSetPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test2DMeshIn3DSetPoint() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 474, "Test2DMeshIn3DSetPoint" ) {}
 void runTest() { suite_TestMutableMesh.Test2DMeshIn3DSetPoint(); }
} testDescription_TestMutableMesh_Test2DMeshIn3DSetPoint;

static class TestDescription_TestMutableMesh_TestDeletingNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestDeletingNodes() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 543, "TestDeletingNodes" ) {}
 void runTest() { suite_TestMutableMesh.TestDeletingNodes(); }
} testDescription_TestMutableMesh_TestDeletingNodes;

static class TestDescription_TestMutableMesh_TestDeleteNodePriorToReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestDeleteNodePriorToReMesh() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 614, "TestDeleteNodePriorToReMesh" ) {}
 void runTest() { suite_TestMutableMesh.TestDeleteNodePriorToReMesh(); }
} testDescription_TestMutableMesh_TestDeleteNodePriorToReMesh;

static class TestDescription_TestMutableMesh_TestAddingAndDeletingNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestAddingAndDeletingNodes() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 633, "TestAddingAndDeletingNodes" ) {}
 void runTest() { suite_TestMutableMesh.TestAddingAndDeletingNodes(); }
} testDescription_TestMutableMesh_TestAddingAndDeletingNodes;

static class TestDescription_TestMutableMesh_Test1DBoundaryNodeMerger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test1DBoundaryNodeMerger() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 664, "Test1DBoundaryNodeMerger" ) {}
 void runTest() { suite_TestMutableMesh.Test1DBoundaryNodeMerger(); }
} testDescription_TestMutableMesh_Test1DBoundaryNodeMerger;

static class TestDescription_TestMutableMesh_Test1DNodeMerger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test1DNodeMerger() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 675, "Test1DNodeMerger" ) {}
 void runTest() { suite_TestMutableMesh.Test1DNodeMerger(); }
} testDescription_TestMutableMesh_Test1DNodeMerger;

static class TestDescription_TestMutableMesh_Test2DNodeMerger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test2DNodeMerger() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 708, "Test2DNodeMerger" ) {}
 void runTest() { suite_TestMutableMesh.Test2DNodeMerger(); }
} testDescription_TestMutableMesh_Test2DNodeMerger;

static class TestDescription_TestMutableMesh_Test3DNodeMerger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test3DNodeMerger() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 758, "Test3DNodeMerger" ) {}
 void runTest() { suite_TestMutableMesh.Test3DNodeMerger(); }
} testDescription_TestMutableMesh_Test3DNodeMerger;

static class TestDescription_TestMutableMesh_Test2DBoundaryNodeMergerChangeArea : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test2DBoundaryNodeMergerChangeArea() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 796, "Test2DBoundaryNodeMergerChangeArea" ) {}
 void runTest() { suite_TestMutableMesh.Test2DBoundaryNodeMergerChangeArea(); }
} testDescription_TestMutableMesh_Test2DBoundaryNodeMergerChangeArea;

static class TestDescription_TestMutableMesh_Test2DBoundaryNodeMerger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test2DBoundaryNodeMerger() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 821, "Test2DBoundaryNodeMerger" ) {}
 void runTest() { suite_TestMutableMesh.Test2DBoundaryNodeMerger(); }
} testDescription_TestMutableMesh_Test2DBoundaryNodeMerger;

static class TestDescription_TestMutableMesh_Test3DBoundaryNodeMerger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_Test3DBoundaryNodeMerger() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 856, "Test3DBoundaryNodeMerger" ) {}
 void runTest() { suite_TestMutableMesh.Test3DBoundaryNodeMerger(); }
} testDescription_TestMutableMesh_Test3DBoundaryNodeMerger;

static class TestDescription_TestMutableMesh_TestCheckVoronoiDisk : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestCheckVoronoiDisk() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 882, "TestCheckVoronoiDisk" ) {}
 void runTest() { suite_TestMutableMesh.TestCheckVoronoiDisk(); }
} testDescription_TestMutableMesh_TestCheckVoronoiDisk;

static class TestDescription_TestMutableMesh_TestCheckVoronoiSquare : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestCheckVoronoiSquare() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 891, "TestCheckVoronoiSquare" ) {}
 void runTest() { suite_TestMutableMesh.TestCheckVoronoiSquare(); }
} testDescription_TestMutableMesh_TestCheckVoronoiSquare;

static class TestDescription_TestMutableMesh_TestCheckCircularFan : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestCheckCircularFan() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 900, "TestCheckCircularFan" ) {}
 void runTest() { suite_TestMutableMesh.TestCheckCircularFan(); }
} testDescription_TestMutableMesh_TestCheckCircularFan;

static class TestDescription_TestMutableMesh_TestCheckMovingMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestCheckMovingMesh() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 909, "TestCheckMovingMesh" ) {}
 void runTest() { suite_TestMutableMesh.TestCheckMovingMesh(); }
} testDescription_TestMutableMesh_TestCheckMovingMesh;

static class TestDescription_TestMutableMesh_TestDeleteNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestDeleteNodes() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 938, "TestDeleteNodes" ) {}
 void runTest() { suite_TestMutableMesh.TestDeleteNodes(); }
} testDescription_TestMutableMesh_TestDeleteNodes;

static class TestDescription_TestMutableMesh_TestDeleteNodeFails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestDeleteNodeFails() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 968, "TestDeleteNodeFails" ) {}
 void runTest() { suite_TestMutableMesh.TestDeleteNodeFails(); }
} testDescription_TestMutableMesh_TestDeleteNodeFails;

static class TestDescription_TestMutableMesh_TestMeshAddNodeAndReMeshMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestMeshAddNodeAndReMeshMethod() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 977, "TestMeshAddNodeAndReMeshMethod" ) {}
 void runTest() { suite_TestMutableMesh.TestMeshAddNodeAndReMeshMethod(); }
} testDescription_TestMutableMesh_TestMeshAddNodeAndReMeshMethod;

static class TestDescription_TestMutableMesh_TestReindex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestReindex() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 1020, "TestReindex" ) {}
 void runTest() { suite_TestMutableMesh.TestReindex(); }
} testDescription_TestMutableMesh_TestReindex;

static class TestDescription_TestMutableMesh_TestReindex2dMeshIn3dSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestReindex2dMeshIn3dSpace() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 1054, "TestReindex2dMeshIn3dSpace" ) {}
 void runTest() { suite_TestMutableMesh.TestReindex2dMeshIn3dSpace(); }
} testDescription_TestMutableMesh_TestReindex2dMeshIn3dSpace;

static class TestDescription_TestMutableMesh_TestConstructFromNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestConstructFromNodes() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 1089, "TestConstructFromNodes" ) {}
 void runTest() { suite_TestMutableMesh.TestConstructFromNodes(); }
} testDescription_TestMutableMesh_TestConstructFromNodes;

static class TestDescription_TestMutableMesh_TestEdgeIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestEdgeIterator() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 1107, "TestEdgeIterator" ) {}
 void runTest() { suite_TestMutableMesh.TestEdgeIterator(); }
} testDescription_TestMutableMesh_TestEdgeIterator;

static class TestDescription_TestMutableMesh_TestDeleteElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestDeleteElement() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 1115, "TestDeleteElement" ) {}
 void runTest() { suite_TestMutableMesh.TestDeleteElement(); }
} testDescription_TestMutableMesh_TestDeleteElement;

static class TestDescription_TestMutableMesh_TestDeleteElement1DIn3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestDeleteElement1DIn3D() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 1155, "TestDeleteElement1DIn3D" ) {}
 void runTest() { suite_TestMutableMesh.TestDeleteElement1DIn3D(); }
} testDescription_TestMutableMesh_TestDeleteElement1DIn3D;

static class TestDescription_TestMutableMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestMutableMesh, suiteDescription_TestMutableMesh, 1180, "TestArchiving" ) {}
 void runTest() { suite_TestMutableMesh.TestArchiving(); }
} testDescription_TestMutableMesh_TestArchiving;

#include <cxxtest/Root.cpp>
