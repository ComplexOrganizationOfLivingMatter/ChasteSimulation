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
#include "continuum_mechanics/test/TestProblemDefinitions.hpp"

static TestProblemDefinitions suite_TestProblemDefinitions;

static CxxTest::List Tests_TestProblemDefinitions = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestProblemDefinitions( "continuum_mechanics/test/TestProblemDefinitions.hpp", 86, "TestProblemDefinitions", suite_TestProblemDefinitions, Tests_TestProblemDefinitions );

static class TestDescription_TestProblemDefinitions_TestContinuumMechanicsProblemDefinition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestProblemDefinitions_TestContinuumMechanicsProblemDefinition() : CxxTest::RealTestDescription( Tests_TestProblemDefinitions, suiteDescription_TestProblemDefinitions, 91, "TestContinuumMechanicsProblemDefinition" ) {}
 void runTest() { suite_TestProblemDefinitions.TestContinuumMechanicsProblemDefinition(); }
} testDescription_TestProblemDefinitions_TestContinuumMechanicsProblemDefinition;

static class TestDescription_TestProblemDefinitions_TestSolidMechanicsProblemDefinition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestProblemDefinitions_TestSolidMechanicsProblemDefinition() : CxxTest::RealTestDescription( Tests_TestProblemDefinitions, suiteDescription_TestProblemDefinitions, 217, "TestSolidMechanicsProblemDefinition" ) {}
 void runTest() { suite_TestProblemDefinitions.TestSolidMechanicsProblemDefinition(); }
} testDescription_TestProblemDefinitions_TestSolidMechanicsProblemDefinition;

static class TestDescription_TestProblemDefinitions_TestStokesFlowProblemDefinition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestProblemDefinitions_TestStokesFlowProblemDefinition() : CxxTest::RealTestDescription( Tests_TestProblemDefinitions, suiteDescription_TestProblemDefinitions, 396, "TestStokesFlowProblemDefinition" ) {}
 void runTest() { suite_TestProblemDefinitions.TestStokesFlowProblemDefinition(); }
} testDescription_TestProblemDefinitions_TestStokesFlowProblemDefinition;

#include <cxxtest/Root.cpp>
