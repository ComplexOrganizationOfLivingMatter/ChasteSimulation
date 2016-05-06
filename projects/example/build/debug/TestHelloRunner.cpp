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
#include "projects/example/test/TestHello.hpp"

static TestHello suite_TestHello;

static CxxTest::List Tests_TestHello = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHello( "projects/example/test/TestHello.hpp", 63, "TestHello", suite_TestHello, Tests_TestHello );

static class TestDescription_TestHello_TestHelloClass : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHello_TestHelloClass() : CxxTest::RealTestDescription( Tests_TestHello, suiteDescription_TestHello, 66, "TestHelloClass" ) {}
 void runTest() { suite_TestHello.TestHelloClass(); }
} testDescription_TestHello_TestHelloClass;

#include <cxxtest/Root.cpp>
