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
#include "global/test/TestHelloWorld.hpp"

static TestHelloWorld suite_TestHelloWorld;

static CxxTest::List Tests_TestHelloWorld = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHelloWorld( "global/test/TestHelloWorld.hpp", 45, "TestHelloWorld", suite_TestHelloWorld, Tests_TestHelloWorld );

static class TestDescription_TestHelloWorld_TestPrintHelloWorld : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHelloWorld_TestPrintHelloWorld() : CxxTest::RealTestDescription( Tests_TestHelloWorld, suiteDescription_TestHelloWorld, 48, "TestPrintHelloWorld" ) {}
 void runTest() { suite_TestHelloWorld.TestPrintHelloWorld(); }
} testDescription_TestHelloWorld_TestPrintHelloWorld;

#include <cxxtest/Root.cpp>
