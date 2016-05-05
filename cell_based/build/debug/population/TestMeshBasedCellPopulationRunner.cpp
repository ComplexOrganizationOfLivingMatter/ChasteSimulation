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
#include "cell_based/test/population/TestMeshBasedCellPopulation.hpp"

static TestMeshBasedCellPopulation suite_TestMeshBasedCellPopulation;

static CxxTest::List Tests_TestMeshBasedCellPopulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMeshBasedCellPopulation( "cell_based/test/population/TestMeshBasedCellPopulation.hpp", 83, "TestMeshBasedCellPopulation", suite_TestMeshBasedCellPopulation, Tests_TestMeshBasedCellPopulation );

static class TestDescription_TestMeshBasedCellPopulation_TestSmallMeshBasedCellPopulation1d2d3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestSmallMeshBasedCellPopulation1d2d3d() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 141, "TestSmallMeshBasedCellPopulation1d2d3d" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestSmallMeshBasedCellPopulation1d2d3d(); }
} testDescription_TestMeshBasedCellPopulation_TestSmallMeshBasedCellPopulation1d2d3d;

static class TestDescription_TestMeshBasedCellPopulation_TestSmallMeshBasedCellPopulation2dIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestSmallMeshBasedCellPopulation2dIn3d() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 149, "TestSmallMeshBasedCellPopulation2dIn3d" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestSmallMeshBasedCellPopulation2dIn3d(); }
} testDescription_TestMeshBasedCellPopulation_TestSmallMeshBasedCellPopulation2dIn3d;

static class TestDescription_TestMeshBasedCellPopulation_TestGetCentroidOfCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestGetCentroidOfCellPopulation() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 156, "TestGetCentroidOfCellPopulation" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestGetCentroidOfCellPopulation(); }
} testDescription_TestMeshBasedCellPopulation_TestGetCentroidOfCellPopulation;

static class TestDescription_TestMeshBasedCellPopulation_TestValidateMeshBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestValidateMeshBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 182, "TestValidateMeshBasedCellPopulation" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestValidateMeshBasedCellPopulation(); }
} testDescription_TestMeshBasedCellPopulation_TestValidateMeshBasedCellPopulation;

static class TestDescription_TestMeshBasedCellPopulation_TestCreateCellPair : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestCreateCellPair() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 226, "TestCreateCellPair" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestCreateCellPair(); }
} testDescription_TestMeshBasedCellPopulation_TestCreateCellPair;

static class TestDescription_TestMeshBasedCellPopulation_TestGetDampingConstant : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestGetDampingConstant() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 254, "TestGetDampingConstant" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestGetDampingConstant(); }
} testDescription_TestMeshBasedCellPopulation_TestGetDampingConstant;

static class TestDescription_TestMeshBasedCellPopulation_TestAreaBasedDampingConstant : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestAreaBasedDampingConstant() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 319, "TestAreaBasedDampingConstant" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestAreaBasedDampingConstant(); }
} testDescription_TestMeshBasedCellPopulation_TestAreaBasedDampingConstant;

static class TestDescription_TestMeshBasedCellPopulation_TestSetNodeAndAddCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestSetNodeAndAddCell() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 362, "TestSetNodeAndAddCell" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestSetNodeAndAddCell(); }
} testDescription_TestMeshBasedCellPopulation_TestSetNodeAndAddCell;

static class TestDescription_TestMeshBasedCellPopulation_TestDivideLongSprings : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestDivideLongSprings() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 426, "TestDivideLongSprings" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestDivideLongSprings(); }
} testDescription_TestMeshBasedCellPopulation_TestDivideLongSprings;

static class TestDescription_TestMeshBasedCellPopulation_TestRemoveDeadCellsAndUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestRemoveDeadCellsAndUpdate() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 503, "TestRemoveDeadCellsAndUpdate" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestRemoveDeadCellsAndUpdate(); }
} testDescription_TestMeshBasedCellPopulation_TestRemoveDeadCellsAndUpdate;

static class TestDescription_TestMeshBasedCellPopulation_TestUpdateNodeLocations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestUpdateNodeLocations() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 648, "TestUpdateNodeLocations" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestUpdateNodeLocations(); }
} testDescription_TestMeshBasedCellPopulation_TestUpdateNodeLocations;

static class TestDescription_TestMeshBasedCellPopulation_TestMeshBasedCellPopulationWriteResultsToFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestMeshBasedCellPopulationWriteResultsToFile() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 822, "TestMeshBasedCellPopulationWriteResultsToFile" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestMeshBasedCellPopulationWriteResultsToFile(); }
} testDescription_TestMeshBasedCellPopulation_TestMeshBasedCellPopulationWriteResultsToFile;

static class TestDescription_TestMeshBasedCellPopulation_TestWriteResultsToFileWithAlternativeAddWriterMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestWriteResultsToFileWithAlternativeAddWriterMethods() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1006, "TestWriteResultsToFileWithAlternativeAddWriterMethods" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestWriteResultsToFileWithAlternativeAddWriterMethods(); }
} testDescription_TestMeshBasedCellPopulation_TestWriteResultsToFileWithAlternativeAddWriterMethods;

static class TestDescription_TestMeshBasedCellPopulation_TestCellPopulationWritersIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestCellPopulationWritersIn3d() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1152, "TestCellPopulationWritersIn3d" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestCellPopulationWritersIn3d(); }
} testDescription_TestMeshBasedCellPopulation_TestCellPopulationWritersIn3d;

static class TestDescription_TestMeshBasedCellPopulation_TestGetLocationOfCellCentreAndGetNodeCorrespondingToCellAndGetWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestGetLocationOfCellCentreAndGetNodeCorrespondingToCellAndGetWidth() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1255, "TestGetLocationOfCellCentreAndGetNodeCorrespondingToCellAndGetWidth" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestGetLocationOfCellCentreAndGetNodeCorrespondingToCellAndGetWidth(); }
} testDescription_TestMeshBasedCellPopulation_TestGetLocationOfCellCentreAndGetNodeCorrespondingToCellAndGetWidth;

static class TestDescription_TestMeshBasedCellPopulation_TestAddCellDataToPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestAddCellDataToPopulation() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1292, "TestAddCellDataToPopulation" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestAddCellDataToPopulation(); }
} testDescription_TestMeshBasedCellPopulation_TestAddCellDataToPopulation;

static class TestDescription_TestMeshBasedCellPopulation_TestArchivingMeshBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestArchivingMeshBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1337, "TestArchivingMeshBasedCellPopulation" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestArchivingMeshBasedCellPopulation(); }
} testDescription_TestMeshBasedCellPopulation_TestArchivingMeshBasedCellPopulation;

static class TestDescription_TestMeshBasedCellPopulation_TestSpringMarking : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestSpringMarking() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1454, "TestSpringMarking" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestSpringMarking(); }
} testDescription_TestMeshBasedCellPopulation_TestSpringMarking;

static class TestDescription_TestMeshBasedCellPopulation_TestSettingCellAncestors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestSettingCellAncestors() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1518, "TestSettingCellAncestors" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestSettingCellAncestors(); }
} testDescription_TestMeshBasedCellPopulation_TestSettingCellAncestors;

static class TestDescription_TestMeshBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation() : CxxTest::RealTestDescription( Tests_TestMeshBasedCellPopulation, suiteDescription_TestMeshBasedCellPopulation, 1567, "TestIsCellAssociatedWithADeletedLocation" ) {}
 void runTest() { suite_TestMeshBasedCellPopulation.TestIsCellAssociatedWithADeletedLocation(); }
} testDescription_TestMeshBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation;

#include <cxxtest/Root.cpp>
