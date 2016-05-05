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
#include "cell_based/test/population/TestVertexBasedDivisionRules.hpp"

static TestVertexBasedDivisionRules suite_TestVertexBasedDivisionRules;

static CxxTest::List Tests_TestVertexBasedDivisionRules = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexBasedDivisionRules( "cell_based/test/population/TestVertexBasedDivisionRules.hpp", 57, "TestVertexBasedDivisionRules", suite_TestVertexBasedDivisionRules, Tests_TestVertexBasedDivisionRules );

static class TestDescription_TestVertexBasedDivisionRules_TestAddCellwithDiagonalVertexBasedDivisionRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedDivisionRules_TestAddCellwithDiagonalVertexBasedDivisionRule() : CxxTest::RealTestDescription( Tests_TestVertexBasedDivisionRules, suiteDescription_TestVertexBasedDivisionRules, 61, "TestAddCellwithDiagonalVertexBasedDivisionRule" ) {}
 void runTest() { suite_TestVertexBasedDivisionRules.TestAddCellwithDiagonalVertexBasedDivisionRule(); }
} testDescription_TestVertexBasedDivisionRules_TestAddCellwithDiagonalVertexBasedDivisionRule;

static class TestDescription_TestVertexBasedDivisionRules_TestRandomDirectionVertexBasedDivisionRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedDivisionRules_TestRandomDirectionVertexBasedDivisionRule() : CxxTest::RealTestDescription( Tests_TestVertexBasedDivisionRules, suiteDescription_TestVertexBasedDivisionRules, 132, "TestRandomDirectionVertexBasedDivisionRule" ) {}
 void runTest() { suite_TestVertexBasedDivisionRules.TestRandomDirectionVertexBasedDivisionRule(); }
} testDescription_TestVertexBasedDivisionRules_TestRandomDirectionVertexBasedDivisionRule;

static class TestDescription_TestVertexBasedDivisionRules_TestArchiveRandomDirectionVertexBasedDivisionRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedDivisionRules_TestArchiveRandomDirectionVertexBasedDivisionRule() : CxxTest::RealTestDescription( Tests_TestVertexBasedDivisionRules, suiteDescription_TestVertexBasedDivisionRules, 211, "TestArchiveRandomDirectionVertexBasedDivisionRule" ) {}
 void runTest() { suite_TestVertexBasedDivisionRules.TestArchiveRandomDirectionVertexBasedDivisionRule(); }
} testDescription_TestVertexBasedDivisionRules_TestArchiveRandomDirectionVertexBasedDivisionRule;

static class TestDescription_TestVertexBasedDivisionRules_TestArchiveDiagonalVertexBasedDivisionRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedDivisionRules_TestArchiveDiagonalVertexBasedDivisionRule() : CxxTest::RealTestDescription( Tests_TestVertexBasedDivisionRules, suiteDescription_TestVertexBasedDivisionRules, 249, "TestArchiveDiagonalVertexBasedDivisionRule" ) {}
 void runTest() { suite_TestVertexBasedDivisionRules.TestArchiveDiagonalVertexBasedDivisionRule(); }
} testDescription_TestVertexBasedDivisionRules_TestArchiveDiagonalVertexBasedDivisionRule;

#include <cxxtest/Root.cpp>
