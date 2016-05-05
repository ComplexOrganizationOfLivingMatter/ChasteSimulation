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
#include "lung/test/airway_generation/TestMajorAirwaysCentreLinesCleaner.hpp"

static TestMajorAirwaysCentreLinesCleaner suite_TestMajorAirwaysCentreLinesCleaner;

static CxxTest::List Tests_TestMajorAirwaysCentreLinesCleaner = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMajorAirwaysCentreLinesCleaner( "lung/test/airway_generation/TestMajorAirwaysCentreLinesCleaner.hpp", 51, "TestMajorAirwaysCentreLinesCleaner", suite_TestMajorAirwaysCentreLinesCleaner, Tests_TestMajorAirwaysCentreLinesCleaner );

static class TestDescription_TestMajorAirwaysCentreLinesCleaner_TestDeleteOrderSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMajorAirwaysCentreLinesCleaner_TestDeleteOrderSimpleMesh() : CxxTest::RealTestDescription( Tests_TestMajorAirwaysCentreLinesCleaner, suiteDescription_TestMajorAirwaysCentreLinesCleaner, 54, "TestDeleteOrderSimpleMesh" ) {}
 void runTest() { suite_TestMajorAirwaysCentreLinesCleaner.TestDeleteOrderSimpleMesh(); }
} testDescription_TestMajorAirwaysCentreLinesCleaner_TestDeleteOrderSimpleMesh;

static class TestDescription_TestMajorAirwaysCentreLinesCleaner_TestDeleteFirstOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMajorAirwaysCentreLinesCleaner_TestDeleteFirstOrder() : CxxTest::RealTestDescription( Tests_TestMajorAirwaysCentreLinesCleaner, suiteDescription_TestMajorAirwaysCentreLinesCleaner, 85, "TestDeleteFirstOrder" ) {}
 void runTest() { suite_TestMajorAirwaysCentreLinesCleaner.TestDeleteFirstOrder(); }
} testDescription_TestMajorAirwaysCentreLinesCleaner_TestDeleteFirstOrder;

static class TestDescription_TestMajorAirwaysCentreLinesCleaner_TestHeuristicCleanSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMajorAirwaysCentreLinesCleaner_TestHeuristicCleanSimpleMesh() : CxxTest::RealTestDescription( Tests_TestMajorAirwaysCentreLinesCleaner, suiteDescription_TestMajorAirwaysCentreLinesCleaner, 118, "TestHeuristicCleanSimpleMesh" ) {}
 void runTest() { suite_TestMajorAirwaysCentreLinesCleaner.TestHeuristicCleanSimpleMesh(); }
} testDescription_TestMajorAirwaysCentreLinesCleaner_TestHeuristicCleanSimpleMesh;

static class TestDescription_TestMajorAirwaysCentreLinesCleaner_TestRemoveIsolatedNodesSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMajorAirwaysCentreLinesCleaner_TestRemoveIsolatedNodesSimpleMesh() : CxxTest::RealTestDescription( Tests_TestMajorAirwaysCentreLinesCleaner, suiteDescription_TestMajorAirwaysCentreLinesCleaner, 190, "TestRemoveIsolatedNodesSimpleMesh" ) {}
 void runTest() { suite_TestMajorAirwaysCentreLinesCleaner.TestRemoveIsolatedNodesSimpleMesh(); }
} testDescription_TestMajorAirwaysCentreLinesCleaner_TestRemoveIsolatedNodesSimpleMesh;

#include <cxxtest/Root.cpp>
