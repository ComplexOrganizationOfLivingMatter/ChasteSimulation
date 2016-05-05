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
#include "lung/test/TestAirwayTreeWalker.hpp"

static TestAirwayTreeWalker suite_TestAirwayTreeWalker;

static CxxTest::List Tests_TestAirwayTreeWalker = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAirwayTreeWalker( "lung/test/TestAirwayTreeWalker.hpp", 46, "TestAirwayTreeWalker", suite_TestAirwayTreeWalker, Tests_TestAirwayTreeWalker );

static class TestDescription_TestAirwayTreeWalker_TestGetMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayTreeWalker_TestGetMethods() : CxxTest::RealTestDescription( Tests_TestAirwayTreeWalker, suiteDescription_TestAirwayTreeWalker, 49, "TestGetMethods" ) {}
 void runTest() { suite_TestAirwayTreeWalker.TestGetMethods(); }
} testDescription_TestAirwayTreeWalker_TestGetMethods;

static class TestDescription_TestAirwayTreeWalker_TestGenerations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayTreeWalker_TestGenerations() : CxxTest::RealTestDescription( Tests_TestAirwayTreeWalker, suiteDescription_TestAirwayTreeWalker, 86, "TestGenerations" ) {}
 void runTest() { suite_TestAirwayTreeWalker.TestGenerations(); }
} testDescription_TestAirwayTreeWalker_TestGenerations;

static class TestDescription_TestAirwayTreeWalker_TestOrders : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayTreeWalker_TestOrders() : CxxTest::RealTestDescription( Tests_TestAirwayTreeWalker, suiteDescription_TestAirwayTreeWalker, 107, "TestOrders" ) {}
 void runTest() { suite_TestAirwayTreeWalker.TestOrders(); }
} testDescription_TestAirwayTreeWalker_TestOrders;

#include <cxxtest/Root.cpp>
