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
#include "lung/test/airway_generation/TestMultiLobeAirwayGenerator.hpp"

static TestMultiLobeAirwayGenerator suite_TestMultiLobeAirwayGenerator;

static CxxTest::List Tests_TestMultiLobeAirwayGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMultiLobeAirwayGenerator( "lung/test/airway_generation/TestMultiLobeAirwayGenerator.hpp", 63, "TestMultiLobeAirwayGenerator", suite_TestMultiLobeAirwayGenerator, Tests_TestMultiLobeAirwayGenerator );

static class TestDescription_TestMultiLobeAirwayGenerator_TestAddLobes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMultiLobeAirwayGenerator_TestAddLobes() : CxxTest::RealTestDescription( Tests_TestMultiLobeAirwayGenerator, suiteDescription_TestMultiLobeAirwayGenerator, 66, "TestAddLobes" ) {}
 void runTest() { suite_TestMultiLobeAirwayGenerator.TestAddLobes(); }
} testDescription_TestMultiLobeAirwayGenerator_TestAddLobes;

static class TestDescription_TestMultiLobeAirwayGenerator_TestAssignGrowthApicesAndDistributePoints : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMultiLobeAirwayGenerator_TestAssignGrowthApicesAndDistributePoints() : CxxTest::RealTestDescription( Tests_TestMultiLobeAirwayGenerator, suiteDescription_TestMultiLobeAirwayGenerator, 87, "TestAssignGrowthApicesAndDistributePoints" ) {}
 void runTest() { suite_TestMultiLobeAirwayGenerator.TestAssignGrowthApicesAndDistributePoints(); }
} testDescription_TestMultiLobeAirwayGenerator_TestAssignGrowthApicesAndDistributePoints;

static class TestDescription_TestMultiLobeAirwayGenerator_TestDistributePointsByVolume : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMultiLobeAirwayGenerator_TestDistributePointsByVolume() : CxxTest::RealTestDescription( Tests_TestMultiLobeAirwayGenerator, suiteDescription_TestMultiLobeAirwayGenerator, 137, "TestDistributePointsByVolume" ) {}
 void runTest() { suite_TestMultiLobeAirwayGenerator.TestDistributePointsByVolume(); }
} testDescription_TestMultiLobeAirwayGenerator_TestDistributePointsByVolume;

static class TestDescription_TestMultiLobeAirwayGenerator_TestGenerate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMultiLobeAirwayGenerator_TestGenerate() : CxxTest::RealTestDescription( Tests_TestMultiLobeAirwayGenerator, suiteDescription_TestMultiLobeAirwayGenerator, 188, "TestGenerate" ) {}
 void runTest() { suite_TestMultiLobeAirwayGenerator.TestGenerate(); }
} testDescription_TestMultiLobeAirwayGenerator_TestGenerate;

static class TestDescription_TestMultiLobeAirwayGenerator_TestDummyClassCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMultiLobeAirwayGenerator_TestDummyClassCoverage() : CxxTest::RealTestDescription( Tests_TestMultiLobeAirwayGenerator, suiteDescription_TestMultiLobeAirwayGenerator, 245, "TestDummyClassCoverage" ) {}
 void runTest() { suite_TestMultiLobeAirwayGenerator.TestDummyClassCoverage(); }
} testDescription_TestMultiLobeAirwayGenerator_TestDummyClassCoverage;

#include <cxxtest/Root.cpp>
