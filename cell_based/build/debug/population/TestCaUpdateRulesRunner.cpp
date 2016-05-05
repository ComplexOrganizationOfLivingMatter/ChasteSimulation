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
#include "cell_based/test/population/TestCaUpdateRules.hpp"

static TestCaUpdateRules suite_TestCaUpdateRules;

static CxxTest::List Tests_TestCaUpdateRules = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCaUpdateRules( "cell_based/test/population/TestCaUpdateRules.hpp", 61, "TestCaUpdateRules", suite_TestCaUpdateRules, Tests_TestCaUpdateRules );

static class TestDescription_TestCaUpdateRules_TestDiffusionCaUpdateRuleIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaUpdateRules_TestDiffusionCaUpdateRuleIn2d() : CxxTest::RealTestDescription( Tests_TestCaUpdateRules, suiteDescription_TestCaUpdateRules, 65, "TestDiffusionCaUpdateRuleIn2d" ) {}
 void runTest() { suite_TestCaUpdateRules.TestDiffusionCaUpdateRuleIn2d(); }
} testDescription_TestCaUpdateRules_TestDiffusionCaUpdateRuleIn2d;

static class TestDescription_TestCaUpdateRules_TestDiffusionCaUpdateRuleIn2dWithMultipleCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaUpdateRules_TestDiffusionCaUpdateRuleIn2dWithMultipleCells() : CxxTest::RealTestDescription( Tests_TestCaUpdateRules, suiteDescription_TestCaUpdateRules, 127, "TestDiffusionCaUpdateRuleIn2dWithMultipleCells" ) {}
 void runTest() { suite_TestCaUpdateRules.TestDiffusionCaUpdateRuleIn2dWithMultipleCells(); }
} testDescription_TestCaUpdateRules_TestDiffusionCaUpdateRuleIn2dWithMultipleCells;

static class TestDescription_TestCaUpdateRules_TestArchiveDiffusionCaUpdateRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaUpdateRules_TestArchiveDiffusionCaUpdateRule() : CxxTest::RealTestDescription( Tests_TestCaUpdateRules, suiteDescription_TestCaUpdateRules, 200, "TestArchiveDiffusionCaUpdateRule" ) {}
 void runTest() { suite_TestCaUpdateRules.TestArchiveDiffusionCaUpdateRule(); }
} testDescription_TestCaUpdateRules_TestArchiveDiffusionCaUpdateRule;

static class TestDescription_TestCaUpdateRules_TestUpdateRuleOutputUpdateRuleInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaUpdateRules_TestUpdateRuleOutputUpdateRuleInfo() : CxxTest::RealTestDescription( Tests_TestCaUpdateRules, suiteDescription_TestCaUpdateRules, 237, "TestUpdateRuleOutputUpdateRuleInfo" ) {}
 void runTest() { suite_TestCaUpdateRules.TestUpdateRuleOutputUpdateRuleInfo(); }
} testDescription_TestCaUpdateRules_TestUpdateRuleOutputUpdateRuleInfo;

static class TestDescription_TestCaUpdateRules_TestRandomCaSwitchingUpdateRuleIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaUpdateRules_TestRandomCaSwitchingUpdateRuleIn2d() : CxxTest::RealTestDescription( Tests_TestCaUpdateRules, suiteDescription_TestCaUpdateRules, 263, "TestRandomCaSwitchingUpdateRuleIn2d" ) {}
 void runTest() { suite_TestCaUpdateRules.TestRandomCaSwitchingUpdateRuleIn2d(); }
} testDescription_TestCaUpdateRules_TestRandomCaSwitchingUpdateRuleIn2d;

static class TestDescription_TestCaUpdateRules_TestArchiveRandomCaSwitchingUpdateRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaUpdateRules_TestArchiveRandomCaSwitchingUpdateRule() : CxxTest::RealTestDescription( Tests_TestCaUpdateRules, suiteDescription_TestCaUpdateRules, 312, "TestArchiveRandomCaSwitchingUpdateRule" ) {}
 void runTest() { suite_TestCaUpdateRules.TestArchiveRandomCaSwitchingUpdateRule(); }
} testDescription_TestCaUpdateRules_TestArchiveRandomCaSwitchingUpdateRule;

static class TestDescription_TestCaUpdateRules_TestSwitchingUpdateRuleOutputUpdateRuleInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaUpdateRules_TestSwitchingUpdateRuleOutputUpdateRuleInfo() : CxxTest::RealTestDescription( Tests_TestCaUpdateRules, suiteDescription_TestCaUpdateRules, 349, "TestSwitchingUpdateRuleOutputUpdateRuleInfo" ) {}
 void runTest() { suite_TestCaUpdateRules.TestSwitchingUpdateRuleOutputUpdateRuleInfo(); }
} testDescription_TestCaUpdateRules_TestSwitchingUpdateRuleOutputUpdateRuleInfo;

#include <cxxtest/Root.cpp>
