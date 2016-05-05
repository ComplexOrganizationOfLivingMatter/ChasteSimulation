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
#include "linalg/test/TestPCTwoLevelsBlockDiagonal.hpp"

static TestPCTwoLevelsBlockDiagonal suite_TestPCTwoLevelsBlockDiagonal;

static CxxTest::List Tests_TestPCTwoLevelsBlockDiagonal = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPCTwoLevelsBlockDiagonal( "linalg/test/TestPCTwoLevelsBlockDiagonal.hpp", 52, "TestPCTwoLevelsBlockDiagonal", suite_TestPCTwoLevelsBlockDiagonal, Tests_TestPCTwoLevelsBlockDiagonal );

static class TestDescription_TestPCTwoLevelsBlockDiagonal_TestBasicFunctionality : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPCTwoLevelsBlockDiagonal_TestBasicFunctionality() : CxxTest::RealTestDescription( Tests_TestPCTwoLevelsBlockDiagonal, suiteDescription_TestPCTwoLevelsBlockDiagonal, 56, "TestBasicFunctionality" ) {}
 void runTest() { suite_TestPCTwoLevelsBlockDiagonal.TestBasicFunctionality(); }
} testDescription_TestPCTwoLevelsBlockDiagonal_TestBasicFunctionality;

static class TestDescription_TestPCTwoLevelsBlockDiagonal_TestBetterThanNoPreconditioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPCTwoLevelsBlockDiagonal_TestBetterThanNoPreconditioning() : CxxTest::RealTestDescription( Tests_TestPCTwoLevelsBlockDiagonal, suiteDescription_TestPCTwoLevelsBlockDiagonal, 170, "TestBetterThanNoPreconditioning" ) {}
 void runTest() { suite_TestPCTwoLevelsBlockDiagonal.TestBetterThanNoPreconditioning(); }
} testDescription_TestPCTwoLevelsBlockDiagonal_TestBetterThanNoPreconditioning;

#include <cxxtest/Root.cpp>
