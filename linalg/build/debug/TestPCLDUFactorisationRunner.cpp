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
#include "linalg/test/TestPCLDUFactorisation.hpp"

static TestPCLDUFactorisation suite_TestPCLDUFactorisation;

static CxxTest::List Tests_TestPCLDUFactorisation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPCLDUFactorisation( "linalg/test/TestPCLDUFactorisation.hpp", 52, "TestPCLDUFactorisation", suite_TestPCLDUFactorisation, Tests_TestPCLDUFactorisation );

static class TestDescription_TestPCLDUFactorisation_TestBasicFunctionality : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPCLDUFactorisation_TestBasicFunctionality() : CxxTest::RealTestDescription( Tests_TestPCLDUFactorisation, suiteDescription_TestPCLDUFactorisation, 56, "TestBasicFunctionality" ) {}
 void runTest() { suite_TestPCLDUFactorisation.TestBasicFunctionality(); }
} testDescription_TestPCLDUFactorisation_TestBasicFunctionality;

static class TestDescription_TestPCLDUFactorisation_TestBetterThanNoPreconditioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPCLDUFactorisation_TestBetterThanNoPreconditioning() : CxxTest::RealTestDescription( Tests_TestPCLDUFactorisation, suiteDescription_TestPCLDUFactorisation, 136, "TestBetterThanNoPreconditioning" ) {}
 void runTest() { suite_TestPCLDUFactorisation.TestBetterThanNoPreconditioning(); }
} testDescription_TestPCLDUFactorisation_TestBetterThanNoPreconditioning;

#include <cxxtest/Root.cpp>
