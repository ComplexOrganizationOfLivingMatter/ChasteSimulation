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
#include "mesh/test/TestNodesOnlyMesh.hpp"

static TestNodesOnlyMesh suite_TestNodesOnlyMesh;

static CxxTest::List Tests_TestNodesOnlyMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNodesOnlyMesh( "mesh/test/TestNodesOnlyMesh.hpp", 52, "TestNodesOnlyMesh", suite_TestNodesOnlyMesh, Tests_TestNodesOnlyMesh );

static class TestDescription_TestNodesOnlyMesh_TestConstructNodesWithoutMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestConstructNodesWithoutMesh() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 56, "TestConstructNodesWithoutMesh" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestConstructNodesWithoutMesh(); }
} testDescription_TestNodesOnlyMesh_TestConstructNodesWithoutMesh;

static class TestDescription_TestNodesOnlyMesh_TestCalculateBoundingBox : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestCalculateBoundingBox() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 99, "TestCalculateBoundingBox" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestCalculateBoundingBox(); }
} testDescription_TestNodesOnlyMesh_TestCalculateBoundingBox;

static class TestDescription_TestNodesOnlyMesh_TestSetInitialBoxCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestSetInitialBoxCollection() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 135, "TestSetInitialBoxCollection" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestSetInitialBoxCollection(); }
} testDescription_TestNodesOnlyMesh_TestSetInitialBoxCollection;

static class TestDescription_TestNodesOnlyMesh_TestConstuctingAndEnlargingInitialBoxCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestConstuctingAndEnlargingInitialBoxCollection() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 173, "TestConstuctingAndEnlargingInitialBoxCollection" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestConstuctingAndEnlargingInitialBoxCollection(); }
} testDescription_TestNodesOnlyMesh_TestConstuctingAndEnlargingInitialBoxCollection;

static class TestDescription_TestNodesOnlyMesh_TestBoxCollectionSizeAndSwelling : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestBoxCollectionSizeAndSwelling() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 224, "TestBoxCollectionSizeAndSwelling" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestBoxCollectionSizeAndSwelling(); }
} testDescription_TestNodesOnlyMesh_TestBoxCollectionSizeAndSwelling;

static class TestDescription_TestNodesOnlyMesh_TestMovingNodesInBoxCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestMovingNodesInBoxCollection() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 268, "TestMovingNodesInBoxCollection" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestMovingNodesInBoxCollection(); }
} testDescription_TestNodesOnlyMesh_TestMovingNodesInBoxCollection;

static class TestDescription_TestNodesOnlyMesh_TestClearingNodesOnlyMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestClearingNodesOnlyMesh() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 315, "TestClearingNodesOnlyMesh" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestClearingNodesOnlyMesh(); }
} testDescription_TestNodesOnlyMesh_TestClearingNodesOnlyMesh;

static class TestDescription_TestNodesOnlyMesh_TestConstructNodesWithoutMeshUsingMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestConstructNodesWithoutMeshUsingMesh() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 348, "TestConstructNodesWithoutMeshUsingMesh" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestConstructNodesWithoutMeshUsingMesh(); }
} testDescription_TestNodesOnlyMesh_TestConstructNodesWithoutMeshUsingMesh;

static class TestDescription_TestNodesOnlyMesh_TestGetNextAvailableIndex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestGetNextAvailableIndex() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 365, "TestGetNextAvailableIndex" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestGetNextAvailableIndex(); }
} testDescription_TestNodesOnlyMesh_TestGetNextAvailableIndex;

static class TestDescription_TestNodesOnlyMesh_TestWriteNodesWithoutMeshUsingVtk : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestWriteNodesWithoutMeshUsingVtk() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 431, "TestWriteNodesWithoutMeshUsingVtk" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestWriteNodesWithoutMeshUsingVtk(); }
} testDescription_TestNodesOnlyMesh_TestWriteNodesWithoutMeshUsingVtk;

static class TestDescription_TestNodesOnlyMesh_TestWriteNodesWithoutMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestWriteNodesWithoutMesh() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 489, "TestWriteNodesWithoutMesh" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestWriteNodesWithoutMesh(); }
} testDescription_TestNodesOnlyMesh_TestWriteNodesWithoutMesh;

static class TestDescription_TestNodesOnlyMesh_TestGetSetRadiusMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestGetSetRadiusMethods() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 514, "TestGetSetRadiusMethods" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestGetSetRadiusMethods(); }
} testDescription_TestNodesOnlyMesh_TestGetSetRadiusMethods;

static class TestDescription_TestNodesOnlyMesh_TestAddNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestAddNode() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 536, "TestAddNode" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestAddNode(); }
} testDescription_TestNodesOnlyMesh_TestAddNode;

static class TestDescription_TestNodesOnlyMesh_TestDeleteNodesAndRemesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestDeleteNodesAndRemesh() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 576, "TestDeleteNodesAndRemesh" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestDeleteNodesAndRemesh(); }
} testDescription_TestNodesOnlyMesh_TestDeleteNodesAndRemesh;

static class TestDescription_TestNodesOnlyMesh_TestCleanDeleteAndAddNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestCleanDeleteAndAddNode() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 662, "TestCleanDeleteAndAddNode" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestCleanDeleteAndAddNode(); }
} testDescription_TestNodesOnlyMesh_TestCleanDeleteAndAddNode;

static class TestDescription_TestNodesOnlyMesh_TestHaloNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestHaloNodes() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 699, "TestHaloNodes" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestHaloNodes(); }
} testDescription_TestNodesOnlyMesh_TestHaloNodes;

static class TestDescription_TestNodesOnlyMesh_TestGetNodesOutsideLocalDomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestGetNodesOutsideLocalDomain() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 722, "TestGetNodesOutsideLocalDomain" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestGetNodesOutsideLocalDomain(); }
} testDescription_TestNodesOnlyMesh_TestGetNodesOutsideLocalDomain;

static class TestDescription_TestNodesOnlyMesh_TestAddAndGetHaloNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestAddAndGetHaloNodes() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 770, "TestAddAndGetHaloNodes" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestAddAndGetHaloNodes(); }
} testDescription_TestNodesOnlyMesh_TestAddAndGetHaloNodes;

static class TestDescription_TestNodesOnlyMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 796, "TestArchiving" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestArchiving(); }
} testDescription_TestNodesOnlyMesh_TestArchiving;

static class TestDescription_TestNodesOnlyMesh_TestArchiveNodesOnlyMeshWithNodeAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestArchiveNodesOnlyMeshWithNodeAttributes() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 864, "TestArchiveNodesOnlyMeshWithNodeAttributes" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestArchiveNodesOnlyMeshWithNodeAttributes(); }
} testDescription_TestNodesOnlyMesh_TestArchiveNodesOnlyMeshWithNodeAttributes;

static class TestDescription_TestNodesOnlyMesh_TestLoadBalanceMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodesOnlyMesh_TestLoadBalanceMesh() : CxxTest::RealTestDescription( Tests_TestNodesOnlyMesh, suiteDescription_TestNodesOnlyMesh, 924, "TestLoadBalanceMesh" ) {}
 void runTest() { suite_TestNodesOnlyMesh.TestLoadBalanceMesh(); }
} testDescription_TestNodesOnlyMesh_TestLoadBalanceMesh;

#include <cxxtest/Root.cpp>
