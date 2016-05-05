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
#include "heart/test/TestCheckpointing.hpp"

static TestCheckpointing suite_TestCheckpointing;

static CxxTest::List Tests_TestCheckpointing = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCheckpointing( "heart/test/TestCheckpointing.hpp", 51, "TestCheckpointing", suite_TestCheckpointing, Tests_TestCheckpointing );

static class TestDescription_TestCheckpointing_TestMultipleCallsToProblemSolve : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCheckpointing_TestMultipleCallsToProblemSolve() : CxxTest::RealTestDescription( Tests_TestCheckpointing, suiteDescription_TestCheckpointing, 59, "TestMultipleCallsToProblemSolve" ) {}
 void runTest() { suite_TestCheckpointing.TestMultipleCallsToProblemSolve(); }
} testDescription_TestCheckpointing_TestMultipleCallsToProblemSolve;

static class TestDescription_TestCheckpointing_TestCheckpointingGeneratesMultipleDirectories : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCheckpointing_TestCheckpointingGeneratesMultipleDirectories() : CxxTest::RealTestDescription( Tests_TestCheckpointing, suiteDescription_TestCheckpointing, 107, "TestCheckpointingGeneratesMultipleDirectories" ) {}
 void runTest() { suite_TestCheckpointing.TestCheckpointingGeneratesMultipleDirectories(); }
} testDescription_TestCheckpointing_TestCheckpointingGeneratesMultipleDirectories;

static class TestDescription_TestCheckpointing_TestCheckpointingGeneratesSameResults : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCheckpointing_TestCheckpointingGeneratesSameResults() : CxxTest::RealTestDescription( Tests_TestCheckpointing, suiteDescription_TestCheckpointing, 146, "TestCheckpointingGeneratesSameResults" ) {}
 void runTest() { suite_TestCheckpointing.TestCheckpointingGeneratesSameResults(); }
} testDescription_TestCheckpointing_TestCheckpointingGeneratesSameResults;

#include <cxxtest/Root.cpp>
