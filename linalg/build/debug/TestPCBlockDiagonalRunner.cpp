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
#include "linalg/test/TestPCBlockDiagonal.hpp"

static TestPCBlockDiagonal suite_TestPCBlockDiagonal;

static CxxTest::List Tests_TestPCBlockDiagonal = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPCBlockDiagonal( "linalg/test/TestPCBlockDiagonal.hpp", 53, "TestPCBlockDiagonal", suite_TestPCBlockDiagonal, Tests_TestPCBlockDiagonal );

static class TestDescription_TestPCBlockDiagonal_TestBasicFunctionality : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPCBlockDiagonal_TestBasicFunctionality() : CxxTest::RealTestDescription( Tests_TestPCBlockDiagonal, suiteDescription_TestPCBlockDiagonal, 57, "TestBasicFunctionality" ) {}
 void runTest() { suite_TestPCBlockDiagonal.TestBasicFunctionality(); }
} testDescription_TestPCBlockDiagonal_TestBasicFunctionality;

static class TestDescription_TestPCBlockDiagonal_TestBetterThanNoPreconditioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPCBlockDiagonal_TestBetterThanNoPreconditioning() : CxxTest::RealTestDescription( Tests_TestPCBlockDiagonal, suiteDescription_TestPCBlockDiagonal, 137, "TestBetterThanNoPreconditioning" ) {}
 void runTest() { suite_TestPCBlockDiagonal.TestBetterThanNoPreconditioning(); }
} testDescription_TestPCBlockDiagonal_TestBetterThanNoPreconditioning;

#include <cxxtest/Root.cpp>
