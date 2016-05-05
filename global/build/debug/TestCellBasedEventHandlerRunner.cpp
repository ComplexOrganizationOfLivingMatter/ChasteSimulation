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
#include "global/test/TestCellBasedEventHandler.hpp"

static TestCellBasedEventHandler suite_TestCellBasedEventHandler;

static CxxTest::List Tests_TestCellBasedEventHandler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellBasedEventHandler( "global/test/TestCellBasedEventHandler.hpp", 45, "TestCellBasedEventHandler", suite_TestCellBasedEventHandler, Tests_TestCellBasedEventHandler );

static class TestDescription_TestCellBasedEventHandler_TestEvents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedEventHandler_TestEvents() : CxxTest::RealTestDescription( Tests_TestCellBasedEventHandler, suiteDescription_TestCellBasedEventHandler, 49, "TestEvents" ) {}
 void runTest() { suite_TestCellBasedEventHandler.TestEvents(); }
} testDescription_TestCellBasedEventHandler_TestEvents;

#include <cxxtest/Root.cpp>
