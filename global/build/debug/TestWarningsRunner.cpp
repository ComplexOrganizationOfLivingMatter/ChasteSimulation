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
#include "global/test/TestWarnings.hpp"

static TestWarnings suite_TestWarnings;

static CxxTest::List Tests_TestWarnings = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestWarnings( "global/test/TestWarnings.hpp", 48, "TestWarnings", suite_TestWarnings, Tests_TestWarnings );

static class TestDescription_TestWarnings_TestGetMessage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWarnings_TestGetMessage() : CxxTest::RealTestDescription( Tests_TestWarnings, suiteDescription_TestWarnings, 58, "TestGetMessage" ) {}
 void runTest() { suite_TestWarnings.TestGetMessage(); }
} testDescription_TestWarnings_TestGetMessage;

static class TestDescription_TestWarnings_TestWarningsWithLogging : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWarnings_TestWarningsWithLogging() : CxxTest::RealTestDescription( Tests_TestWarnings, suiteDescription_TestWarnings, 71, "TestWarningsWithLogging" ) {}
 void runTest() { suite_TestWarnings.TestWarningsWithLogging(); }
} testDescription_TestWarnings_TestWarningsWithLogging;

static class TestDescription_TestWarnings_TestWarningOnceOnly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWarnings_TestWarningOnceOnly() : CxxTest::RealTestDescription( Tests_TestWarnings, suiteDescription_TestWarnings, 92, "TestWarningOnceOnly" ) {}
 void runTest() { suite_TestWarnings.TestWarningOnceOnly(); }
} testDescription_TestWarnings_TestWarningOnceOnly;

static class TestDescription_TestWarnings_TestPrintWarnings : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWarnings_TestPrintWarnings() : CxxTest::RealTestDescription( Tests_TestWarnings, suiteDescription_TestWarnings, 116, "TestPrintWarnings" ) {}
 void runTest() { suite_TestWarnings.TestPrintWarnings(); }
} testDescription_TestWarnings_TestPrintWarnings;

static class TestDescription_TestWarnings_TestWarningOnlyOnceReset : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWarnings_TestWarningOnlyOnceReset() : CxxTest::RealTestDescription( Tests_TestWarnings, suiteDescription_TestWarnings, 126, "TestWarningOnlyOnceReset" ) {}
 void runTest() { suite_TestWarnings.TestWarningOnlyOnceReset(); }
} testDescription_TestWarnings_TestWarningOnlyOnceReset;

static class TestDescription_TestWarnings_TestLastTestWithWarningsIsNoisy : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWarnings_TestLastTestWithWarningsIsNoisy() : CxxTest::RealTestDescription( Tests_TestWarnings, suiteDescription_TestWarnings, 140, "TestLastTestWithWarningsIsNoisy" ) {}
 void runTest() { suite_TestWarnings.TestLastTestWithWarningsIsNoisy(); }
} testDescription_TestWarnings_TestLastTestWithWarningsIsNoisy;

#include <cxxtest/Root.cpp>
