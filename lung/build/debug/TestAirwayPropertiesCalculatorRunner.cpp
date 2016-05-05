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
#include "lung/test/TestAirwayPropertiesCalculator.hpp"

static TestAirwayPropertiesCalculator suite_TestAirwayPropertiesCalculator;

static CxxTest::List Tests_TestAirwayPropertiesCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAirwayPropertiesCalculator( "lung/test/TestAirwayPropertiesCalculator.hpp", 48, "TestAirwayPropertiesCalculator", suite_TestAirwayPropertiesCalculator, Tests_TestAirwayPropertiesCalculator );

static class TestDescription_TestAirwayPropertiesCalculator_TestBranchProperties : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayPropertiesCalculator_TestBranchProperties() : CxxTest::RealTestDescription( Tests_TestAirwayPropertiesCalculator, suiteDescription_TestAirwayPropertiesCalculator, 53, "TestBranchProperties" ) {}
 void runTest() { suite_TestAirwayPropertiesCalculator.TestBranchProperties(); }
} testDescription_TestAirwayPropertiesCalculator_TestBranchProperties;

static class TestDescription_TestAirwayPropertiesCalculator_TestOrders : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayPropertiesCalculator_TestOrders() : CxxTest::RealTestDescription( Tests_TestAirwayPropertiesCalculator, suiteDescription_TestAirwayPropertiesCalculator, 97, "TestOrders" ) {}
 void runTest() { suite_TestAirwayPropertiesCalculator.TestOrders(); }
} testDescription_TestAirwayPropertiesCalculator_TestOrders;

static class TestDescription_TestAirwayPropertiesCalculator_TestSubtreeProperties : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayPropertiesCalculator_TestSubtreeProperties() : CxxTest::RealTestDescription( Tests_TestAirwayPropertiesCalculator, suiteDescription_TestAirwayPropertiesCalculator, 129, "TestSubtreeProperties" ) {}
 void runTest() { suite_TestAirwayPropertiesCalculator.TestSubtreeProperties(); }
} testDescription_TestAirwayPropertiesCalculator_TestSubtreeProperties;

static class TestDescription_TestAirwayPropertiesCalculator_TestUpstreamProperties : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayPropertiesCalculator_TestUpstreamProperties() : CxxTest::RealTestDescription( Tests_TestAirwayPropertiesCalculator, suiteDescription_TestAirwayPropertiesCalculator, 184, "TestUpstreamProperties" ) {}
 void runTest() { suite_TestAirwayPropertiesCalculator.TestUpstreamProperties(); }
} testDescription_TestAirwayPropertiesCalculator_TestUpstreamProperties;

#include <cxxtest/Root.cpp>
