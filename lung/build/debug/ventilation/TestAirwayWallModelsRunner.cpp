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
#include "lung/test/ventilation/TestAirwayWallModels.hpp"

static TestAirwayWallModels suite_TestAirwayWallModels;

static CxxTest::List Tests_TestAirwayWallModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAirwayWallModels( "lung/test/ventilation/TestAirwayWallModels.hpp", 51, "TestAirwayWallModels", suite_TestAirwayWallModels, Tests_TestAirwayWallModels );

static class TestDescription_TestAirwayWallModels_TestLambertAirwayWallAndFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayWallModels_TestLambertAirwayWallAndFactory() : CxxTest::RealTestDescription( Tests_TestAirwayWallModels, suiteDescription_TestAirwayWallModels, 55, "TestLambertAirwayWallAndFactory" ) {}
 void runTest() { suite_TestAirwayWallModels.TestLambertAirwayWallAndFactory(); }
} testDescription_TestAirwayWallModels_TestLambertAirwayWallAndFactory;

static class TestDescription_TestAirwayWallModels_TestLaPradAirwayWallAndFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayWallModels_TestLaPradAirwayWallAndFactory() : CxxTest::RealTestDescription( Tests_TestAirwayWallModels, suiteDescription_TestAirwayWallModels, 179, "TestLaPradAirwayWallAndFactory" ) {}
 void runTest() { suite_TestAirwayWallModels.TestLaPradAirwayWallAndFactory(); }
} testDescription_TestAirwayWallModels_TestLaPradAirwayWallAndFactory;

#include <cxxtest/Root.cpp>
