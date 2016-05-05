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
#include "linalg/test/TestChebyshevIteration.hpp"

static TestChebyshevIteration suite_TestChebyshevIteration;

static CxxTest::List Tests_TestChebyshevIteration = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestChebyshevIteration( "linalg/test/TestChebyshevIteration.hpp", 53, "TestChebyshevIteration", suite_TestChebyshevIteration, Tests_TestChebyshevIteration );

static class TestDescription_TestChebyshevIteration_TestChebyshevVsCG : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChebyshevIteration_TestChebyshevVsCG() : CxxTest::RealTestDescription( Tests_TestChebyshevIteration, suiteDescription_TestChebyshevIteration, 57, "TestChebyshevVsCG" ) {}
 void runTest() { suite_TestChebyshevIteration.TestChebyshevVsCG(); }
} testDescription_TestChebyshevIteration_TestChebyshevVsCG;

static class TestDescription_TestChebyshevIteration_TestChebyshevAdaptiveVsNoAdaptive : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChebyshevIteration_TestChebyshevAdaptiveVsNoAdaptive() : CxxTest::RealTestDescription( Tests_TestChebyshevIteration, suiteDescription_TestChebyshevIteration, 125, "TestChebyshevAdaptiveVsNoAdaptive" ) {}
 void runTest() { suite_TestChebyshevIteration.TestChebyshevAdaptiveVsNoAdaptive(); }
} testDescription_TestChebyshevIteration_TestChebyshevAdaptiveVsNoAdaptive;

#include <cxxtest/Root.cpp>
