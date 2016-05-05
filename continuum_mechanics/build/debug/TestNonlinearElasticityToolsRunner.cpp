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
#include "continuum_mechanics/test/TestNonlinearElasticityTools.hpp"

static TestNonlinearElasticityTools suite_TestNonlinearElasticityTools;

static CxxTest::List Tests_TestNonlinearElasticityTools = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNonlinearElasticityTools( "continuum_mechanics/test/TestNonlinearElasticityTools.hpp", 47, "TestNonlinearElasticityTools", suite_TestNonlinearElasticityTools, Tests_TestNonlinearElasticityTools );

static class TestDescription_TestNonlinearElasticityTools_TestGetNodesByComponentValue : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonlinearElasticityTools_TestGetNodesByComponentValue() : CxxTest::RealTestDescription( Tests_TestNonlinearElasticityTools, suiteDescription_TestNonlinearElasticityTools, 50, "TestGetNodesByComponentValue" ) {}
 void runTest() { suite_TestNonlinearElasticityTools.TestGetNodesByComponentValue(); }
} testDescription_TestNonlinearElasticityTools_TestGetNodesByComponentValue;

#include <cxxtest/Root.cpp>
