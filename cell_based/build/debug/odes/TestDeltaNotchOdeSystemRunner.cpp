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
#include "cell_based/test/odes/TestDeltaNotchOdeSystem.hpp"

static TestDeltaNotchOdeSystem suite_TestDeltaNotchOdeSystem;

static CxxTest::List Tests_TestDeltaNotchOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDeltaNotchOdeSystem( "cell_based/test/odes/TestDeltaNotchOdeSystem.hpp", 58, "TestDeltaNotchOdeSystem", suite_TestDeltaNotchOdeSystem, Tests_TestDeltaNotchOdeSystem );

static class TestDescription_TestDeltaNotchOdeSystem_TestDeltaNotchOdeSystemSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchOdeSystem_TestDeltaNotchOdeSystemSetup() : CxxTest::RealTestDescription( Tests_TestDeltaNotchOdeSystem, suiteDescription_TestDeltaNotchOdeSystem, 62, "TestDeltaNotchOdeSystemSetup" ) {}
 void runTest() { suite_TestDeltaNotchOdeSystem.TestDeltaNotchOdeSystemSetup(); }
} testDescription_TestDeltaNotchOdeSystem_TestDeltaNotchOdeSystemSetup;

static class TestDescription_TestDeltaNotchOdeSystem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchOdeSystem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestDeltaNotchOdeSystem, suiteDescription_TestDeltaNotchOdeSystem, 94, "TestArchiving" ) {}
 void runTest() { suite_TestDeltaNotchOdeSystem.TestArchiving(); }
} testDescription_TestDeltaNotchOdeSystem_TestArchiving;

static class TestDescription_TestDeltaNotchOdeSystem_TestSetStateVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDeltaNotchOdeSystem_TestSetStateVariables() : CxxTest::RealTestDescription( Tests_TestDeltaNotchOdeSystem, suiteDescription_TestDeltaNotchOdeSystem, 161, "TestSetStateVariables" ) {}
 void runTest() { suite_TestDeltaNotchOdeSystem.TestSetStateVariables(); }
} testDescription_TestDeltaNotchOdeSystem_TestSetStateVariables;

#include <cxxtest/Root.cpp>
