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
#include "global/test/TestException.hpp"

static TestException suite_TestException;

static CxxTest::List Tests_TestException = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestException( "global/test/TestException.hpp", 43, "TestException", suite_TestException, Tests_TestException );

static class TestDescription_TestException_TestGetMessage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestException_TestGetMessage() : CxxTest::RealTestDescription( Tests_TestException, suiteDescription_TestException, 47, "TestGetMessage" ) {}
 void runTest() { suite_TestException.TestGetMessage(); }
} testDescription_TestException_TestGetMessage;

static class TestDescription_TestException_TestCheckStreamingException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestException_TestCheckStreamingException() : CxxTest::RealTestDescription( Tests_TestException, suiteDescription_TestException, 76, "TestCheckStreamingException" ) {}
 void runTest() { suite_TestException.TestCheckStreamingException(); }
} testDescription_TestException_TestCheckStreamingException;

static class TestDescription_TestException_TestCheckMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestException_TestCheckMethods() : CxxTest::RealTestDescription( Tests_TestException, suiteDescription_TestException, 89, "TestCheckMethods" ) {}
 void runTest() { suite_TestException.TestCheckMethods(); }
} testDescription_TestException_TestCheckMethods;

#include <cxxtest/Root.cpp>
