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
#include "heart/test/ionicmodels/TestPyCml.hpp"

static TestPyCml suite_TestPyCml;

static CxxTest::List Tests_TestPyCml = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPyCml( "heart/test/ionicmodels/TestPyCml.hpp", 75, "TestPyCml", suite_TestPyCml, Tests_TestPyCml );

static class TestDescription_TestPyCml_TestPyCmlCodeGeneration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPyCml_TestPyCmlCodeGeneration() : CxxTest::RealTestDescription( Tests_TestPyCml, suiteDescription_TestPyCml, 147, "TestPyCmlCodeGeneration" ) {}
 void runTest() { suite_TestPyCml.TestPyCmlCodeGeneration(); }
} testDescription_TestPyCml_TestPyCmlCodeGeneration;

static class TestDescription_TestPyCml_TestModelWithNoIntracellularCalcium : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPyCml_TestModelWithNoIntracellularCalcium() : CxxTest::RealTestDescription( Tests_TestPyCml, suiteDescription_TestPyCml, 481, "TestModelWithNoIntracellularCalcium" ) {}
 void runTest() { suite_TestPyCml.TestModelWithNoIntracellularCalcium(); }
} testDescription_TestPyCml_TestModelWithNoIntracellularCalcium;

#include <cxxtest/Root.cpp>
