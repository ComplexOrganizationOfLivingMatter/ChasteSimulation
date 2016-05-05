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
#include "heart/test/postprocessing/TestPropagationPropertiesCalculator.hpp"

static TestPropagationPropertiesCalculator suite_TestPropagationPropertiesCalculator;

static CxxTest::List Tests_TestPropagationPropertiesCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPropagationPropertiesCalculator( "heart/test/postprocessing/TestPropagationPropertiesCalculator.hpp", 46, "TestPropagationPropertiesCalculator", suite_TestPropagationPropertiesCalculator, Tests_TestPropagationPropertiesCalculator );

static class TestDescription_TestPropagationPropertiesCalculator_TestConductionVelocity1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPropagationPropertiesCalculator_TestConductionVelocity1D() : CxxTest::RealTestDescription( Tests_TestPropagationPropertiesCalculator, suiteDescription_TestPropagationPropertiesCalculator, 49, "TestConductionVelocity1D" ) {}
 void runTest() { suite_TestPropagationPropertiesCalculator.TestConductionVelocity1D(); }
} testDescription_TestPropagationPropertiesCalculator_TestConductionVelocity1D;

static class TestDescription_TestPropagationPropertiesCalculator_TestConductionVelocityWithRepeatedStimuli : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPropagationPropertiesCalculator_TestConductionVelocityWithRepeatedStimuli() : CxxTest::RealTestDescription( Tests_TestPropagationPropertiesCalculator, suiteDescription_TestPropagationPropertiesCalculator, 83, "TestConductionVelocityWithRepeatedStimuli" ) {}
 void runTest() { suite_TestPropagationPropertiesCalculator.TestConductionVelocityWithRepeatedStimuli(); }
} testDescription_TestPropagationPropertiesCalculator_TestConductionVelocityWithRepeatedStimuli;

static class TestDescription_TestPropagationPropertiesCalculator_TestConductionBidomain3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPropagationPropertiesCalculator_TestConductionBidomain3D() : CxxTest::RealTestDescription( Tests_TestPropagationPropertiesCalculator, suiteDescription_TestPropagationPropertiesCalculator, 136, "TestConductionBidomain3D" ) {}
 void runTest() { suite_TestPropagationPropertiesCalculator.TestConductionBidomain3D(); }
} testDescription_TestPropagationPropertiesCalculator_TestConductionBidomain3D;

static class TestDescription_TestPropagationPropertiesCalculator_TestUpstrokeBidomain3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPropagationPropertiesCalculator_TestUpstrokeBidomain3D() : CxxTest::RealTestDescription( Tests_TestPropagationPropertiesCalculator, suiteDescription_TestPropagationPropertiesCalculator, 193, "TestUpstrokeBidomain3D" ) {}
 void runTest() { suite_TestPropagationPropertiesCalculator.TestUpstrokeBidomain3D(); }
} testDescription_TestPropagationPropertiesCalculator_TestUpstrokeBidomain3D;

static class TestDescription_TestPropagationPropertiesCalculator_TestAPDCalculatorOverMultipleNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPropagationPropertiesCalculator_TestAPDCalculatorOverMultipleNodes() : CxxTest::RealTestDescription( Tests_TestPropagationPropertiesCalculator, suiteDescription_TestPropagationPropertiesCalculator, 217, "TestAPDCalculatorOverMultipleNodes" ) {}
 void runTest() { suite_TestPropagationPropertiesCalculator.TestAPDCalculatorOverMultipleNodes(); }
} testDescription_TestPropagationPropertiesCalculator_TestAPDCalculatorOverMultipleNodes;

static class TestDescription_TestPropagationPropertiesCalculator_TestEadCalculation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPropagationPropertiesCalculator_TestEadCalculation() : CxxTest::RealTestDescription( Tests_TestPropagationPropertiesCalculator, suiteDescription_TestPropagationPropertiesCalculator, 254, "TestEadCalculation" ) {}
 void runTest() { suite_TestPropagationPropertiesCalculator.TestEadCalculation(); }
} testDescription_TestPropagationPropertiesCalculator_TestEadCalculation;

#include <cxxtest/Root.cpp>
