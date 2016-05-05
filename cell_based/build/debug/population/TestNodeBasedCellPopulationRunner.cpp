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
#include "cell_based/test/population/TestNodeBasedCellPopulation.hpp"

static TestNodeBasedCellPopulation suite_TestNodeBasedCellPopulation;

static CxxTest::List Tests_TestNodeBasedCellPopulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNodeBasedCellPopulation( "cell_based/test/population/TestNodeBasedCellPopulation.hpp", 80, "TestNodeBasedCellPopulation", suite_TestNodeBasedCellPopulation, Tests_TestNodeBasedCellPopulation );

static class TestDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulation1d2d3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulation1d2d3d() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 135, "TestNodeBasedCellPopulation1d2d3d" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestNodeBasedCellPopulation1d2d3d(); }
} testDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulation1d2d3d;

static class TestDescription_TestNodeBasedCellPopulation_TestOtherNodeBasedCellPopulationConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestOtherNodeBasedCellPopulationConstructor() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 142, "TestOtherNodeBasedCellPopulationConstructor" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestOtherNodeBasedCellPopulationConstructor(); }
} testDescription_TestNodeBasedCellPopulation_TestOtherNodeBasedCellPopulationConstructor;

static class TestDescription_TestNodeBasedCellPopulation_TestValidateNodeBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestValidateNodeBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 181, "TestValidateNodeBasedCellPopulation" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestValidateNodeBasedCellPopulation(); }
} testDescription_TestNodeBasedCellPopulation_TestValidateNodeBasedCellPopulation;

static class TestDescription_TestNodeBasedCellPopulation_TestUpdatingCellLocationMapOnDelete : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestUpdatingCellLocationMapOnDelete() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 237, "TestUpdatingCellLocationMapOnDelete" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestUpdatingCellLocationMapOnDelete(); }
} testDescription_TestNodeBasedCellPopulation_TestUpdatingCellLocationMapOnDelete;

static class TestDescription_TestNodeBasedCellPopulation_TestAddCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestAddCell() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 279, "TestAddCell" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestAddCell(); }
} testDescription_TestNodeBasedCellPopulation_TestAddCell;

static class TestDescription_TestNodeBasedCellPopulation_TestSetNodeAndAddCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestSetNodeAndAddCell() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 364, "TestSetNodeAndAddCell" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestSetNodeAndAddCell(); }
} testDescription_TestNodeBasedCellPopulation_TestSetNodeAndAddCell;

static class TestDescription_TestNodeBasedCellPopulation_TestRemoveDeadCellsAndUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestRemoveDeadCellsAndUpdate() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 449, "TestRemoveDeadCellsAndUpdate" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestRemoveDeadCellsAndUpdate(); }
} testDescription_TestNodeBasedCellPopulation_TestRemoveDeadCellsAndUpdate;

static class TestDescription_TestNodeBasedCellPopulation_TestAddAndRemoveAndAddWithOutRemovingDeletedNodesSmallCutOff : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestAddAndRemoveAndAddWithOutRemovingDeletedNodesSmallCutOff() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 515, "TestAddAndRemoveAndAddWithOutRemovingDeletedNodesSmallCutOff" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestAddAndRemoveAndAddWithOutRemovingDeletedNodesSmallCutOff(); }
} testDescription_TestNodeBasedCellPopulation_TestAddAndRemoveAndAddWithOutRemovingDeletedNodesSmallCutOff;

static class TestDescription_TestNodeBasedCellPopulation_TestAddAndRemoveAndAddWithOutRemovingDeletedNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestAddAndRemoveAndAddWithOutRemovingDeletedNodes() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 568, "TestAddAndRemoveAndAddWithOutRemovingDeletedNodes" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestAddAndRemoveAndAddWithOutRemovingDeletedNodes(); }
} testDescription_TestNodeBasedCellPopulation_TestAddAndRemoveAndAddWithOutRemovingDeletedNodes;

static class TestDescription_TestNodeBasedCellPopulation_TestGetNeighbouringNodeIndices : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestGetNeighbouringNodeIndices() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 678, "TestGetNeighbouringNodeIndices" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestGetNeighbouringNodeIndices(); }
} testDescription_TestNodeBasedCellPopulation_TestGetNeighbouringNodeIndices;

static class TestDescription_TestNodeBasedCellPopulation_TestGetNodesWithinNeighbourhoodRadius : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestGetNodesWithinNeighbourhoodRadius() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 804, "TestGetNodesWithinNeighbourhoodRadius" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestGetNodesWithinNeighbourhoodRadius(); }
} testDescription_TestNodeBasedCellPopulation_TestGetNodesWithinNeighbourhoodRadius;

static class TestDescription_TestNodeBasedCellPopulation_TestSettingCellAncestors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestSettingCellAncestors() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 926, "TestSettingCellAncestors" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestSettingCellAncestors(); }
} testDescription_TestNodeBasedCellPopulation_TestSettingCellAncestors;

static class TestDescription_TestNodeBasedCellPopulation_TestGetLocationOfCellCentreAndGetWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestGetLocationOfCellCentreAndGetWidth() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 973, "TestGetLocationOfCellCentreAndGetWidth" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestGetLocationOfCellCentreAndGetWidth(); }
} testDescription_TestNodeBasedCellPopulation_TestGetLocationOfCellCentreAndGetWidth;

static class TestDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulationOutputWriters2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulationOutputWriters2d() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 1017, "TestNodeBasedCellPopulationOutputWriters2d" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestNodeBasedCellPopulationOutputWriters2d(); }
} testDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulationOutputWriters2d;

static class TestDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulationOutputWriters3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulationOutputWriters3d() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 1212, "TestNodeBasedCellPopulationOutputWriters3d" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestNodeBasedCellPopulationOutputWriters3d(); }
} testDescription_TestNodeBasedCellPopulation_TestNodeBasedCellPopulationOutputWriters3d;

static class TestDescription_TestNodeBasedCellPopulation_TestWritingCellCyclePhases : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestWritingCellCyclePhases() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 1314, "TestWritingCellCyclePhases" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestWritingCellCyclePhases(); }
} testDescription_TestNodeBasedCellPopulation_TestWritingCellCyclePhases;

static class TestDescription_TestNodeBasedCellPopulation_TestArchivingCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestArchivingCellPopulation() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 1375, "TestArchivingCellPopulation" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestArchivingCellPopulation(); }
} testDescription_TestNodeBasedCellPopulation_TestArchivingCellPopulation;

static class TestDescription_TestNodeBasedCellPopulation_TestAddAndRemoveMovedCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulation_TestAddAndRemoveMovedCell() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulation, suiteDescription_TestNodeBasedCellPopulation, 1487, "TestAddAndRemoveMovedCell" ) {}
 void runTest() { suite_TestNodeBasedCellPopulation.TestAddAndRemoveMovedCell(); }
} testDescription_TestNodeBasedCellPopulation_TestAddAndRemoveMovedCell;

#include <cxxtest/Root.cpp>
