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
#include "heart/test/stimuli/TestNeumannStimulus.hpp"

static TestNeumannStimulus suite_TestNeumannStimulus;

static CxxTest::List Tests_TestNeumannStimulus = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNeumannStimulus( "heart/test/stimuli/TestNeumannStimulus.hpp", 57, "TestNeumannStimulus", suite_TestNeumannStimulus, Tests_TestNeumannStimulus );

static class TestDescription_TestNeumannStimulus_TestMonodomainConstantStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNeumannStimulus_TestMonodomainConstantStimulus() : CxxTest::RealTestDescription( Tests_TestNeumannStimulus, suiteDescription_TestNeumannStimulus, 66, "TestMonodomainConstantStimulus" ) {}
 void runTest() { suite_TestNeumannStimulus.TestMonodomainConstantStimulus(); }
} testDescription_TestNeumannStimulus_TestMonodomainConstantStimulus;

static class TestDescription_TestNeumannStimulus_TestMonodomainSquareWaveStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNeumannStimulus_TestMonodomainSquareWaveStimulus() : CxxTest::RealTestDescription( Tests_TestNeumannStimulus, suiteDescription_TestNeumannStimulus, 118, "TestMonodomainSquareWaveStimulus" ) {}
 void runTest() { suite_TestNeumannStimulus.TestMonodomainSquareWaveStimulus(); }
} testDescription_TestNeumannStimulus_TestMonodomainSquareWaveStimulus;

#include <cxxtest/Root.cpp>
