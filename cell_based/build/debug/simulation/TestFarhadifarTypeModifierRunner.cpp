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
#include "cell_based/test/simulation/TestFarhadifarTypeModifier.hpp"

static TestFarhadifarTypeModifier suite_TestFarhadifarTypeModifier;

static CxxTest::List Tests_TestFarhadifarTypeModifier = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFarhadifarTypeModifier( "cell_based/test/simulation/TestFarhadifarTypeModifier.hpp", 63, "TestFarhadifarTypeModifier", suite_TestFarhadifarTypeModifier, Tests_TestFarhadifarTypeModifier );

static class TestDescription_TestFarhadifarTypeModifier_TestSetupSolveException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFarhadifarTypeModifier_TestSetupSolveException() : CxxTest::RealTestDescription( Tests_TestFarhadifarTypeModifier, suiteDescription_TestFarhadifarTypeModifier, 66, "TestSetupSolveException" ) {}
 void runTest() { suite_TestFarhadifarTypeModifier.TestSetupSolveException(); }
} testDescription_TestFarhadifarTypeModifier_TestSetupSolveException;

static class TestDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierMethods() : CxxTest::RealTestDescription( Tests_TestFarhadifarTypeModifier, suiteDescription_TestFarhadifarTypeModifier, 90, "TestFarhadifarTypeModifierMethods" ) {}
 void runTest() { suite_TestFarhadifarTypeModifier.TestFarhadifarTypeModifierMethods(); }
} testDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierMethods;

static class TestDescription_TestFarhadifarTypeModifier_TestTargetAreaOfDaughterCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFarhadifarTypeModifier_TestTargetAreaOfDaughterCells() : CxxTest::RealTestDescription( Tests_TestFarhadifarTypeModifier, suiteDescription_TestFarhadifarTypeModifier, 218, "TestTargetAreaOfDaughterCells" ) {}
 void runTest() { suite_TestFarhadifarTypeModifier.TestTargetAreaOfDaughterCells(); }
} testDescription_TestFarhadifarTypeModifier_TestTargetAreaOfDaughterCells;

static class TestDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierArchiving() : CxxTest::RealTestDescription( Tests_TestFarhadifarTypeModifier, suiteDescription_TestFarhadifarTypeModifier, 306, "TestFarhadifarTypeModifierArchiving" ) {}
 void runTest() { suite_TestFarhadifarTypeModifier.TestFarhadifarTypeModifierArchiving(); }
} testDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierArchiving;

static class TestDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierOutputParameters() : CxxTest::RealTestDescription( Tests_TestFarhadifarTypeModifier, suiteDescription_TestFarhadifarTypeModifier, 345, "TestFarhadifarTypeModifierOutputParameters" ) {}
 void runTest() { suite_TestFarhadifarTypeModifier.TestFarhadifarTypeModifierOutputParameters(); }
} testDescription_TestFarhadifarTypeModifier_TestFarhadifarTypeModifierOutputParameters;

#include <cxxtest/Root.cpp>
