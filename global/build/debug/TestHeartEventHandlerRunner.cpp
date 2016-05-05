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
#include "global/test/TestHeartEventHandler.hpp"

static TestHeartEventHandler suite_TestHeartEventHandler;

static CxxTest::List Tests_TestHeartEventHandler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeartEventHandler( "global/test/TestHeartEventHandler.hpp", 43, "TestHeartEventHandler", suite_TestHeartEventHandler, Tests_TestHeartEventHandler );

static class TestDescription_TestHeartEventHandler_TestEvents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartEventHandler_TestEvents() : CxxTest::RealTestDescription( Tests_TestHeartEventHandler, suiteDescription_TestHeartEventHandler, 47, "TestEvents" ) {}
 void runTest() { suite_TestHeartEventHandler.TestEvents(); }
} testDescription_TestHeartEventHandler_TestEvents;

static class TestDescription_TestHeartEventHandler_TestParallelPrinting : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartEventHandler_TestParallelPrinting() : CxxTest::RealTestDescription( Tests_TestHeartEventHandler, suiteDescription_TestHeartEventHandler, 73, "TestParallelPrinting" ) {}
 void runTest() { suite_TestHeartEventHandler.TestParallelPrinting(); }
} testDescription_TestHeartEventHandler_TestParallelPrinting;

static class TestDescription_TestHeartEventHandler_TestEventExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartEventHandler_TestEventExceptions() : CxxTest::RealTestDescription( Tests_TestHeartEventHandler, suiteDescription_TestHeartEventHandler, 102, "TestEventExceptions" ) {}
 void runTest() { suite_TestHeartEventHandler.TestEventExceptions(); }
} testDescription_TestHeartEventHandler_TestEventExceptions;

#include <cxxtest/Root.cpp>
