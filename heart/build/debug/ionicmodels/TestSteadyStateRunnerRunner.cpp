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
#include "heart/test/ionicmodels/TestSteadyStateRunner.hpp"

static TestSteadyStateRunner suite_TestSteadyStateRunner;

static CxxTest::List Tests_TestSteadyStateRunner = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSteadyStateRunner( "heart/test/ionicmodels/TestSteadyStateRunner.hpp", 54, "TestSteadyStateRunner", suite_TestSteadyStateRunner, Tests_TestSteadyStateRunner );

static class TestDescription_TestSteadyStateRunner_TestSteadyStateRunnerConverges : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSteadyStateRunner_TestSteadyStateRunnerConverges() : CxxTest::RealTestDescription( Tests_TestSteadyStateRunner, suiteDescription_TestSteadyStateRunner, 59, "TestSteadyStateRunnerConverges" ) {}
 void runTest() { suite_TestSteadyStateRunner.TestSteadyStateRunnerConverges(); }
} testDescription_TestSteadyStateRunner_TestSteadyStateRunnerConverges;

#include <cxxtest/Root.cpp>
