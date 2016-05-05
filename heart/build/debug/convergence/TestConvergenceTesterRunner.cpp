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
#include "heart/test/convergence/TestConvergenceTester.hpp"

static TestConvergenceTester suite_TestConvergenceTester;

static CxxTest::List Tests_TestConvergenceTester = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestConvergenceTester( "heart/test/convergence/TestConvergenceTester.hpp", 58, "TestConvergenceTester", suite_TestConvergenceTester, Tests_TestConvergenceTester );

static class TestDescription_TestConvergenceTester_Test1DOdeTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_Test1DOdeTime() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 71, "Test1DOdeTime" ) {}
 void runTest() { suite_TestConvergenceTester.Test1DOdeTime(); }
} testDescription_TestConvergenceTester_Test1DOdeTime;

static class TestDescription_TestConvergenceTester_Test1DOdeTimeWarning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_Test1DOdeTimeWarning() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 82, "Test1DOdeTimeWarning" ) {}
 void runTest() { suite_TestConvergenceTester.Test1DOdeTimeWarning(); }
} testDescription_TestConvergenceTester_Test1DOdeTimeWarning;

static class TestDescription_TestConvergenceTester_Test1DPdeTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_Test1DPdeTime() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 95, "Test1DPdeTime" ) {}
 void runTest() { suite_TestConvergenceTester.Test1DPdeTime(); }
} testDescription_TestConvergenceTester_Test1DPdeTime;

static class TestDescription_TestConvergenceTester_Test1DOdePdeTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_Test1DOdePdeTime() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 106, "Test1DOdePdeTime" ) {}
 void runTest() { suite_TestConvergenceTester.Test1DOdePdeTime(); }
} testDescription_TestConvergenceTester_Test1DOdePdeTime;

static class TestDescription_TestConvergenceTester_Test1DPdeTimeRegion : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_Test1DPdeTimeRegion() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 117, "Test1DPdeTimeRegion" ) {}
 void runTest() { suite_TestConvergenceTester.Test1DPdeTimeRegion(); }
} testDescription_TestConvergenceTester_Test1DPdeTimeRegion;

static class TestDescription_TestConvergenceTester_Test1DPdeTimeNeumann : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_Test1DPdeTimeNeumann() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 129, "Test1DPdeTimeNeumann" ) {}
 void runTest() { suite_TestConvergenceTester.Test1DPdeTimeNeumann(); }
} testDescription_TestConvergenceTester_Test1DPdeTimeNeumann;

static class TestDescription_TestConvergenceTester_TestSpaceConvergenceMonoIn1DWithRelativeTolerance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_TestSpaceConvergenceMonoIn1DWithRelativeTolerance() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 142, "TestSpaceConvergenceMonoIn1DWithRelativeTolerance" ) {}
 void runTest() { suite_TestConvergenceTester.TestSpaceConvergenceMonoIn1DWithRelativeTolerance(); }
} testDescription_TestConvergenceTester_TestSpaceConvergenceMonoIn1DWithRelativeTolerance;

static class TestDescription_TestConvergenceTester_TestSpaceConvergenceBidomainIn1DWithAbsoluteTolerance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConvergenceTester_TestSpaceConvergenceBidomainIn1DWithAbsoluteTolerance() : CxxTest::RealTestDescription( Tests_TestConvergenceTester, suiteDescription_TestConvergenceTester, 156, "TestSpaceConvergenceBidomainIn1DWithAbsoluteTolerance" ) {}
 void runTest() { suite_TestConvergenceTester.TestSpaceConvergenceBidomainIn1DWithAbsoluteTolerance(); }
} testDescription_TestConvergenceTester_TestSpaceConvergenceBidomainIn1DWithAbsoluteTolerance;

#include <cxxtest/Root.cpp>
