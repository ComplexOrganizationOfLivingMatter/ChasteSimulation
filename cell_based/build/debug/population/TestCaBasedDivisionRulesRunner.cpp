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
#include "cell_based/test/population/TestCaBasedDivisionRules.hpp"

static TestCaBasedDivisionRules suite_TestCaBasedDivisionRules;

static CxxTest::List Tests_TestCaBasedDivisionRules = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCaBasedDivisionRules( "cell_based/test/population/TestCaBasedDivisionRules.hpp", 56, "TestCaBasedDivisionRules", suite_TestCaBasedDivisionRules, Tests_TestCaBasedDivisionRules );

static class TestDescription_TestCaBasedDivisionRules_TestAddCellwithExclusionBasedDivisionRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedDivisionRules_TestAddCellwithExclusionBasedDivisionRule() : CxxTest::RealTestDescription( Tests_TestCaBasedDivisionRules, suiteDescription_TestCaBasedDivisionRules, 60, "TestAddCellwithExclusionBasedDivisionRule" ) {}
 void runTest() { suite_TestCaBasedDivisionRules.TestAddCellwithExclusionBasedDivisionRule(); }
} testDescription_TestCaBasedDivisionRules_TestAddCellwithExclusionBasedDivisionRule;

#include <cxxtest/Root.cpp>
