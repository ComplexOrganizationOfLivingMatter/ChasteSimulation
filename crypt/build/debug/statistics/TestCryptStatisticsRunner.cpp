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
#include "crypt/test/statistics/TestCryptStatistics.hpp"

static TestCryptStatistics suite_TestCryptStatistics;

static CxxTest::List Tests_TestCryptStatistics = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCryptStatistics( "crypt/test/statistics/TestCryptStatistics.hpp", 67, "TestCryptStatistics", suite_TestCryptStatistics, Tests_TestCryptStatistics );

static class TestDescription_TestCryptStatistics_TestGetSection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptStatistics_TestGetSection() : CxxTest::RealTestDescription( Tests_TestCryptStatistics, suiteDescription_TestCryptStatistics, 84, "TestGetSection" ) {}
 void runTest() { suite_TestCryptStatistics.TestGetSection(); }
} testDescription_TestCryptStatistics_TestGetSection;

static class TestDescription_TestCryptStatistics_TestMakeMeinekeGraphs : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptStatistics_TestMakeMeinekeGraphs() : CxxTest::RealTestDescription( Tests_TestCryptStatistics, suiteDescription_TestCryptStatistics, 172, "TestMakeMeinekeGraphs" ) {}
 void runTest() { suite_TestCryptStatistics.TestMakeMeinekeGraphs(); }
} testDescription_TestCryptStatistics_TestMakeMeinekeGraphs;

static class TestDescription_TestCryptStatistics_TestMultipleCryptSimulations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptStatistics_TestMultipleCryptSimulations() : CxxTest::RealTestDescription( Tests_TestCryptStatistics, suiteDescription_TestCryptStatistics, 343, "TestMultipleCryptSimulations" ) {}
 void runTest() { suite_TestCryptStatistics.TestMultipleCryptSimulations(); }
} testDescription_TestCryptStatistics_TestMultipleCryptSimulations;

#include <cxxtest/Root.cpp>
