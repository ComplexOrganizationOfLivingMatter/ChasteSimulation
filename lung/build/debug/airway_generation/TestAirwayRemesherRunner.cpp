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
#include "lung/test/airway_generation/TestAirwayRemesher.hpp"

static TestAirwayRemesher suite_TestAirwayRemesher;

static CxxTest::List Tests_TestAirwayRemesher = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAirwayRemesher( "lung/test/airway_generation/TestAirwayRemesher.hpp", 51, "TestAirwayRemesher", suite_TestAirwayRemesher, Tests_TestAirwayRemesher );

static class TestDescription_TestAirwayRemesher_TestRemeshSingleBranch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayRemesher_TestRemeshSingleBranch() : CxxTest::RealTestDescription( Tests_TestAirwayRemesher, suiteDescription_TestAirwayRemesher, 54, "TestRemeshSingleBranch" ) {}
 void runTest() { suite_TestAirwayRemesher.TestRemeshSingleBranch(); }
} testDescription_TestAirwayRemesher_TestRemeshSingleBranch;

static class TestDescription_TestAirwayRemesher_TestRemeshFullTree : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayRemesher_TestRemeshFullTree() : CxxTest::RealTestDescription( Tests_TestAirwayRemesher, suiteDescription_TestAirwayRemesher, 103, "TestRemeshFullTree" ) {}
 void runTest() { suite_TestAirwayRemesher.TestRemeshFullTree(); }
} testDescription_TestAirwayRemesher_TestRemeshFullTree;

#include <cxxtest/Root.cpp>
