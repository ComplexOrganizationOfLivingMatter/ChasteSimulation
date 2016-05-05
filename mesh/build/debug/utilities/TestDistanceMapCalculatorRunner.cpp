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
#include "mesh/test/utilities/TestDistanceMapCalculator.hpp"

static TestDistanceMapCalculator suite_TestDistanceMapCalculator;

static CxxTest::List Tests_TestDistanceMapCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDistanceMapCalculator( "mesh/test/utilities/TestDistanceMapCalculator.hpp", 47, "TestDistanceMapCalculator", suite_TestDistanceMapCalculator, Tests_TestDistanceMapCalculator );

static class TestDescription_TestDistanceMapCalculator_TestDistances1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistanceMapCalculator_TestDistances1D() : CxxTest::RealTestDescription( Tests_TestDistanceMapCalculator, suiteDescription_TestDistanceMapCalculator, 50, "TestDistances1D" ) {}
 void runTest() { suite_TestDistanceMapCalculator.TestDistances1D(); }
} testDescription_TestDistanceMapCalculator_TestDistances1D;

static class TestDescription_TestDistanceMapCalculator_TestDistancesToCorner : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistanceMapCalculator_TestDistancesToCorner() : CxxTest::RealTestDescription( Tests_TestDistanceMapCalculator, suiteDescription_TestDistanceMapCalculator, 100, "TestDistancesToCorner" ) {}
 void runTest() { suite_TestDistanceMapCalculator.TestDistancesToCorner(); }
} testDescription_TestDistanceMapCalculator_TestDistancesToCorner;

static class TestDescription_TestDistanceMapCalculator_TestDistancesToFaceDumb : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistanceMapCalculator_TestDistancesToFaceDumb() : CxxTest::RealTestDescription( Tests_TestDistanceMapCalculator, suiteDescription_TestDistanceMapCalculator, 212, "TestDistancesToFaceDumb" ) {}
 void runTest() { suite_TestDistanceMapCalculator.TestDistancesToFaceDumb(); }
} testDescription_TestDistanceMapCalculator_TestDistancesToFaceDumb;

static class TestDescription_TestDistanceMapCalculator_TestDistancesToFace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistanceMapCalculator_TestDistancesToFace() : CxxTest::RealTestDescription( Tests_TestDistanceMapCalculator, suiteDescription_TestDistanceMapCalculator, 261, "TestDistancesToFace" ) {}
 void runTest() { suite_TestDistanceMapCalculator.TestDistancesToFace(); }
} testDescription_TestDistanceMapCalculator_TestDistancesToFace;

static class TestDescription_TestDistanceMapCalculator_TestDistancesWithEmptySource : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistanceMapCalculator_TestDistancesWithEmptySource() : CxxTest::RealTestDescription( Tests_TestDistanceMapCalculator, suiteDescription_TestDistanceMapCalculator, 308, "TestDistancesWithEmptySource" ) {}
 void runTest() { suite_TestDistanceMapCalculator.TestDistancesWithEmptySource(); }
} testDescription_TestDistanceMapCalculator_TestDistancesWithEmptySource;

#include <cxxtest/Root.cpp>
