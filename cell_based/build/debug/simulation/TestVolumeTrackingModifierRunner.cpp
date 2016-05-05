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
#include "cell_based/test/simulation/TestVolumeTrackingModifier.hpp"

static TestVolumeTrackingModifier suite_TestVolumeTrackingModifier;

static CxxTest::List Tests_TestVolumeTrackingModifier = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVolumeTrackingModifier( "cell_based/test/simulation/TestVolumeTrackingModifier.hpp", 76, "TestVolumeTrackingModifier", suite_TestVolumeTrackingModifier, Tests_TestVolumeTrackingModifier );

static class TestDescription_TestVolumeTrackingModifier_TestNodeBasedSimulationWithContactInhibition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVolumeTrackingModifier_TestNodeBasedSimulationWithContactInhibition() : CxxTest::RealTestDescription( Tests_TestVolumeTrackingModifier, suiteDescription_TestVolumeTrackingModifier, 80, "TestNodeBasedSimulationWithContactInhibition" ) {}
 void runTest() { suite_TestVolumeTrackingModifier.TestNodeBasedSimulationWithContactInhibition(); }
} testDescription_TestVolumeTrackingModifier_TestNodeBasedSimulationWithContactInhibition;

static class TestDescription_TestVolumeTrackingModifier_TestMeshBasedSimulationWithContactInhibition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVolumeTrackingModifier_TestMeshBasedSimulationWithContactInhibition() : CxxTest::RealTestDescription( Tests_TestVolumeTrackingModifier, suiteDescription_TestVolumeTrackingModifier, 162, "TestMeshBasedSimulationWithContactInhibition" ) {}
 void runTest() { suite_TestVolumeTrackingModifier.TestMeshBasedSimulationWithContactInhibition(); }
} testDescription_TestVolumeTrackingModifier_TestMeshBasedSimulationWithContactInhibition;

static class TestDescription_TestVolumeTrackingModifier_TestMeshBasedSimulationWithGhostNodesAndContactInhibition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVolumeTrackingModifier_TestMeshBasedSimulationWithGhostNodesAndContactInhibition() : CxxTest::RealTestDescription( Tests_TestVolumeTrackingModifier, suiteDescription_TestVolumeTrackingModifier, 234, "TestMeshBasedSimulationWithGhostNodesAndContactInhibition" ) {}
 void runTest() { suite_TestVolumeTrackingModifier.TestMeshBasedSimulationWithGhostNodesAndContactInhibition(); }
} testDescription_TestVolumeTrackingModifier_TestMeshBasedSimulationWithGhostNodesAndContactInhibition;

static class TestDescription_TestVolumeTrackingModifier_TestVertexBasedSimulationWithContactInhibition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVolumeTrackingModifier_TestVertexBasedSimulationWithContactInhibition() : CxxTest::RealTestDescription( Tests_TestVolumeTrackingModifier, suiteDescription_TestVolumeTrackingModifier, 307, "TestVertexBasedSimulationWithContactInhibition" ) {}
 void runTest() { suite_TestVolumeTrackingModifier.TestVertexBasedSimulationWithContactInhibition(); }
} testDescription_TestVolumeTrackingModifier_TestVertexBasedSimulationWithContactInhibition;

static class TestDescription_TestVolumeTrackingModifier_TestVolumeTrackedOffLatticeSimulationArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVolumeTrackingModifier_TestVolumeTrackedOffLatticeSimulationArchiving() : CxxTest::RealTestDescription( Tests_TestVolumeTrackingModifier, suiteDescription_TestVolumeTrackingModifier, 383, "TestVolumeTrackedOffLatticeSimulationArchiving" ) {}
 void runTest() { suite_TestVolumeTrackingModifier.TestVolumeTrackedOffLatticeSimulationArchiving(); }
} testDescription_TestVolumeTrackingModifier_TestVolumeTrackedOffLatticeSimulationArchiving;

static class TestDescription_TestVolumeTrackingModifier_TestVolumeTrackingModifierOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVolumeTrackingModifier_TestVolumeTrackingModifierOutputParameters() : CxxTest::RealTestDescription( Tests_TestVolumeTrackingModifier, suiteDescription_TestVolumeTrackingModifier, 467, "TestVolumeTrackingModifierOutputParameters" ) {}
 void runTest() { suite_TestVolumeTrackingModifier.TestVolumeTrackingModifierOutputParameters(); }
} testDescription_TestVolumeTrackingModifier_TestVolumeTrackingModifierOutputParameters;

#include <cxxtest/Root.cpp>
