/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "heart/test/ionicmodels/TestHodgkinHuxleySquidAxon1952OriginalOdeSystem.hpp"

static TestHodgkinHuxleySquidAxon1952OriginalOdeSystem suite_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem;

static CxxTest::List Tests_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem( "heart/test/ionicmodels/TestHodgkinHuxleySquidAxon1952OriginalOdeSystem.hpp", 49, "TestHodgkinHuxleySquidAxon1952OriginalOdeSystem", suite_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem, Tests_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem );

static class TestDescription_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem_TestHHModelAtSingularities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem_TestHHModelAtSingularities() : CxxTest::RealTestDescription( Tests_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem, suiteDescription_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem, 53, "TestHHModelAtSingularities" ) {}
 void runTest() { suite_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem.TestHHModelAtSingularities(); }
} testDescription_TestHodgkinHuxleySquidAxon1952OriginalOdeSystem_TestHHModelAtSingularities;

#include <cxxtest/Root.cpp>
