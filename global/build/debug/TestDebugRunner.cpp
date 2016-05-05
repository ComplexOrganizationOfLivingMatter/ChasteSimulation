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
#include "global/test/TestDebug.hpp"

static TestDebug suite_TestDebug;

static CxxTest::List Tests_TestDebug = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDebug( "global/test/TestDebug.hpp", 45, "TestDebug", suite_TestDebug, Tests_TestDebug );

static class TestDescription_TestDebug_TestDebugMacros : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDebug_TestDebugMacros() : CxxTest::RealTestDescription( Tests_TestDebug, suiteDescription_TestDebug, 56, "TestDebugMacros" ) {}
 void runTest() { suite_TestDebug.TestDebugMacros(); }
} testDescription_TestDebug_TestDebugMacros;

#include <cxxtest/Root.cpp>
