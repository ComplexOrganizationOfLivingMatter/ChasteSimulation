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
#include "cell_based/test/simulation/TestOffLatticeSimulationWithPdes.hpp"

static TestOffLatticeSimulationWithPdes suite_TestOffLatticeSimulationWithPdes;

static CxxTest::List Tests_TestOffLatticeSimulationWithPdes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOffLatticeSimulationWithPdes( "cell_based/test/simulation/TestOffLatticeSimulationWithPdes.hpp", 101, "TestOffLatticeSimulationWithPdes", suite_TestOffLatticeSimulationWithPdes, Tests_TestOffLatticeSimulationWithPdes );

static class TestDescription_TestOffLatticeSimulationWithPdes_TestUpdateAtEndOfTimeStep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestUpdateAtEndOfTimeStep() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 115, "TestUpdateAtEndOfTimeStep" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestUpdateAtEndOfTimeStep(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestUpdateAtEndOfTimeStep;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestWithOxygen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestWithOxygen() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 211, "TestWithOxygen" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestWithOxygen(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestWithOxygen;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestVisualizerOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestVisualizerOutput() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 282, "TestVisualizerOutput" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestVisualizerOutput(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestVisualizerOutput;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestWithPointwiseSource : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestWithPointwiseSource() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 305, "TestWithPointwiseSource" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestWithPointwiseSource(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestWithPointwiseSource;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestWithPointwiseTwoSource : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestWithPointwiseTwoSource() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 386, "TestWithPointwiseTwoSource" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestWithPointwiseTwoSource(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestWithPointwiseTwoSource;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestSpheroidStatistics : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestSpheroidStatistics() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 478, "TestSpheroidStatistics" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestSpheroidStatistics(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestSpheroidStatistics;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestCoarseSourceMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestCoarseSourceMesh() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 584, "TestCoarseSourceMesh" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestCoarseSourceMesh(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestCoarseSourceMesh;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestCoarseSourceMeshWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestCoarseSourceMeshWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 745, "TestCoarseSourceMeshWithGhostNodes" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestCoarseSourceMeshWithGhostNodes(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestCoarseSourceMeshWithGhostNodes;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestArchivingWithSimplePde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestArchivingWithSimplePde() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 822, "TestArchivingWithSimplePde" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestArchivingWithSimplePde(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestArchivingWithSimplePde;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestArchivingWithCellwisePde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestArchivingWithCellwisePde() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 912, "TestArchivingWithCellwisePde" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestArchivingWithCellwisePde(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestArchivingWithCellwisePde;

static class TestDescription_TestOffLatticeSimulationWithPdes_Test3DOffLatticeSimulationWithPdes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_Test3DOffLatticeSimulationWithPdes() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 988, "Test3DOffLatticeSimulationWithPdes" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.Test3DOffLatticeSimulationWithPdes(); }
} testDescription_TestOffLatticeSimulationWithPdes_Test3DOffLatticeSimulationWithPdes;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestWithBoundaryConditionVaryingInTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestWithBoundaryConditionVaryingInTime() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1051, "TestWithBoundaryConditionVaryingInTime" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestWithBoundaryConditionVaryingInTime(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestWithBoundaryConditionVaryingInTime;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestOffLatticeSimulationWithPdesParameterOutputMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestOffLatticeSimulationWithPdesParameterOutputMethods() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1118, "TestOffLatticeSimulationWithPdesParameterOutputMethods" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestOffLatticeSimulationWithPdesParameterOutputMethods(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestOffLatticeSimulationWithPdesParameterOutputMethods;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestNodeBasedWithoutCoarseMeshThrowsException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestNodeBasedWithoutCoarseMeshThrowsException() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1165, "TestNodeBasedWithoutCoarseMeshThrowsException" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestNodeBasedWithoutCoarseMeshThrowsException(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestNodeBasedWithoutCoarseMeshThrowsException;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestNodeBasedWithCoarseMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestNodeBasedWithCoarseMesh() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1222, "TestNodeBasedWithCoarseMesh" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestNodeBasedWithCoarseMesh(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestNodeBasedWithCoarseMesh;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestVertexBasedWithCoarseMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestVertexBasedWithCoarseMesh() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1327, "TestVertexBasedWithCoarseMesh" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestVertexBasedWithCoarseMesh(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestVertexBasedWithCoarseMesh;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestVolumeDependentAveragedPde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestVolumeDependentAveragedPde() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1412, "TestVolumeDependentAveragedPde" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestVolumeDependentAveragedPde(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestVolumeDependentAveragedPde;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased1d() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1511, "TestCoarsePdeSolutionOnNodeBased1d" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestCoarsePdeSolutionOnNodeBased1d(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased1d;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased2d() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1574, "TestCoarsePdeSolutionOnNodeBased2d" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestCoarsePdeSolutionOnNodeBased2d(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased2d;

static class TestDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased3d() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithPdes, suiteDescription_TestOffLatticeSimulationWithPdes, 1640, "TestCoarsePdeSolutionOnNodeBased3d" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithPdes.TestCoarsePdeSolutionOnNodeBased3d(); }
} testDescription_TestOffLatticeSimulationWithPdes_TestCoarsePdeSolutionOnNodeBased3d;

#include <cxxtest/Root.cpp>
