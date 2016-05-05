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
#include "heart/test/postprocessing/TestPseudoEcgCalculator.hpp"

static TestPseudoEcgCalculator suite_TestPseudoEcgCalculator;

static CxxTest::List Tests_TestPseudoEcgCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPseudoEcgCalculator( "heart/test/postprocessing/TestPseudoEcgCalculator.hpp", 62, "TestPseudoEcgCalculator", suite_TestPseudoEcgCalculator, Tests_TestPseudoEcgCalculator );

static class TestDescription_TestPseudoEcgCalculator_TestCalculator1DLinearGradient : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPseudoEcgCalculator_TestCalculator1DLinearGradient() : CxxTest::RealTestDescription( Tests_TestPseudoEcgCalculator, suiteDescription_TestPseudoEcgCalculator, 67, "TestCalculator1DLinearGradient" ) {}
 void runTest() { suite_TestPseudoEcgCalculator.TestCalculator1DLinearGradient(); }
} testDescription_TestPseudoEcgCalculator_TestCalculator1DLinearGradient;

static class TestDescription_TestPseudoEcgCalculator_TestCalculator1DParabolic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPseudoEcgCalculator_TestCalculator1DParabolic() : CxxTest::RealTestDescription( Tests_TestPseudoEcgCalculator, suiteDescription_TestPseudoEcgCalculator, 184, "TestCalculator1DParabolic" ) {}
 void runTest() { suite_TestPseudoEcgCalculator.TestCalculator1DParabolic(); }
} testDescription_TestPseudoEcgCalculator_TestCalculator1DParabolic;

static class TestDescription_TestPseudoEcgCalculator_TestBathEcgCalculations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPseudoEcgCalculator_TestBathEcgCalculations() : CxxTest::RealTestDescription( Tests_TestPseudoEcgCalculator, suiteDescription_TestPseudoEcgCalculator, 288, "TestBathEcgCalculations" ) {}
 void runTest() { suite_TestPseudoEcgCalculator.TestBathEcgCalculations(); }
} testDescription_TestPseudoEcgCalculator_TestBathEcgCalculations;

#include <cxxtest/Root.cpp>
