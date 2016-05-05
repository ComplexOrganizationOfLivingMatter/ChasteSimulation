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
#include "global/test/TestTimeStepper.hpp"

static TestTimeStepper suite_TestTimeStepper;

static CxxTest::List Tests_TestTimeStepper = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTimeStepper( "global/test/TestTimeStepper.hpp", 54, "TestTimeStepper", suite_TestTimeStepper, Tests_TestTimeStepper );

static class TestDescription_TestTimeStepper_TestOverflow : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestOverflow() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 58, "TestOverflow" ) {}
 void runTest() { suite_TestTimeStepper.TestOverflow(); }
} testDescription_TestTimeStepper_TestOverflow;

static class TestDescription_TestTimeStepper_TestAdvance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestAdvance() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 66, "TestAdvance" ) {}
 void runTest() { suite_TestTimeStepper.TestAdvance(); }
} testDescription_TestTimeStepper_TestAdvance;

static class TestDescription_TestTimeStepper_TestEnforceConstantTimeStep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestEnforceConstantTimeStep() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 150, "TestEnforceConstantTimeStep" ) {}
 void runTest() { suite_TestTimeStepper.TestEnforceConstantTimeStep(); }
} testDescription_TestTimeStepper_TestEnforceConstantTimeStep;

static class TestDescription_TestTimeStepper_TestAdditionalSteppingPoints : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestAdditionalSteppingPoints() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 186, "TestAdditionalSteppingPoints" ) {}
 void runTest() { suite_TestTimeStepper.TestAdditionalSteppingPoints(); }
} testDescription_TestTimeStepper_TestAdditionalSteppingPoints;

static class TestDescription_TestTimeStepper_TestResetTimeStep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestResetTimeStep() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 225, "TestResetTimeStep" ) {}
 void runTest() { suite_TestTimeStepper.TestResetTimeStep(); }
} testDescription_TestTimeStepper_TestResetTimeStep;

static class TestDescription_TestTimeStepper_TestWithLargerStartTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestWithLargerStartTime() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 264, "TestWithLargerStartTime" ) {}
 void runTest() { suite_TestTimeStepper.TestWithLargerStartTime(); }
} testDescription_TestTimeStepper_TestWithLargerStartTime;

static class TestDescription_TestTimeStepper_TestWithLargeEndTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestWithLargeEndTime() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 275, "TestWithLargeEndTime" ) {}
 void runTest() { suite_TestTimeStepper.TestWithLargeEndTime(); }
} testDescription_TestTimeStepper_TestWithLargeEndTime;

static class TestDescription_TestTimeStepper_TestWithSingleTimeStep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestWithSingleTimeStep() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 287, "TestWithSingleTimeStep" ) {}
 void runTest() { suite_TestTimeStepper.TestWithSingleTimeStep(); }
} testDescription_TestTimeStepper_TestWithSingleTimeStep;

static class TestDescription_TestTimeStepper_TestIntelProductionFoolishness : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestIntelProductionFoolishness() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 304, "TestIntelProductionFoolishness" ) {}
 void runTest() { suite_TestTimeStepper.TestIntelProductionFoolishness(); }
} testDescription_TestTimeStepper_TestIntelProductionFoolishness;

static class TestDescription_TestTimeStepper_TestArchiveTimeStepper : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeStepper_TestArchiveTimeStepper() : CxxTest::RealTestDescription( Tests_TestTimeStepper, suiteDescription_TestTimeStepper, 326, "TestArchiveTimeStepper" ) {}
 void runTest() { suite_TestTimeStepper.TestArchiveTimeStepper(); }
} testDescription_TestTimeStepper_TestArchiveTimeStepper;

#include <cxxtest/Root.cpp>
