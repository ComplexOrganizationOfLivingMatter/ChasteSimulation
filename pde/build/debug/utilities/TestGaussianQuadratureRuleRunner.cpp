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
#include "pde/test/utilities/TestGaussianQuadratureRule.hpp"

static TestGaussianQuadratureRule suite_TestGaussianQuadratureRule;

static CxxTest::List Tests_TestGaussianQuadratureRule = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGaussianQuadratureRule( "pde/test/utilities/TestGaussianQuadratureRule.hpp", 46, "TestGaussianQuadratureRule", suite_TestGaussianQuadratureRule, Tests_TestGaussianQuadratureRule );

static class TestDescription_TestGaussianQuadratureRule_TestTheGaussianQuadratureRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGaussianQuadratureRule_TestTheGaussianQuadratureRule() : CxxTest::RealTestDescription( Tests_TestGaussianQuadratureRule, suiteDescription_TestGaussianQuadratureRule, 53, "TestTheGaussianQuadratureRule" ) {}
 void runTest() { suite_TestGaussianQuadratureRule.TestTheGaussianQuadratureRule(); }
} testDescription_TestGaussianQuadratureRule_TestTheGaussianQuadratureRule;

static class TestDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralOneD : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralOneD() : CxxTest::RealTestDescription( Tests_TestGaussianQuadratureRule, suiteDescription_TestGaussianQuadratureRule, 130, "TestGaussianQuadratureRuleIntegralOneD" ) {}
 void runTest() { suite_TestGaussianQuadratureRule.TestGaussianQuadratureRuleIntegralOneD(); }
} testDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralOneD;

static class TestDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralTwoD : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralTwoD() : CxxTest::RealTestDescription( Tests_TestGaussianQuadratureRule, suiteDescription_TestGaussianQuadratureRule, 183, "TestGaussianQuadratureRuleIntegralTwoD" ) {}
 void runTest() { suite_TestGaussianQuadratureRule.TestGaussianQuadratureRuleIntegralTwoD(); }
} testDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralTwoD;

static class TestDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralThreeD : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralThreeD() : CxxTest::RealTestDescription( Tests_TestGaussianQuadratureRule, suiteDescription_TestGaussianQuadratureRule, 227, "TestGaussianQuadratureRuleIntegralThreeD" ) {}
 void runTest() { suite_TestGaussianQuadratureRule.TestGaussianQuadratureRuleIntegralThreeD(); }
} testDescription_TestGaussianQuadratureRule_TestGaussianQuadratureRuleIntegralThreeD;

#include <cxxtest/Root.cpp>
