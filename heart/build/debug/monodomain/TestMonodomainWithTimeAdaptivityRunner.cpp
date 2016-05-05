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
#include "heart/test/monodomain/TestMonodomainWithTimeAdaptivity.hpp"

static TestMonodomainWithTimeAdaptivity suite_TestMonodomainWithTimeAdaptivity;

static CxxTest::List Tests_TestMonodomainWithTimeAdaptivity = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainWithTimeAdaptivity( "heart/test/monodomain/TestMonodomainWithTimeAdaptivity.hpp", 85, "TestMonodomainWithTimeAdaptivity", suite_TestMonodomainWithTimeAdaptivity, Tests_TestMonodomainWithTimeAdaptivity );

static class TestDescription_TestMonodomainWithTimeAdaptivity_TestWithCube : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithTimeAdaptivity_TestWithCube() : CxxTest::RealTestDescription( Tests_TestMonodomainWithTimeAdaptivity, suiteDescription_TestMonodomainWithTimeAdaptivity, 88, "TestWithCube" ) {}
 void runTest() { suite_TestMonodomainWithTimeAdaptivity.TestWithCube(); }
} testDescription_TestMonodomainWithTimeAdaptivity_TestWithCube;

static class TestDescription_TestMonodomainWithTimeAdaptivity_TestWithChebyshevAndFixedIterations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithTimeAdaptivity_TestWithChebyshevAndFixedIterations() : CxxTest::RealTestDescription( Tests_TestMonodomainWithTimeAdaptivity, suiteDescription_TestMonodomainWithTimeAdaptivity, 145, "TestWithChebyshevAndFixedIterations" ) {}
 void runTest() { suite_TestMonodomainWithTimeAdaptivity.TestWithChebyshevAndFixedIterations(); }
} testDescription_TestMonodomainWithTimeAdaptivity_TestWithChebyshevAndFixedIterations;

#include <cxxtest/Root.cpp>
