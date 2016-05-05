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
#include "cell_based/test/population/TestPottsBasedCellPopulation.hpp"

static TestPottsBasedCellPopulation suite_TestPottsBasedCellPopulation;

static CxxTest::List Tests_TestPottsBasedCellPopulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsBasedCellPopulation( "cell_based/test/population/TestPottsBasedCellPopulation.hpp", 71, "TestPottsBasedCellPopulation", suite_TestPottsBasedCellPopulation, Tests_TestPottsBasedCellPopulation );

static class TestDescription_TestPottsBasedCellPopulation_TestConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestConstructor() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 75, "TestConstructor" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestConstructor(); }
} testDescription_TestPottsBasedCellPopulation_TestConstructor;

static class TestDescription_TestPottsBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 128, "TestIsCellAssociatedWithADeletedLocation" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestIsCellAssociatedWithADeletedLocation(); }
} testDescription_TestPottsBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation;

static class TestDescription_TestPottsBasedCellPopulation_TestValidate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestValidate() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 159, "TestValidate" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestValidate(); }
} testDescription_TestPottsBasedCellPopulation_TestValidate;

static class TestDescription_TestPottsBasedCellPopulation_TestRemoveDeadCellsAndUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestRemoveDeadCellsAndUpdate() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 249, "TestRemoveDeadCellsAndUpdate" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestRemoveDeadCellsAndUpdate(); }
} testDescription_TestPottsBasedCellPopulation_TestRemoveDeadCellsAndUpdate;

static class TestDescription_TestPottsBasedCellPopulation_TestAddCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestAddCell() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 277, "TestAddCell" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestAddCell(); }
} testDescription_TestPottsBasedCellPopulation_TestAddCell;

static class TestDescription_TestPottsBasedCellPopulation_TestUpdateCellLocations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestUpdateCellLocations() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 324, "TestUpdateCellLocations" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestUpdateCellLocations(); }
} testDescription_TestPottsBasedCellPopulation_TestUpdateCellLocations;

static class TestDescription_TestPottsBasedCellPopulation_TestUpdateCellLocationsRandomly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestUpdateCellLocationsRandomly() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 358, "TestUpdateCellLocationsRandomly" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestUpdateCellLocationsRandomly(); }
} testDescription_TestPottsBasedCellPopulation_TestUpdateCellLocationsRandomly;

static class TestDescription_TestPottsBasedCellPopulation_TestWriteResultsToFileAndOutputCellPopulationParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestWriteResultsToFileAndOutputCellPopulationParameters() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 420, "TestWriteResultsToFileAndOutputCellPopulationParameters" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestWriteResultsToFileAndOutputCellPopulationParameters(); }
} testDescription_TestPottsBasedCellPopulation_TestWriteResultsToFileAndOutputCellPopulationParameters;

static class TestDescription_TestPottsBasedCellPopulation_TestNodeAndMeshMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestNodeAndMeshMethods() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 488, "TestNodeAndMeshMethods" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestNodeAndMeshMethods(); }
} testDescription_TestPottsBasedCellPopulation_TestNodeAndMeshMethods;

static class TestDescription_TestPottsBasedCellPopulation_TestGetLocationOfCellCentre : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestGetLocationOfCellCentre() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 544, "TestGetLocationOfCellCentre" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestGetLocationOfCellCentre(); }
} testDescription_TestPottsBasedCellPopulation_TestGetLocationOfCellCentre;

static class TestDescription_TestPottsBasedCellPopulation_TestAddingUpdateRules : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestAddingUpdateRules() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 574, "TestAddingUpdateRules" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestAddingUpdateRules(); }
} testDescription_TestPottsBasedCellPopulation_TestAddingUpdateRules;

static class TestDescription_TestPottsBasedCellPopulation_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestArchiving() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 602, "TestArchiving" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestArchiving(); }
} testDescription_TestPottsBasedCellPopulation_TestArchiving;

static class TestDescription_TestPottsBasedCellPopulation_TestMakeMutableMeshForPdes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCellPopulation_TestMakeMutableMeshForPdes() : CxxTest::RealTestDescription( Tests_TestPottsBasedCellPopulation, suiteDescription_TestPottsBasedCellPopulation, 699, "TestMakeMutableMeshForPdes" ) {}
 void runTest() { suite_TestPottsBasedCellPopulation.TestMakeMutableMeshForPdes(); }
} testDescription_TestPottsBasedCellPopulation_TestMakeMutableMeshForPdes;

#include <cxxtest/Root.cpp>
