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
#include "heart/test/stimuli/TestRestitutionStimuli.hpp"

static TestRestitutionStimuli suite_TestRestitutionStimuli;

static CxxTest::List Tests_TestRestitutionStimuli = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRestitutionStimuli( "heart/test/stimuli/TestRestitutionStimuli.hpp", 54, "TestRestitutionStimuli", suite_TestRestitutionStimuli, Tests_TestRestitutionStimuli );

static class TestDescription_TestRestitutionStimuli_TestS1S2StimulusSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRestitutionStimuli_TestS1S2StimulusSetup() : CxxTest::RealTestDescription( Tests_TestRestitutionStimuli, suiteDescription_TestRestitutionStimuli, 117, "TestS1S2StimulusSetup" ) {}
 void runTest() { suite_TestRestitutionStimuli.TestS1S2StimulusSetup(); }
} testDescription_TestRestitutionStimuli_TestS1S2StimulusSetup;

static class TestDescription_TestRestitutionStimuli_TestSteadyStateRestitutionCellStimulusSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRestitutionStimuli_TestSteadyStateRestitutionCellStimulusSetup() : CxxTest::RealTestDescription( Tests_TestRestitutionStimuli, suiteDescription_TestRestitutionStimuli, 141, "TestSteadyStateRestitutionCellStimulusSetup" ) {}
 void runTest() { suite_TestRestitutionStimuli.TestSteadyStateRestitutionCellStimulusSetup(); }
} testDescription_TestRestitutionStimuli_TestSteadyStateRestitutionCellStimulusSetup;

static class TestDescription_TestRestitutionStimuli_TestArchivingS1S2Stimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRestitutionStimuli_TestArchivingS1S2Stimulus() : CxxTest::RealTestDescription( Tests_TestRestitutionStimuli, suiteDescription_TestRestitutionStimuli, 163, "TestArchivingS1S2Stimulus" ) {}
 void runTest() { suite_TestRestitutionStimuli.TestArchivingS1S2Stimulus(); }
} testDescription_TestRestitutionStimuli_TestArchivingS1S2Stimulus;

static class TestDescription_TestRestitutionStimuli_TestArchivingSteadyStateStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRestitutionStimuli_TestArchivingSteadyStateStimulus() : CxxTest::RealTestDescription( Tests_TestRestitutionStimuli, suiteDescription_TestRestitutionStimuli, 209, "TestArchivingSteadyStateStimulus" ) {}
 void runTest() { suite_TestRestitutionStimuli.TestArchivingSteadyStateStimulus(); }
} testDescription_TestRestitutionStimuli_TestArchivingSteadyStateStimulus;

#include <cxxtest/Root.cpp>
