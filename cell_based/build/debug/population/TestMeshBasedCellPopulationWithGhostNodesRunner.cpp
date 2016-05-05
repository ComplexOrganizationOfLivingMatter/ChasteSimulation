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
#include "cell_based/test/population/TestMeshBasedCellPopulationWithGhostNodes.hpp"

static TestMeshBasedCellPopulationWithGhostNodes suite_TestMeshBasedCellPopulationWithGhostNodes;

static CxxTest::List Tests_TestMeshBasedCellPopulationWithGhostNodes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMeshBasedCellPopulationWithGhostNodes( "cell_based/test/population/TestMeshBasedCellPopulationWithGhostNodes.hpp", 75, "TestMeshBasedCellPopulationWithGhostNodes", suite_TestMeshBasedCellPopulationWithGhostNodes, Tests_TestMeshBasedCellPopulationWithGhostNodes );

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestValidateMeshBasedCellPopulationWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestValidateMeshBasedCellPopulationWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 83, "TestValidateMeshBasedCellPopulationWithGhostNodes" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestValidateMeshBasedCellPopulationWithGhostNodes(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestValidateMeshBasedCellPopulationWithGhostNodes;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestMeshBasedCellPopulationWithGhostNodesSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestMeshBasedCellPopulationWithGhostNodesSetup() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 133, "TestMeshBasedCellPopulationWithGhostNodesSetup" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestMeshBasedCellPopulationWithGhostNodesSetup(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestMeshBasedCellPopulationWithGhostNodesSetup;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestCellPopulationIteratorWithNoCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestCellPopulationIteratorWithNoCells() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 212, "TestCellPopulationIteratorWithNoCells" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestCellPopulationIteratorWithNoCells(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestCellPopulationIteratorWithNoCells;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAreaBasedVisocityOnAPeriodicMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAreaBasedVisocityOnAPeriodicMesh() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 266, "TestAreaBasedVisocityOnAPeriodicMesh" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestAreaBasedVisocityOnAPeriodicMesh(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAreaBasedVisocityOnAPeriodicMesh;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestRemoveDeadCellsAndReMeshWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestRemoveDeadCellsAndReMeshWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 382, "TestRemoveDeadCellsAndReMeshWithGhostNodes" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestRemoveDeadCellsAndReMeshWithGhostNodes(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestRemoveDeadCellsAndReMeshWithGhostNodes;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAddAndRemoveAndAddWithOutUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAddAndRemoveAndAddWithOutUpdate() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 475, "TestAddAndRemoveAndAddWithOutUpdate" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestAddAndRemoveAndAddWithOutUpdate(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAddAndRemoveAndAddWithOutUpdate;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestUpdateNodeLocations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestUpdateNodeLocations() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 545, "TestUpdateNodeLocations" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestUpdateNodeLocations(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestUpdateNodeLocations;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestSpringIterator2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestSpringIterator2d() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 665, "TestSpringIterator2d" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestSpringIterator2d(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestSpringIterator2d;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestSpringIterator3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestSpringIterator3d() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 727, "TestSpringIterator3d" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestSpringIterator3d(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestSpringIterator3d;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestCellPopulationWritersIn3dWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestCellPopulationWritersIn3dWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 798, "TestCellPopulationWritersIn3dWithGhostNodes" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestCellPopulationWritersIn3dWithGhostNodes(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestCellPopulationWritersIn3dWithGhostNodes;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiAreasAndPerimetersWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiAreasAndPerimetersWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 904, "TestVoronoiAreasAndPerimetersWithGhostNodes" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestVoronoiAreasAndPerimetersWithGhostNodes(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiAreasAndPerimetersWithGhostNodes;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiGhostNodeLabelling2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiGhostNodeLabelling2d() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 936, "TestVoronoiGhostNodeLabelling2d" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestVoronoiGhostNodeLabelling2d(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiGhostNodeLabelling2d;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiGhostNodeLabelling3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiGhostNodeLabelling3d() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 996, "TestVoronoiGhostNodeLabelling3d" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestVoronoiGhostNodeLabelling3d(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestVoronoiGhostNodeLabelling3d;

static class TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAddCellDataToPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAddCellDataToPopulation() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulationWithGhostNodes, suiteDescription_TestMeshBasedCellPopulationWithGhostNodes, 1057, "TestAddCellDataToPopulation" ) {}
 void runTest() { suite_TestMeshBasedCellPopulationWithGhostNodes.TestAddCellDataToPopulation(); }
} testDescription_TestMeshBasedCellPopulationWithGhostNodes_TestAddCellDataToPopulation;

#include <cxxtest/Root.cpp>
