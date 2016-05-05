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
#include "global/test/TestWritingTestsTutorial.hpp"

static TestWritingTestsTutorial suite_TestWritingTestsTutorial;

static CxxTest::List Tests_TestWritingTestsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestWritingTestsTutorial( "global/test/TestWritingTestsTutorial.hpp", 63, "TestWritingTestsTutorial", suite_TestWritingTestsTutorial, Tests_TestWritingTestsTutorial );

static class TestDescription_TestWritingTestsTutorial_TestOnePlusOneEqualsTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWritingTestsTutorial_TestOnePlusOneEqualsTwo() : CxxTest::RealTestDescription( Tests_TestWritingTestsTutorial, suiteDescription_TestWritingTestsTutorial, 69, "TestOnePlusOneEqualsTwo" ) {}
 void runTest() { suite_TestWritingTestsTutorial.TestOnePlusOneEqualsTwo(); }
} testDescription_TestWritingTestsTutorial_TestOnePlusOneEqualsTwo;

static class TestDescription_TestWritingTestsTutorial_TestSomeOtherStuff : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWritingTestsTutorial_TestSomeOtherStuff() : CxxTest::RealTestDescription( Tests_TestWritingTestsTutorial, suiteDescription_TestWritingTestsTutorial, 89, "TestSomeOtherStuff" ) {}
 void runTest() { suite_TestWritingTestsTutorial.TestSomeOtherStuff(); }
} testDescription_TestWritingTestsTutorial_TestSomeOtherStuff;

#include <cxxtest/Root.cpp>
