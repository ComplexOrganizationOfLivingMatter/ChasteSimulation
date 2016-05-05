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
#include "crypt/test/statistics/TestCryptProjectionStatistics.hpp"

static TestCryptProjectionStatistics suite_TestCryptProjectionStatistics;

static CxxTest::List Tests_TestCryptProjectionStatistics = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCryptProjectionStatistics( "crypt/test/statistics/TestCryptProjectionStatistics.hpp", 57, "TestCryptProjectionStatistics", suite_TestCryptProjectionStatistics, Tests_TestCryptProjectionStatistics );

static class TestDescription_TestCryptProjectionStatistics_TestGetSection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptProjectionStatistics_TestGetSection() : CxxTest::RealTestDescription( Tests_TestCryptProjectionStatistics, suiteDescription_TestCryptProjectionStatistics, 62, "TestGetSection" ) {}
 void runTest() { suite_TestCryptProjectionStatistics.TestGetSection(); }
} testDescription_TestCryptProjectionStatistics_TestGetSection;

#include <cxxtest/Root.cpp>
