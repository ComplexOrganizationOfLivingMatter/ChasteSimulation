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
#include "cell_based/test/simulation/TestOffLatticeSimulation.hpp"

static TestOffLatticeSimulation suite_TestOffLatticeSimulation;

static CxxTest::List Tests_TestOffLatticeSimulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOffLatticeSimulation( "cell_based/test/simulation/TestOffLatticeSimulation.hpp", 78, "TestOffLatticeSimulation", suite_TestOffLatticeSimulation, Tests_TestOffLatticeSimulation );

static class TestDescription_TestOffLatticeSimulation_TestOutputNodeAndCellVelocitiesAndDivisionLocations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOutputNodeAndCellVelocitiesAndDivisionLocations() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 82, "TestOutputNodeAndCellVelocitiesAndDivisionLocations" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOutputNodeAndCellVelocitiesAndDivisionLocations(); }
} testDescription_TestOffLatticeSimulation_TestOutputNodeAndCellVelocitiesAndDivisionLocations;

static class TestDescription_TestOffLatticeSimulation_TestOutputNodeVelocitiesWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOutputNodeVelocitiesWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 155, "TestOutputNodeVelocitiesWithGhostNodes" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOutputNodeVelocitiesWithGhostNodes(); }
} testDescription_TestOffLatticeSimulation_TestOutputNodeVelocitiesWithGhostNodes;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithCellDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithCellDeath() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 228, "TestOffLatticeSimulationWithCellDeath" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithCellDeath(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithCellDeath;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleCellKillers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleCellKillers() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 281, "TestOffLatticeSimulationWithMultipleCellKillers" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithMultipleCellKillers(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleCellKillers;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleForces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleForces() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 341, "TestOffLatticeSimulationWithMultipleForces" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithMultipleForces(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleForces;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithVariableRestLengths : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithVariableRestLengths() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 400, "TestOffLatticeSimulationWithVariableRestLengths" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithVariableRestLengths(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithVariableRestLengths;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWith2dMeshIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWith2dMeshIn3d() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 495, "TestOffLatticeSimulationWith2dMeshIn3d" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWith2dMeshIn3d(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWith2dMeshIn3d;

static class TestDescription_TestOffLatticeSimulation_TestArchivingOffLatticeSimulationWith2dMeshIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestArchivingOffLatticeSimulationWith2dMeshIn3d() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 539, "TestArchivingOffLatticeSimulationWith2dMeshIn3d" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestArchivingOffLatticeSimulationWith2dMeshIn3d(); }
} testDescription_TestOffLatticeSimulation_TestArchivingOffLatticeSimulationWith2dMeshIn3d;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithPeriodicMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithPeriodicMesh() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 594, "TestOffLatticeSimulationWithPeriodicMesh" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithPeriodicMesh(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithPeriodicMesh;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleCellBoundaryConditions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleCellBoundaryConditions() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 637, "TestOffLatticeSimulationWithMultipleCellBoundaryConditions" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithMultipleCellBoundaryConditions(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithMultipleCellBoundaryConditions;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithStoppingEvent : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithStoppingEvent() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 693, "TestOffLatticeSimulationWithStoppingEvent" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithStoppingEvent(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithStoppingEvent;

static class TestDescription_TestOffLatticeSimulation_TestApoptosisSpringLengths : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestApoptosisSpringLengths() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 806, "TestApoptosisSpringLengths" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestApoptosisSpringLengths(); }
} testDescription_TestOffLatticeSimulation_TestApoptosisSpringLengths;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationParameterOutputMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationParameterOutputMethods() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 898, "TestOffLatticeSimulationParameterOutputMethods" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationParameterOutputMethods(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationParameterOutputMethods;

static class TestDescription_TestOffLatticeSimulation_Test1dOffLatticeSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_Test1dOffLatticeSimulation() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 957, "Test1dOffLatticeSimulation" ) {}
 void runTest() { suite_TestOffLatticeSimulation.Test1dOffLatticeSimulation(); }
} testDescription_TestOffLatticeSimulation_Test1dOffLatticeSimulation;

static class TestDescription_TestOffLatticeSimulation_TestSettingEndTimeIssue : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestSettingEndTimeIssue() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 997, "TestSettingEndTimeIssue" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestSettingEndTimeIssue(); }
} testDescription_TestOffLatticeSimulation_TestSettingEndTimeIssue;

static class TestDescription_TestOffLatticeSimulation_TestCellProliferativeTypeCounts : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestCellProliferativeTypeCounts() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 1025, "TestCellProliferativeTypeCounts" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestCellProliferativeTypeCounts(); }
} testDescription_TestOffLatticeSimulation_TestCellProliferativeTypeCounts;

static class TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithModifiers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithModifiers() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 1112, "TestOffLatticeSimulationWithModifiers" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestOffLatticeSimulationWithModifiers(); }
} testDescription_TestOffLatticeSimulation_TestOffLatticeSimulationWithModifiers;

static class TestDescription_TestOffLatticeSimulation_TestWriterIteratorsWithCellDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation_TestWriterIteratorsWithCellDeath() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation, suiteDescription_TestOffLatticeSimulation, 1152, "TestWriterIteratorsWithCellDeath" ) {}
 void runTest() { suite_TestOffLatticeSimulation.TestWriterIteratorsWithCellDeath(); }
} testDescription_TestOffLatticeSimulation_TestWriterIteratorsWithCellDeath;

#include <cxxtest/Root.cpp>
