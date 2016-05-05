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
#include "global/test/TestGenericEventHandler.hpp"

static TestGenericEventHandler suite_TestGenericEventHandler;

static CxxTest::List Tests_TestGenericEventHandler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGenericEventHandler( "global/test/TestGenericEventHandler.hpp", 57, "TestGenericEventHandler", suite_TestGenericEventHandler, Tests_TestGenericEventHandler );

static class TestDescription_TestGenericEventHandler_TestEvents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGenericEventHandler_TestEvents() : CxxTest::RealTestDescription( Tests_TestGenericEventHandler, suiteDescription_TestGenericEventHandler, 61, "TestEvents" ) {}
 void runTest() { suite_TestGenericEventHandler.TestEvents(); }
} testDescription_TestGenericEventHandler_TestEvents;

static class TestDescription_TestGenericEventHandler_TestEventExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGenericEventHandler_TestEventExceptions() : CxxTest::RealTestDescription( Tests_TestGenericEventHandler, suiteDescription_TestGenericEventHandler, 84, "TestEventExceptions" ) {}
 void runTest() { suite_TestGenericEventHandler.TestEventExceptions(); }
} testDescription_TestGenericEventHandler_TestEventExceptions;

static class TestDescription_TestGenericEventHandler_TestReset : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGenericEventHandler_TestReset() : CxxTest::RealTestDescription( Tests_TestGenericEventHandler, suiteDescription_TestGenericEventHandler, 101, "TestReset" ) {}
 void runTest() { suite_TestGenericEventHandler.TestReset(); }
} testDescription_TestGenericEventHandler_TestReset;

static class TestDescription_TestGenericEventHandler_TestDisable : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGenericEventHandler_TestDisable() : CxxTest::RealTestDescription( Tests_TestGenericEventHandler, suiteDescription_TestGenericEventHandler, 114, "TestDisable" ) {}
 void runTest() { suite_TestGenericEventHandler.TestDisable(); }
} testDescription_TestGenericEventHandler_TestDisable;

static class TestDescription_TestGenericEventHandler_TestElapsedTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGenericEventHandler_TestElapsedTime() : CxxTest::RealTestDescription( Tests_TestGenericEventHandler, suiteDescription_TestGenericEventHandler, 123, "TestElapsedTime" ) {}
 void runTest() { suite_TestGenericEventHandler.TestElapsedTime(); }
} testDescription_TestGenericEventHandler_TestElapsedTime;

static class TestDescription_TestGenericEventHandler_TestSilentlyCloseEvent : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGenericEventHandler_TestSilentlyCloseEvent() : CxxTest::RealTestDescription( Tests_TestGenericEventHandler, suiteDescription_TestGenericEventHandler, 152, "TestSilentlyCloseEvent" ) {}
 void runTest() { suite_TestGenericEventHandler.TestSilentlyCloseEvent(); }
} testDescription_TestGenericEventHandler_TestSilentlyCloseEvent;

static class TestDescription_TestGenericEventHandler_TestReportPrecision : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGenericEventHandler_TestReportPrecision() : CxxTest::RealTestDescription( Tests_TestGenericEventHandler, suiteDescription_TestGenericEventHandler, 163, "TestReportPrecision" ) {}
 void runTest() { suite_TestGenericEventHandler.TestReportPrecision(); }
} testDescription_TestGenericEventHandler_TestReportPrecision;

#include <cxxtest/Root.cpp>
