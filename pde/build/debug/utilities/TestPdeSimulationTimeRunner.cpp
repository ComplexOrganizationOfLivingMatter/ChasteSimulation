/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "pde/test/utilities/TestPdeSimulationTime.hpp"

static TestPdeSimulationTime suite_TestPdeSimulationTime;

static CxxTest::List Tests_TestPdeSimulationTime = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPdeSimulationTime( "pde/test/utilities/TestPdeSimulationTime.hpp", 43, "TestPdeSimulationTime", suite_TestPdeSimulationTime, Tests_TestPdeSimulationTime );

static class TestDescription_TestPdeSimulationTime_TestTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeSimulationTime_TestTime() : CxxTest::RealTestDescription( Tests_TestPdeSimulationTime, suiteDescription_TestPdeSimulationTime, 46, "TestTime" ) {}
 void runTest() { suite_TestPdeSimulationTime.TestTime(); }
} testDescription_TestPdeSimulationTime_TestTime;

static class TestDescription_TestPdeSimulationTime_TestAssertionWithNonRationalTimeStep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeSimulationTime_TestAssertionWithNonRationalTimeStep() : CxxTest::RealTestDescription( Tests_TestPdeSimulationTime, suiteDescription_TestPdeSimulationTime, 57, "TestAssertionWithNonRationalTimeStep" ) {}
 void runTest() { suite_TestPdeSimulationTime.TestAssertionWithNonRationalTimeStep(); }
} testDescription_TestPdeSimulationTime_TestAssertionWithNonRationalTimeStep;

#include <cxxtest/Root.cpp>
