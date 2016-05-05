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
#include "heart/test/ionicmodels/TestGeneralizedRushLarsen.hpp"

static TestGeneralizedRushLarsen suite_TestGeneralizedRushLarsen;

static CxxTest::List Tests_TestGeneralizedRushLarsen = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGeneralizedRushLarsen( "heart/test/ionicmodels/TestGeneralizedRushLarsen.hpp", 77, "TestGeneralizedRushLarsen", suite_TestGeneralizedRushLarsen, Tests_TestGeneralizedRushLarsen );

static class TestDescription_TestGeneralizedRushLarsen_TestLuoRudyGeneralizedRushLarsenMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGeneralizedRushLarsen_TestLuoRudyGeneralizedRushLarsenMethod() : CxxTest::RealTestDescription( Tests_TestGeneralizedRushLarsen, suiteDescription_TestGeneralizedRushLarsen, 133, "TestLuoRudyGeneralizedRushLarsenMethod" ) {}
 void runTest() { suite_TestGeneralizedRushLarsen.TestLuoRudyGeneralizedRushLarsenMethod(); }
} testDescription_TestGeneralizedRushLarsen_TestLuoRudyGeneralizedRushLarsenMethod;

static class TestDescription_TestGeneralizedRushLarsen_TestLuoRudyGeneralizedRushLarsenMethod2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGeneralizedRushLarsen_TestLuoRudyGeneralizedRushLarsenMethod2() : CxxTest::RealTestDescription( Tests_TestGeneralizedRushLarsen, suiteDescription_TestGeneralizedRushLarsen, 255, "TestLuoRudyGeneralizedRushLarsenMethod2" ) {}
 void runTest() { suite_TestGeneralizedRushLarsen.TestLuoRudyGeneralizedRushLarsenMethod2(); }
} testDescription_TestGeneralizedRushLarsen_TestLuoRudyGeneralizedRushLarsenMethod2;

#include <cxxtest/Root.cpp>
