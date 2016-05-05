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
#include "heart/test/TestHeterogeneousConductivities.hpp"

static TestHeterogeneousConductivities suite_TestHeterogeneousConductivities;

static CxxTest::List Tests_TestHeterogeneousConductivities = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeterogeneousConductivities( "heart/test/TestHeterogeneousConductivities.hpp", 53, "TestHeterogeneousConductivities", suite_TestHeterogeneousConductivities, Tests_TestHeterogeneousConductivities );

static class TestDescription_TestHeterogeneousConductivities_TestSimpleSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeterogeneousConductivities_TestSimpleSimulation() : CxxTest::RealTestDescription( Tests_TestHeterogeneousConductivities, suiteDescription_TestHeterogeneousConductivities, 56, "TestSimpleSimulation" ) {}
 void runTest() { suite_TestHeterogeneousConductivities.TestSimpleSimulation(); }
} testDescription_TestHeterogeneousConductivities_TestSimpleSimulation;

#include <cxxtest/Root.cpp>
