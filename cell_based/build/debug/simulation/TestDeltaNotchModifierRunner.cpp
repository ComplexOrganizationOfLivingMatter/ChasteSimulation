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
#include "cell_based/test/simulation/TestDeltaNotchModifier.hpp"

static TestDeltaNotchModifier suite_TestDeltaNotchModifier;

static CxxTest::List Tests_TestDeltaNotchModifier = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDeltaNotchModifier( "cell_based/test/simulation/TestDeltaNotchModifier.hpp", 69, "TestDeltaNotchModifier", suite_TestDeltaNotchModifier, Tests_TestDeltaNotchModifier );

static class TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepNodeBased : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepNodeBased() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 73, "TestUpdateAtEndOfTimeStepNodeBased" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestUpdateAtEndOfTimeStepNodeBased(); }
} testDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepNodeBased;

static class TestDescription_TestDeltaNotchModifier_TestHeterogeneousDeltaNotchOnUntetheredTwoCellSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestHeterogeneousDeltaNotchOnUntetheredTwoCellSystem() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 143, "TestHeterogeneousDeltaNotchOnUntetheredTwoCellSystem" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestHeterogeneousDeltaNotchOnUntetheredTwoCellSystem(); }
} testDescription_TestDeltaNotchModifier_TestHeterogeneousDeltaNotchOnUntetheredTwoCellSystem;

static class TestDescription_TestDeltaNotchModifier_TestHomogeneousDeltaNotchOnUntetheredTwoCellSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestHomogeneousDeltaNotchOnUntetheredTwoCellSystem() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 266, "TestHomogeneousDeltaNotchOnUntetheredTwoCellSystem" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestHomogeneousDeltaNotchOnUntetheredTwoCellSystem(); }
} testDescription_TestDeltaNotchModifier_TestHomogeneousDeltaNotchOnUntetheredTwoCellSystem;

static class TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepVertex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepVertex() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 369, "TestUpdateAtEndOfTimeStepVertex" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestUpdateAtEndOfTimeStepVertex(); }
} testDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepVertex;

static class TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepMeshBasedWithGhostes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepMeshBasedWithGhostes() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 433, "TestUpdateAtEndOfTimeStepMeshBasedWithGhostes" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestUpdateAtEndOfTimeStepMeshBasedWithGhostes(); }
} testDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepMeshBasedWithGhostes;

static class TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepPottsBased : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepPottsBased() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 496, "TestUpdateAtEndOfTimeStepPottsBased" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestUpdateAtEndOfTimeStepPottsBased(); }
} testDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepPottsBased;

static class TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepCaBased : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepCaBased() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 554, "TestUpdateAtEndOfTimeStepCaBased" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestUpdateAtEndOfTimeStepCaBased(); }
} testDescription_TestDeltaNotchModifier_TestUpdateAtEndOfTimeStepCaBased;

static class TestDescription_TestDeltaNotchModifier_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestArchiving() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 625, "TestArchiving" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestArchiving(); }
} testDescription_TestDeltaNotchModifier_TestArchiving;

static class TestDescription_TestDeltaNotchModifier_TestDeltaNotchModifierOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchModifier_TestDeltaNotchModifierOutputParameters() : CxxTest::RealTestDescription( Tests_TestDeltaNotchModifier, suiteDescription_TestDeltaNotchModifier, 719, "TestDeltaNotchModifierOutputParameters" ) {}
 void runTest() { suite_TestDeltaNotchModifier.TestDeltaNotchModifierOutputParameters(); }
} testDescription_TestDeltaNotchModifier_TestDeltaNotchModifierOutputParameters;

#include <cxxtest/Root.cpp>
