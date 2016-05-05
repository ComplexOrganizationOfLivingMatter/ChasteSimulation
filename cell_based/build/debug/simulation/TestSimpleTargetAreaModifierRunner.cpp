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
#include "cell_based/test/simulation/TestSimpleTargetAreaModifier.hpp"

static TestSimpleTargetAreaModifier suite_TestSimpleTargetAreaModifier;

static CxxTest::List Tests_TestSimpleTargetAreaModifier = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimpleTargetAreaModifier( "cell_based/test/simulation/TestSimpleTargetAreaModifier.hpp", 63, "TestSimpleTargetAreaModifier", suite_TestSimpleTargetAreaModifier, Tests_TestSimpleTargetAreaModifier );

static class TestDescription_TestSimpleTargetAreaModifier_TestSetupSolveException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleTargetAreaModifier_TestSetupSolveException() : CxxTest::RealTestDescription( Tests_TestSimpleTargetAreaModifier, suiteDescription_TestSimpleTargetAreaModifier, 67, "TestSetupSolveException" ) {}
 void runTest() { suite_TestSimpleTargetAreaModifier.TestSetupSolveException(); }
} testDescription_TestSimpleTargetAreaModifier_TestSetupSolveException;

static class TestDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierMethods() : CxxTest::RealTestDescription( Tests_TestSimpleTargetAreaModifier, suiteDescription_TestSimpleTargetAreaModifier, 92, "TestSimpleTargetAreaModifierMethods" ) {}
 void runTest() { suite_TestSimpleTargetAreaModifier.TestSimpleTargetAreaModifierMethods(); }
} testDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierMethods;

static class TestDescription_TestSimpleTargetAreaModifier_TestTargetAreaOfDaughterCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleTargetAreaModifier_TestTargetAreaOfDaughterCells() : CxxTest::RealTestDescription( Tests_TestSimpleTargetAreaModifier, suiteDescription_TestSimpleTargetAreaModifier, 219, "TestTargetAreaOfDaughterCells" ) {}
 void runTest() { suite_TestSimpleTargetAreaModifier.TestTargetAreaOfDaughterCells(); }
} testDescription_TestSimpleTargetAreaModifier_TestTargetAreaOfDaughterCells;

static class TestDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierArchiving() : CxxTest::RealTestDescription( Tests_TestSimpleTargetAreaModifier, suiteDescription_TestSimpleTargetAreaModifier, 306, "TestSimpleTargetAreaModifierArchiving" ) {}
 void runTest() { suite_TestSimpleTargetAreaModifier.TestSimpleTargetAreaModifierArchiving(); }
} testDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierArchiving;

static class TestDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierOutputParameters() : CxxTest::RealTestDescription( Tests_TestSimpleTargetAreaModifier, suiteDescription_TestSimpleTargetAreaModifier, 345, "TestSimpleTargetAreaModifierOutputParameters" ) {}
 void runTest() { suite_TestSimpleTargetAreaModifier.TestSimpleTargetAreaModifierOutputParameters(); }
} testDescription_TestSimpleTargetAreaModifier_TestSimpleTargetAreaModifierOutputParameters;

#include <cxxtest/Root.cpp>
