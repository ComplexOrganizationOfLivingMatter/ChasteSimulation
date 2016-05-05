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
#include "heart/test/bidomain/TestBidomainWithBathProblem.hpp"

static TestBidomainWithBathProblem suite_TestBidomainWithBathProblem;

static CxxTest::List Tests_TestBidomainWithBathProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBidomainWithBathProblem( "heart/test/bidomain/TestBidomainWithBathProblem.hpp", 62, "TestBidomainWithBathProblem", suite_TestBidomainWithBathProblem, Tests_TestBidomainWithBathProblem );

static class TestDescription_TestBidomainWithBathProblem_TestLabellingNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestLabellingNodes() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 70, "TestLabellingNodes" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestLabellingNodes(); }
} testDescription_TestBidomainWithBathProblem_TestLabellingNodes;

static class TestDescription_TestBidomainWithBathProblem_TestFailsIfNoBathElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestFailsIfNoBathElements() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 109, "TestFailsIfNoBathElements" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestFailsIfNoBathElements(); }
} testDescription_TestBidomainWithBathProblem_TestFailsIfNoBathElements;

static class TestDescription_TestBidomainWithBathProblem_TestCheckForBathElementsNoDeadlock : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestCheckForBathElementsNoDeadlock() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 125, "TestCheckForBathElementsNoDeadlock" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestCheckForBathElementsNoDeadlock(); }
} testDescription_TestBidomainWithBathProblem_TestCheckForBathElementsNoDeadlock;

static class TestDescription_TestBidomainWithBathProblem_TestBathIntracellularStimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestBathIntracellularStimulation() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 157, "TestBathIntracellularStimulation" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestBathIntracellularStimulation(); }
} testDescription_TestBidomainWithBathProblem_TestBathIntracellularStimulation;

static class TestDescription_TestBidomainWithBathProblem_Test1dProblemOnlyBathGroundedOneSide : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_Test1dProblemOnlyBathGroundedOneSide() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 218, "Test1dProblemOnlyBathGroundedOneSide" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.Test1dProblemOnlyBathGroundedOneSide(); }
} testDescription_TestBidomainWithBathProblem_Test1dProblemOnlyBathGroundedOneSide;

static class TestDescription_TestBidomainWithBathProblem_Test2dBathIntracellularStimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_Test2dBathIntracellularStimulation() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 283, "Test2dBathIntracellularStimulation" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.Test2dBathIntracellularStimulation(); }
} testDescription_TestBidomainWithBathProblem_Test2dBathIntracellularStimulation;

static class TestDescription_TestBidomainWithBathProblem_Test2dBathInputFluxEqualsOutputFlux : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_Test2dBathInputFluxEqualsOutputFlux() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 328, "Test2dBathInputFluxEqualsOutputFlux" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.Test2dBathInputFluxEqualsOutputFlux(); }
} testDescription_TestBidomainWithBathProblem_Test2dBathInputFluxEqualsOutputFlux;

static class TestDescription_TestBidomainWithBathProblem_Test2dBathMultipleBathConductivities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_Test2dBathMultipleBathConductivities() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 395, "Test2dBathMultipleBathConductivities" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.Test2dBathMultipleBathConductivities(); }
} testDescription_TestBidomainWithBathProblem_Test2dBathMultipleBathConductivities;

static class TestDescription_TestBidomainWithBathProblem_TestProblemChecksUsingBathWithMultipleBathConductivities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestProblemChecksUsingBathWithMultipleBathConductivities() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 497, "TestProblemChecksUsingBathWithMultipleBathConductivities" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestProblemChecksUsingBathWithMultipleBathConductivities(); }
} testDescription_TestBidomainWithBathProblem_TestProblemChecksUsingBathWithMultipleBathConductivities;

static class TestDescription_TestBidomainWithBathProblem_Test2dBathGroundedElectrodeStimulusSwitchesOnOff : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_Test2dBathGroundedElectrodeStimulusSwitchesOnOff() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 519, "Test2dBathGroundedElectrodeStimulusSwitchesOnOff" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.Test2dBathGroundedElectrodeStimulusSwitchesOnOff(); }
} testDescription_TestBidomainWithBathProblem_Test2dBathGroundedElectrodeStimulusSwitchesOnOff;

static class TestDescription_TestBidomainWithBathProblem_TestMatrixBasedAssembledBath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestMatrixBasedAssembledBath() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 616, "TestMatrixBasedAssembledBath" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestMatrixBasedAssembledBath(); }
} testDescription_TestBidomainWithBathProblem_TestMatrixBasedAssembledBath;

static class TestDescription_TestBidomainWithBathProblem_TestArchivingBidomainProblemWithElectrodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestArchivingBidomainProblemWithElectrodes() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 696, "TestArchivingBidomainProblemWithElectrodes" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestArchivingBidomainProblemWithElectrodes(); }
} testDescription_TestBidomainWithBathProblem_TestArchivingBidomainProblemWithElectrodes;

static class TestDescription_TestBidomainWithBathProblem_TestSettingElectrodesOnResumedSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestSettingElectrodesOnResumedSimulation() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 805, "TestSettingElectrodesOnResumedSimulation" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestSettingElectrodesOnResumedSimulation(); }
} testDescription_TestBidomainWithBathProblem_TestSettingElectrodesOnResumedSimulation;

static class TestDescription_TestBidomainWithBathProblem_TestArchivingMeshFileWithAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestArchivingMeshFileWithAttributes() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 882, "TestArchivingMeshFileWithAttributes" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestArchivingMeshFileWithAttributes(); }
} testDescription_TestBidomainWithBathProblem_TestArchivingMeshFileWithAttributes;

static class TestDescription_TestBidomainWithBathProblem_TestSwitchesOffAtCorrectTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestSwitchesOffAtCorrectTime() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 982, "TestSwitchesOffAtCorrectTime" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestSwitchesOffAtCorrectTime(); }
} testDescription_TestBidomainWithBathProblem_TestSwitchesOffAtCorrectTime;

static class TestDescription_TestBidomainWithBathProblem_TestBidomainWithBathCanOutputVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithBathProblem_TestBidomainWithBathCanOutputVariables() : CxxTest::RealTestDescription( Tests_TestBidomainWithBathProblem, suiteDescription_TestBidomainWithBathProblem, 1022, "TestBidomainWithBathCanOutputVariables" ) {}
 void runTest() { suite_TestBidomainWithBathProblem.TestBidomainWithBathCanOutputVariables(); }
} testDescription_TestBidomainWithBathProblem_TestBidomainWithBathCanOutputVariables;

#include <cxxtest/Root.cpp>
