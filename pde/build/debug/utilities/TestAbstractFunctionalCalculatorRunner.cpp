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
#include "pde/test/utilities/TestAbstractFunctionalCalculator.hpp"

static TestAbstractFunctionalCalculator suite_TestAbstractFunctionalCalculator;

static CxxTest::List Tests_TestAbstractFunctionalCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractFunctionalCalculator( "pde/test/utilities/TestAbstractFunctionalCalculator.hpp", 100, "TestAbstractFunctionalCalculator", suite_TestAbstractFunctionalCalculator, Tests_TestAbstractFunctionalCalculator );

static class TestDescription_TestAbstractFunctionalCalculator_TestWithVolumeCalculator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFunctionalCalculator_TestWithVolumeCalculator() : CxxTest::RealTestDescription( Tests_TestAbstractFunctionalCalculator, suiteDescription_TestAbstractFunctionalCalculator, 104, "TestWithVolumeCalculator" ) {}
 void runTest() { suite_TestAbstractFunctionalCalculator.TestWithVolumeCalculator(); }
} testDescription_TestAbstractFunctionalCalculator_TestWithVolumeCalculator;

static class TestDescription_TestAbstractFunctionalCalculator_TestWithExampleFunctionals : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFunctionalCalculator_TestWithExampleFunctionals() : CxxTest::RealTestDescription( Tests_TestAbstractFunctionalCalculator, suiteDescription_TestAbstractFunctionalCalculator, 128, "TestWithExampleFunctionals" ) {}
 void runTest() { suite_TestAbstractFunctionalCalculator.TestWithExampleFunctionals(); }
} testDescription_TestAbstractFunctionalCalculator_TestWithExampleFunctionals;

static class TestDescription_TestAbstractFunctionalCalculator_TestWithExampleFunctionalsNonDistributed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFunctionalCalculator_TestWithExampleFunctionalsNonDistributed() : CxxTest::RealTestDescription( Tests_TestAbstractFunctionalCalculator, suiteDescription_TestAbstractFunctionalCalculator, 185, "TestWithExampleFunctionalsNonDistributed" ) {}
 void runTest() { suite_TestAbstractFunctionalCalculator.TestWithExampleFunctionalsNonDistributed(); }
} testDescription_TestAbstractFunctionalCalculator_TestWithExampleFunctionalsNonDistributed;

#include <cxxtest/Root.cpp>
