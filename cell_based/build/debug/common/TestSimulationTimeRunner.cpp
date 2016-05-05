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
#include "cell_based/test/common/TestSimulationTime.hpp"

static TestSimulationTime suite_TestSimulationTime;

static CxxTest::List Tests_TestSimulationTime = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimulationTime( "cell_based/test/common/TestSimulationTime.hpp", 51, "TestSimulationTime", suite_TestSimulationTime, Tests_TestSimulationTime );

static class TestDescription_TestSimulationTime_TestTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimulationTime_TestTime() : CxxTest::RealTestDescription( Tests_TestSimulationTime, suiteDescription_TestSimulationTime, 54, "TestTime" ) {}
 void runTest() { suite_TestSimulationTime.TestTime(); }
} testDescription_TestSimulationTime_TestTime;

static class TestDescription_TestSimulationTime_TestSimulationTestDoesNotRunOver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimulationTime_TestSimulationTestDoesNotRunOver() : CxxTest::RealTestDescription( Tests_TestSimulationTime, suiteDescription_TestSimulationTime, 122, "TestSimulationTestDoesNotRunOver" ) {}
 void runTest() { suite_TestSimulationTime.TestSimulationTestDoesNotRunOver(); }
} testDescription_TestSimulationTime_TestSimulationTestDoesNotRunOver;

static class TestDescription_TestSimulationTime_TestResetTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimulationTime_TestResetTime() : CxxTest::RealTestDescription( Tests_TestSimulationTime, suiteDescription_TestSimulationTime, 143, "TestResetTime" ) {}
 void runTest() { suite_TestSimulationTime.TestResetTime(); }
} testDescription_TestSimulationTime_TestResetTime;

static class TestDescription_TestSimulationTime_TestLoopedStepping : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimulationTime_TestLoopedStepping() : CxxTest::RealTestDescription( Tests_TestSimulationTime, suiteDescription_TestSimulationTime, 177, "TestLoopedStepping" ) {}
 void runTest() { suite_TestSimulationTime.TestLoopedStepping(); }
} testDescription_TestSimulationTime_TestLoopedStepping;

static class TestDescription_TestSimulationTime_TestArchiveSimulationTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimulationTime_TestArchiveSimulationTime() : CxxTest::RealTestDescription( Tests_TestSimulationTime, suiteDescription_TestSimulationTime, 203, "TestArchiveSimulationTime" ) {}
 void runTest() { suite_TestSimulationTime.TestArchiveSimulationTime(); }
} testDescription_TestSimulationTime_TestArchiveSimulationTime;

#include <cxxtest/Root.cpp>
