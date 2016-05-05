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
#include "heart/test/TestHeartRegionCodes.hpp"

static TestHeartRegionCodes suite_TestHeartRegionCodes;

static CxxTest::List Tests_TestHeartRegionCodes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeartRegionCodes( "heart/test/TestHeartRegionCodes.hpp", 41, "TestHeartRegionCodes", suite_TestHeartRegionCodes, Tests_TestHeartRegionCodes );

static class TestDescription_TestHeartRegionCodes_TestRegions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartRegionCodes_TestRegions() : CxxTest::RealTestDescription( Tests_TestHeartRegionCodes, suiteDescription_TestHeartRegionCodes, 45, "TestRegions" ) {}
 void runTest() { suite_TestHeartRegionCodes.TestRegions(); }
} testDescription_TestHeartRegionCodes_TestRegions;

static class TestDescription_TestHeartRegionCodes_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartRegionCodes_TestExceptions() : CxxTest::RealTestDescription( Tests_TestHeartRegionCodes, suiteDescription_TestHeartRegionCodes, 85, "TestExceptions" ) {}
 void runTest() { suite_TestHeartRegionCodes.TestExceptions(); }
} testDescription_TestHeartRegionCodes_TestExceptions;

#include <cxxtest/Root.cpp>
