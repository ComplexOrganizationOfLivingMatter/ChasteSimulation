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
#include "pde/test/utilities/TestQuadraturePointsGroup.hpp"

static TestQuadraturePointsGroup suite_TestQuadraturePointsGroup;

static CxxTest::List Tests_TestQuadraturePointsGroup = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestQuadraturePointsGroup( "pde/test/utilities/TestQuadraturePointsGroup.hpp", 47, "TestQuadraturePointsGroup", suite_TestQuadraturePointsGroup, Tests_TestQuadraturePointsGroup );

static class TestDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations1d() : CxxTest::RealTestDescription( Tests_TestQuadraturePointsGroup, suiteDescription_TestQuadraturePointsGroup, 51, "TestGetQuadPointLocations1d" ) {}
 void runTest() { suite_TestQuadraturePointsGroup.TestGetQuadPointLocations1d(); }
} testDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations1d;

static class TestDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations2d() : CxxTest::RealTestDescription( Tests_TestQuadraturePointsGroup, suiteDescription_TestQuadraturePointsGroup, 84, "TestGetQuadPointLocations2d" ) {}
 void runTest() { suite_TestQuadraturePointsGroup.TestGetQuadPointLocations2d(); }
} testDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations2d;

static class TestDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations2dDistributed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations2dDistributed() : CxxTest::RealTestDescription( Tests_TestQuadraturePointsGroup, suiteDescription_TestQuadraturePointsGroup, 119, "TestGetQuadPointLocations2dDistributed" ) {}
 void runTest() { suite_TestQuadraturePointsGroup.TestGetQuadPointLocations2dDistributed(); }
} testDescription_TestQuadraturePointsGroup_TestGetQuadPointLocations2dDistributed;

#include <cxxtest/Root.cpp>
