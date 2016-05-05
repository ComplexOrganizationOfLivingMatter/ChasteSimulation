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
#include "global/test/TestTimer.hpp"

static TestTimer suite_TestTimer;

static CxxTest::List Tests_TestTimer = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTimer( "global/test/TestTimer.hpp", 43, "TestTimer", suite_TestTimer, Tests_TestTimer );

static class TestDescription_TestTimer_TestTheTimer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimer_TestTheTimer() : CxxTest::RealTestDescription( Tests_TestTimer, suiteDescription_TestTimer, 48, "TestTheTimer" ) {}
 void runTest() { suite_TestTimer.TestTheTimer(); }
} testDescription_TestTimer_TestTheTimer;

#include <cxxtest/Root.cpp>
