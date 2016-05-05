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
#include "global/test/TestChasteBuildInfo.hpp"

static TestChasteBuildInfo suite_TestChasteBuildInfo;

static CxxTest::List Tests_TestChasteBuildInfo = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestChasteBuildInfo( "global/test/TestChasteBuildInfo.hpp", 48, "TestChasteBuildInfo", suite_TestChasteBuildInfo, Tests_TestChasteBuildInfo );

static class TestDescription_TestChasteBuildInfo_TestShowInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChasteBuildInfo_TestShowInfo() : CxxTest::RealTestDescription( Tests_TestChasteBuildInfo, suiteDescription_TestChasteBuildInfo, 51, "TestShowInfo" ) {}
 void runTest() { suite_TestChasteBuildInfo.TestShowInfo(); }
} testDescription_TestChasteBuildInfo_TestShowInfo;

#include <cxxtest/Root.cpp>
