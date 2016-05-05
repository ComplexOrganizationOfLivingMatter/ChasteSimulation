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
#include "heart/test/TestHeartFileFinder.hpp"

static TestHeartFileFinder suite_TestHeartFileFinder;

static CxxTest::List Tests_TestHeartFileFinder = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeartFileFinder( "heart/test/TestHeartFileFinder.hpp", 46, "TestHeartFileFinder", suite_TestHeartFileFinder, Tests_TestHeartFileFinder );

static class TestDescription_TestHeartFileFinder_TestHeartFileFinderOpening : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartFileFinder_TestHeartFileFinderOpening() : CxxTest::RealTestDescription( Tests_TestHeartFileFinder, suiteDescription_TestHeartFileFinder, 49, "TestHeartFileFinderOpening" ) {}
 void runTest() { suite_TestHeartFileFinder.TestHeartFileFinderOpening(); }
} testDescription_TestHeartFileFinder_TestHeartFileFinderOpening;

#include <cxxtest/Root.cpp>
