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
#include "ode/test/TestCombinedOdeSystem.hpp"

static TestCombinedOdeSystem suite_TestCombinedOdeSystem;

static CxxTest::List Tests_TestCombinedOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCombinedOdeSystem( "ode/test/TestCombinedOdeSystem.hpp", 250, "TestCombinedOdeSystem", suite_TestCombinedOdeSystem, Tests_TestCombinedOdeSystem );

static class TestDescription_TestCombinedOdeSystem_TestSimpleCombinedOdeSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCombinedOdeSystem_TestSimpleCombinedOdeSystem() : CxxTest::RealTestDescription( Tests_TestCombinedOdeSystem, suiteDescription_TestCombinedOdeSystem, 254, "TestSimpleCombinedOdeSystem" ) {}
 void runTest() { suite_TestCombinedOdeSystem.TestSimpleCombinedOdeSystem(); }
} testDescription_TestCombinedOdeSystem_TestSimpleCombinedOdeSystem;

static class TestDescription_TestCombinedOdeSystem_TestSimpleSystemWithOrderSwapped : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCombinedOdeSystem_TestSimpleSystemWithOrderSwapped() : CxxTest::RealTestDescription( Tests_TestCombinedOdeSystem, suiteDescription_TestCombinedOdeSystem, 316, "TestSimpleSystemWithOrderSwapped" ) {}
 void runTest() { suite_TestCombinedOdeSystem.TestSimpleSystemWithOrderSwapped(); }
} testDescription_TestCombinedOdeSystem_TestSimpleSystemWithOrderSwapped;

static class TestDescription_TestCombinedOdeSystem_TestWithThreeVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCombinedOdeSystem_TestWithThreeVariables() : CxxTest::RealTestDescription( Tests_TestCombinedOdeSystem, suiteDescription_TestCombinedOdeSystem, 354, "TestWithThreeVariables" ) {}
 void runTest() { suite_TestCombinedOdeSystem.TestWithThreeVariables(); }
} testDescription_TestCombinedOdeSystem_TestWithThreeVariables;

static class TestDescription_TestCombinedOdeSystem_TestWithThreeVariablesTwoSystems : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCombinedOdeSystem_TestWithThreeVariablesTwoSystems() : CxxTest::RealTestDescription( Tests_TestCombinedOdeSystem, suiteDescription_TestCombinedOdeSystem, 425, "TestWithThreeVariablesTwoSystems" ) {}
 void runTest() { suite_TestCombinedOdeSystem.TestWithThreeVariablesTwoSystems(); }
} testDescription_TestCombinedOdeSystem_TestWithThreeVariablesTwoSystems;

#include <cxxtest/Root.cpp>
