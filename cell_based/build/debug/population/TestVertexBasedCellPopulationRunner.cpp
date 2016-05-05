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
#include "cell_based/test/population/TestVertexBasedCellPopulation.hpp"

static TestVertexBasedCellPopulation suite_TestVertexBasedCellPopulation;

static CxxTest::List Tests_TestVertexBasedCellPopulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexBasedCellPopulation( "cell_based/test/population/TestVertexBasedCellPopulation.hpp", 86, "TestVertexBasedCellPopulation", suite_TestVertexBasedCellPopulation, Tests_TestVertexBasedCellPopulation );

static class TestDescription_TestVertexBasedCellPopulation_TestCreateSmallVertexBasedCellPopulationAndGetWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestCreateSmallVertexBasedCellPopulationAndGetWidth() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 91, "TestCreateSmallVertexBasedCellPopulationAndGetWidth" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestCreateSmallVertexBasedCellPopulationAndGetWidth(); }
} testDescription_TestVertexBasedCellPopulation_TestCreateSmallVertexBasedCellPopulationAndGetWidth;

static class TestDescription_TestVertexBasedCellPopulation_TestValidate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestValidate() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 166, "TestValidate" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestValidate(); }
} testDescription_TestVertexBasedCellPopulation_TestValidate;

static class TestDescription_TestVertexBasedCellPopulation_TestGetDampingConstant : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestGetDampingConstant() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 256, "TestGetDampingConstant" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestGetDampingConstant(); }
} testDescription_TestVertexBasedCellPopulation_TestGetDampingConstant;

static class TestDescription_TestVertexBasedCellPopulation_TestGetDampingConstantException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestGetDampingConstantException() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 320, "TestGetDampingConstantException" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestGetDampingConstantException(); }
} testDescription_TestVertexBasedCellPopulation_TestGetDampingConstantException;

static class TestDescription_TestVertexBasedCellPopulation_TestUpdateWithoutBirthOrDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestUpdateWithoutBirthOrDeath() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 363, "TestUpdateWithoutBirthOrDeath" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestUpdateWithoutBirthOrDeath(); }
} testDescription_TestVertexBasedCellPopulation_TestUpdateWithoutBirthOrDeath;

static class TestDescription_TestVertexBasedCellPopulation_TestAddCellWithSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestAddCellWithSimpleMesh() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 388, "TestAddCellWithSimpleMesh" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestAddCellWithSimpleMesh(); }
} testDescription_TestVertexBasedCellPopulation_TestAddCellWithSimpleMesh;

static class TestDescription_TestVertexBasedCellPopulation_TestAddCellWithGivenDivisionVector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestAddCellWithGivenDivisionVector() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 517, "TestAddCellWithGivenDivisionVector" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestAddCellWithGivenDivisionVector(); }
} testDescription_TestVertexBasedCellPopulation_TestAddCellWithGivenDivisionVector;

static class TestDescription_TestVertexBasedCellPopulation_TestAddCellWithHoneycombMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestAddCellWithHoneycombMesh() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 597, "TestAddCellWithHoneycombMesh" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestAddCellWithHoneycombMesh(); }
} testDescription_TestVertexBasedCellPopulation_TestAddCellWithHoneycombMesh;

static class TestDescription_TestVertexBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 745, "TestIsCellAssociatedWithADeletedLocation" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestIsCellAssociatedWithADeletedLocation(); }
} testDescription_TestVertexBasedCellPopulation_TestIsCellAssociatedWithADeletedLocation;

static class TestDescription_TestVertexBasedCellPopulation_TestRemoveDeadCellsAndUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestRemoveDeadCellsAndUpdate() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 772, "TestRemoveDeadCellsAndUpdate" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestRemoveDeadCellsAndUpdate(); }
} testDescription_TestVertexBasedCellPopulation_TestRemoveDeadCellsAndUpdate;

static class TestDescription_TestVertexBasedCellPopulation_TestVertexBasedCellPopulationWriteResultsToFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestVertexBasedCellPopulationWriteResultsToFile() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 855, "TestVertexBasedCellPopulationWriteResultsToFile" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestVertexBasedCellPopulationWriteResultsToFile(); }
} testDescription_TestVertexBasedCellPopulation_TestVertexBasedCellPopulationWriteResultsToFile;

static class TestDescription_TestVertexBasedCellPopulation_TestArchiving2dVertexBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestArchiving2dVertexBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 1015, "TestArchiving2dVertexBasedCellPopulation" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestArchiving2dVertexBasedCellPopulation(); }
} testDescription_TestVertexBasedCellPopulation_TestArchiving2dVertexBasedCellPopulation;

static class TestDescription_TestVertexBasedCellPopulation_TestArchiving3dVertexBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestArchiving3dVertexBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 1154, "TestArchiving3dVertexBasedCellPopulation" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestArchiving3dVertexBasedCellPopulation(); }
} testDescription_TestVertexBasedCellPopulation_TestArchiving3dVertexBasedCellPopulation;

static class TestDescription_TestVertexBasedCellPopulation_TestUpdateNodeLocations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestUpdateNodeLocations() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 1356, "TestUpdateNodeLocations" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestUpdateNodeLocations(); }
} testDescription_TestVertexBasedCellPopulation_TestUpdateNodeLocations;

static class TestDescription_TestVertexBasedCellPopulation_TestGetTetrahedralMeshUsingVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulation_TestGetTetrahedralMeshUsingVertexMesh() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulation, suiteDescription_TestVertexBasedCellPopulation, 1401, "TestGetTetrahedralMeshUsingVertexMesh" ) {}
 void runTest() { suite_TestVertexBasedCellPopulation.TestGetTetrahedralMeshUsingVertexMesh(); }
} testDescription_TestVertexBasedCellPopulation_TestGetTetrahedralMeshUsingVertexMesh;

#include <cxxtest/Root.cpp>
