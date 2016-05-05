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
#include "heart/test/stimuli/TestStimulus.hpp"

static TestStimulus suite_TestStimulus;

static CxxTest::List Tests_TestStimulus = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStimulus( "heart/test/stimuli/TestStimulus.hpp", 55, "TestStimulus", suite_TestStimulus, Tests_TestStimulus );

static class TestDescription_TestStimulus_TestSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 59, "TestSimpleStimulus" ) {}
 void runTest() { suite_TestStimulus.TestSimpleStimulus(); }
} testDescription_TestStimulus_TestSimpleStimulus;

static class TestDescription_TestStimulus_TestDelayedSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestDelayedSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 91, "TestDelayedSimpleStimulus" ) {}
 void runTest() { suite_TestStimulus.TestDelayedSimpleStimulus(); }
} testDescription_TestStimulus_TestDelayedSimpleStimulus;

static class TestDescription_TestStimulus_TestRegularStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestRegularStimulus() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 107, "TestRegularStimulus" ) {}
 void runTest() { suite_TestStimulus.TestRegularStimulus(); }
} testDescription_TestStimulus_TestRegularStimulus;

static class TestDescription_TestStimulus_TestRegularStimulusStopping : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestRegularStimulusStopping() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 191, "TestRegularStimulusStopping" ) {}
 void runTest() { suite_TestStimulus.TestRegularStimulusStopping(); }
} testDescription_TestStimulus_TestRegularStimulusStopping;

static class TestDescription_TestStimulus_TestRegularStimulusZeroNetCharge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestRegularStimulusZeroNetCharge() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 253, "TestRegularStimulusZeroNetCharge" ) {}
 void runTest() { suite_TestStimulus.TestRegularStimulusZeroNetCharge(); }
} testDescription_TestStimulus_TestRegularStimulusZeroNetCharge;

static class TestDescription_TestStimulus_TestSumStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestSumStimulus() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 330, "TestSumStimulus" ) {}
 void runTest() { suite_TestStimulus.TestSumStimulus(); }
} testDescription_TestStimulus_TestSumStimulus;

static class TestDescription_TestStimulus_TestZeroStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestZeroStimulus() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 348, "TestZeroStimulus" ) {}
 void runTest() { suite_TestStimulus.TestZeroStimulus(); }
} testDescription_TestStimulus_TestZeroStimulus;

static class TestDescription_TestStimulus_TestMultiStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestMultiStimulus() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 354, "TestMultiStimulus" ) {}
 void runTest() { suite_TestStimulus.TestMultiStimulus(); }
} testDescription_TestStimulus_TestMultiStimulus;

static class TestDescription_TestStimulus_TestComplicatedStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestComplicatedStimulus() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 386, "TestComplicatedStimulus" ) {}
 void runTest() { suite_TestStimulus.TestComplicatedStimulus(); }
} testDescription_TestStimulus_TestComplicatedStimulus;

static class TestDescription_TestStimulus_TestArchivingStimuli : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulus_TestArchivingStimuli() : CxxTest::RealTestDescription( Tests_TestStimulus, suiteDescription_TestStimulus, 430, "TestArchivingStimuli" ) {}
 void runTest() { suite_TestStimulus.TestArchivingStimuli(); }
} testDescription_TestStimulus_TestArchivingStimuli;

#include <cxxtest/Root.cpp>
