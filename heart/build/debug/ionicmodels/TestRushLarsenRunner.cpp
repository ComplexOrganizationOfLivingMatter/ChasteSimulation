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
#include "heart/test/ionicmodels/TestRushLarsen.hpp"

static TestRushLarsen suite_TestRushLarsen;

static CxxTest::List Tests_TestRushLarsen = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRushLarsen( "heart/test/ionicmodels/TestRushLarsen.hpp", 63, "TestRushLarsen", suite_TestRushLarsen, Tests_TestRushLarsen );

static class TestDescription_TestRushLarsen_TestLuoRudyRushLarsenMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRushLarsen_TestLuoRudyRushLarsenMethod() : CxxTest::RealTestDescription( Tests_TestRushLarsen, suiteDescription_TestRushLarsen, 109, "TestLuoRudyRushLarsenMethod" ) {}
 void runTest() { suite_TestRushLarsen.TestLuoRudyRushLarsenMethod(); }
} testDescription_TestRushLarsen_TestLuoRudyRushLarsenMethod;

#include <cxxtest/Root.cpp>
