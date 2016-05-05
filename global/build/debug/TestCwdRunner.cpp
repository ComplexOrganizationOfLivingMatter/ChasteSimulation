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
#include "global/test/TestCwd.hpp"

static TestCwd suite_TestCwd;

static CxxTest::List Tests_TestCwd = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCwd( "global/test/TestCwd.hpp", 55, "TestCwd", suite_TestCwd, Tests_TestCwd );

static class TestDescription_TestCwd_TestShowCwd : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCwd_TestShowCwd() : CxxTest::RealTestDescription( Tests_TestCwd, suiteDescription_TestCwd, 58, "TestShowCwd" ) {}
 void runTest() { suite_TestCwd.TestShowCwd(); }
} testDescription_TestCwd_TestShowCwd;

static class TestDescription_TestCwd_TestDivideOneByZero : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCwd_TestDivideOneByZero() : CxxTest::RealTestDescription( Tests_TestCwd, suiteDescription_TestCwd, 66, "TestDivideOneByZero" ) {}
 void runTest() { suite_TestCwd.TestDivideOneByZero(); }
} testDescription_TestCwd_TestDivideOneByZero;

static class TestDescription_TestCwd_TestDivideZeroByZero : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCwd_TestDivideZeroByZero() : CxxTest::RealTestDescription( Tests_TestCwd, suiteDescription_TestCwd, 84, "TestDivideZeroByZero" ) {}
 void runTest() { suite_TestCwd.TestDivideZeroByZero(); }
} testDescription_TestCwd_TestDivideZeroByZero;

#include <cxxtest/Root.cpp>
