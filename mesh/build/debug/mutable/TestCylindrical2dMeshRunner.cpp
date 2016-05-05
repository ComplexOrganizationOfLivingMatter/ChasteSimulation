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
#include "mesh/test/mutable/TestCylindrical2dMesh.hpp"

static TestCylindrical2dMesh suite_TestCylindrical2dMesh;

static CxxTest::List Tests_TestCylindrical2dMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCylindrical2dMesh( "mesh/test/mutable/TestCylindrical2dMesh.hpp", 55, "TestCylindrical2dMesh", suite_TestCylindrical2dMesh, Tests_TestCylindrical2dMesh );

static class TestDescription_TestCylindrical2dMesh_TestCreateMirrorCellsAndAlignmentTester : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestCreateMirrorCellsAndAlignmentTester() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 59, "TestCreateMirrorCellsAndAlignmentTester" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestCreateMirrorCellsAndAlignmentTester(); }
} testDescription_TestCylindrical2dMesh_TestCreateMirrorCellsAndAlignmentTester;

static class TestDescription_TestCylindrical2dMesh_TestReconstructCylindricalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestReconstructCylindricalMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 112, "TestReconstructCylindricalMesh" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestReconstructCylindricalMesh(); }
} testDescription_TestCylindrical2dMesh_TestReconstructCylindricalMesh;

static class TestDescription_TestCylindrical2dMesh_TestCylindricalReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestCylindricalReMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 227, "TestCylindricalReMesh" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestCylindricalReMesh(); }
} testDescription_TestCylindrical2dMesh_TestCylindricalReMesh;

static class TestDescription_TestCylindrical2dMesh_TestCylindricalReMeshAfterDelete : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestCylindricalReMeshAfterDelete() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 269, "TestCylindricalReMeshAfterDelete" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestCylindricalReMeshAfterDelete(); }
} testDescription_TestCylindrical2dMesh_TestCylindricalReMeshAfterDelete;

static class TestDescription_TestCylindrical2dMesh_TestCylindricalReMeshOnSmallMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestCylindricalReMeshOnSmallMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 306, "TestCylindricalReMeshOnSmallMesh" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestCylindricalReMeshOnSmallMesh(); }
} testDescription_TestCylindrical2dMesh_TestCylindricalReMeshOnSmallMesh;

static class TestDescription_TestCylindrical2dMesh_TestGetVectorBetweenCyclindricalPoints : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestGetVectorBetweenCyclindricalPoints() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 325, "TestGetVectorBetweenCyclindricalPoints" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestGetVectorBetweenCyclindricalPoints(); }
} testDescription_TestCylindrical2dMesh_TestGetVectorBetweenCyclindricalPoints;

static class TestDescription_TestCylindrical2dMesh_TestSetNodeLocationForCylindricalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestSetNodeLocationForCylindricalMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 394, "TestSetNodeLocationForCylindricalMesh" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestSetNodeLocationForCylindricalMesh(); }
} testDescription_TestCylindrical2dMesh_TestSetNodeLocationForCylindricalMesh;

static class TestDescription_TestCylindrical2dMesh_TestAddNodeAndReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestAddNodeAndReMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 457, "TestAddNodeAndReMesh" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestAddNodeAndReMesh(); }
} testDescription_TestCylindrical2dMesh_TestAddNodeAndReMesh;

static class TestDescription_TestCylindrical2dMesh_TestHaloNodeInsertionAndRemoval : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestHaloNodeInsertionAndRemoval() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 498, "TestHaloNodeInsertionAndRemoval" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestHaloNodeInsertionAndRemoval(); }
} testDescription_TestCylindrical2dMesh_TestHaloNodeInsertionAndRemoval;

static class TestDescription_TestCylindrical2dMesh_TestHaloNodeReMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestHaloNodeReMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 546, "TestHaloNodeReMesh" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestHaloNodeReMesh(); }
} testDescription_TestCylindrical2dMesh_TestHaloNodeReMesh;

static class TestDescription_TestCylindrical2dMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 586, "TestArchiving" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestArchiving(); }
} testDescription_TestCylindrical2dMesh_TestArchiving;

static class TestDescription_TestCylindrical2dMesh_TestConstructFromNodeList : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestConstructFromNodeList() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 680, "TestConstructFromNodeList" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestConstructFromNodeList(); }
} testDescription_TestCylindrical2dMesh_TestConstructFromNodeList;

static class TestDescription_TestCylindrical2dMesh_TestGenerateVectorsOfElementsStraddlingPeriodicBoundaries : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestGenerateVectorsOfElementsStraddlingPeriodicBoundaries() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 737, "TestGenerateVectorsOfElementsStraddlingPeriodicBoundaries" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestGenerateVectorsOfElementsStraddlingPeriodicBoundaries(); }
} testDescription_TestCylindrical2dMesh_TestGenerateVectorsOfElementsStraddlingPeriodicBoundaries;

static class TestDescription_TestCylindrical2dMesh_TestCorrectNonPeriodicMeshMapLeftToRight : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestCorrectNonPeriodicMeshMapLeftToRight() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 775, "TestCorrectNonPeriodicMeshMapLeftToRight" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestCorrectNonPeriodicMeshMapLeftToRight(); }
} testDescription_TestCylindrical2dMesh_TestCorrectNonPeriodicMeshMapLeftToRight;

static class TestDescription_TestCylindrical2dMesh_TestCorrectNonPeriodicMeshes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestCorrectNonPeriodicMeshes() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 828, "TestCorrectNonPeriodicMeshes" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestCorrectNonPeriodicMeshes(); }
} testDescription_TestCylindrical2dMesh_TestCorrectNonPeriodicMeshes;

static class TestDescription_TestCylindrical2dMesh_TestVoronoiTessellationUsesOverriddenMetric : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dMesh_TestVoronoiTessellationUsesOverriddenMetric() : CxxTest::RealTestDescription( Tests_TestCylindrical2dMesh, suiteDescription_TestCylindrical2dMesh, 900, "TestVoronoiTessellationUsesOverriddenMetric" ) {}
 void runTest() { suite_TestCylindrical2dMesh.TestVoronoiTessellationUsesOverriddenMetric(); }
} testDescription_TestCylindrical2dMesh_TestVoronoiTessellationUsesOverriddenMetric;

#include <cxxtest/Root.cpp>
