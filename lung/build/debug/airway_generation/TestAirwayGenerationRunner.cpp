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
#include "lung/test/airway_generation/TestAirwayGeneration.hpp"

static TestAirwayGeneration suite_TestAirwayGeneration;

static CxxTest::List Tests_TestAirwayGeneration = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAirwayGeneration( "lung/test/airway_generation/TestAirwayGeneration.hpp", 57, "TestAirwayGeneration", suite_TestAirwayGeneration, Tests_TestAirwayGeneration );

static class TestDescription_TestAirwayGeneration_TestGeneration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGeneration_TestGeneration() : CxxTest::RealTestDescription( Tests_TestAirwayGeneration, suiteDescription_TestAirwayGeneration, 60, "TestGeneration" ) {}
 void runTest() { suite_TestAirwayGeneration.TestGeneration(); }
} testDescription_TestAirwayGeneration_TestGeneration;

static class TestDescription_TestAirwayGeneration_TestDummyClassCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGeneration_TestDummyClassCoverage() : CxxTest::RealTestDescription( Tests_TestAirwayGeneration, suiteDescription_TestAirwayGeneration, 143, "TestDummyClassCoverage" ) {}
 void runTest() { suite_TestAirwayGeneration.TestDummyClassCoverage(); }
} testDescription_TestAirwayGeneration_TestDummyClassCoverage;

#include <cxxtest/Root.cpp>
