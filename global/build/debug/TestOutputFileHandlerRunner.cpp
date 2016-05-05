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
#include "global/test/TestOutputFileHandler.hpp"

static TestOutputFileHandler suite_TestOutputFileHandler;

static CxxTest::List Tests_TestOutputFileHandler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOutputFileHandler( "global/test/TestOutputFileHandler.hpp", 53, "TestOutputFileHandler", suite_TestOutputFileHandler, Tests_TestOutputFileHandler );

static class TestDescription_TestOutputFileHandler_TestHandler : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOutputFileHandler_TestHandler() : CxxTest::RealTestDescription( Tests_TestOutputFileHandler, suiteDescription_TestOutputFileHandler, 57, "TestHandler" ) {}
 void runTest() { suite_TestOutputFileHandler.TestHandler(); }
} testDescription_TestOutputFileHandler_TestHandler;

static class TestDescription_TestOutputFileHandler_TestWeCanOnlyDeleteFoldersWeHaveMadeOurselves : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOutputFileHandler_TestWeCanOnlyDeleteFoldersWeHaveMadeOurselves() : CxxTest::RealTestDescription( Tests_TestOutputFileHandler, suiteDescription_TestOutputFileHandler, 218, "TestWeCanOnlyDeleteFoldersWeHaveMadeOurselves" ) {}
 void runTest() { suite_TestOutputFileHandler.TestWeCanOnlyDeleteFoldersWeHaveMadeOurselves(); }
} testDescription_TestOutputFileHandler_TestWeCanOnlyDeleteFoldersWeHaveMadeOurselves;

#include <cxxtest/Root.cpp>
