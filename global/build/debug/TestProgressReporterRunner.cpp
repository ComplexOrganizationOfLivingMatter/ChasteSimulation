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
#include "global/test/TestProgressReporter.hpp"

static TestProgressReporter suite_TestProgressReporter;

static CxxTest::List Tests_TestProgressReporter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestProgressReporter( "global/test/TestProgressReporter.hpp", 45, "TestProgressReporter", suite_TestProgressReporter, Tests_TestProgressReporter );

static class TestDescription_TestProgressReporter_TestBar : public CxxTest::RealTestDescription {
public:
 TestDescription_TestProgressReporter_TestBar() : CxxTest::RealTestDescription( Tests_TestProgressReporter, suiteDescription_TestProgressReporter, 49, "TestBar" ) {}
 void runTest() { suite_TestProgressReporter.TestBar(); }
} testDescription_TestProgressReporter_TestBar;

static class TestDescription_TestProgressReporter_TestBarCleansFilesUpAfterException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestProgressReporter_TestBarCleansFilesUpAfterException() : CxxTest::RealTestDescription( Tests_TestProgressReporter, suiteDescription_TestProgressReporter, 70, "TestBarCleansFilesUpAfterException" ) {}
 void runTest() { suite_TestProgressReporter.TestBarCleansFilesUpAfterException(); }
} testDescription_TestProgressReporter_TestBarCleansFilesUpAfterException;

#include <cxxtest/Root.cpp>
