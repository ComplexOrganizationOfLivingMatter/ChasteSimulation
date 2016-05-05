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
#include "heart/test/extended_bidomain/TestExtendedBidomainProblem.hpp"

static TestExtendedBidomainProblem suite_TestExtendedBidomainProblem;

static CxxTest::List Tests_TestExtendedBidomainProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestExtendedBidomainProblem( "heart/test/extended_bidomain/TestExtendedBidomainProblem.hpp", 108, "TestExtendedBidomainProblem", suite_TestExtendedBidomainProblem, Tests_TestExtendedBidomainProblem );

static class TestDescription_TestExtendedBidomainProblem_TestExtendedProblemVsMartincCode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainProblem_TestExtendedProblemVsMartincCode() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainProblem, suiteDescription_TestExtendedBidomainProblem, 132, "TestExtendedProblemVsMartincCode" ) {}
 void runTest() { suite_TestExtendedBidomainProblem.TestExtendedProblemVsMartincCode(); }
} testDescription_TestExtendedBidomainProblem_TestExtendedProblemVsMartincCode;

static class TestDescription_TestExtendedBidomainProblem_TestExtendedBidomainProblemPrintsMultipleVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainProblem_TestExtendedBidomainProblemPrintsMultipleVariables() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainProblem, suiteDescription_TestExtendedBidomainProblem, 202, "TestExtendedBidomainProblemPrintsMultipleVariables" ) {}
 void runTest() { suite_TestExtendedBidomainProblem.TestExtendedBidomainProblemPrintsMultipleVariables(); }
} testDescription_TestExtendedBidomainProblem_TestExtendedBidomainProblemPrintsMultipleVariables;

#include <cxxtest/Root.cpp>
