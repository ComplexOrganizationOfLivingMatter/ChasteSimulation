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
#include "linalg/test/TestFourthOrderTensor.hpp"

static TestFourthOrderTensor suite_TestFourthOrderTensor;

static CxxTest::List Tests_TestFourthOrderTensor = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFourthOrderTensor( "linalg/test/TestFourthOrderTensor.hpp", 43, "TestFourthOrderTensor", suite_TestFourthOrderTensor, Tests_TestFourthOrderTensor );

static class TestDescription_TestFourthOrderTensor_TestFourthOrderTensorAllSameDimensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestFourthOrderTensorAllSameDimensions() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 47, "TestFourthOrderTensorAllSameDimensions" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestFourthOrderTensorAllSameDimensions(); }
} testDescription_TestFourthOrderTensor_TestFourthOrderTensorAllSameDimensions;

static class TestDescription_TestFourthOrderTensor_TestSetAsContractionOnFirstDimensionSameDimensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestSetAsContractionOnFirstDimensionSameDimensions() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 128, "TestSetAsContractionOnFirstDimensionSameDimensions" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestSetAsContractionOnFirstDimensionSameDimensions(); }
} testDescription_TestFourthOrderTensor_TestSetAsContractionOnFirstDimensionSameDimensions;

static class TestDescription_TestFourthOrderTensor_TestSetAsContractionOnSecondDimensionSameDimensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestSetAsContractionOnSecondDimensionSameDimensions() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 165, "TestSetAsContractionOnSecondDimensionSameDimensions" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestSetAsContractionOnSecondDimensionSameDimensions(); }
} testDescription_TestFourthOrderTensor_TestSetAsContractionOnSecondDimensionSameDimensions;

static class TestDescription_TestFourthOrderTensor_TestSetAsContractionOnThirdDimensionSameDimensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestSetAsContractionOnThirdDimensionSameDimensions() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 203, "TestSetAsContractionOnThirdDimensionSameDimensions" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestSetAsContractionOnThirdDimensionSameDimensions(); }
} testDescription_TestFourthOrderTensor_TestSetAsContractionOnThirdDimensionSameDimensions;

static class TestDescription_TestFourthOrderTensor_TestSetAsContractionOnFourthDimensionSameDimensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestSetAsContractionOnFourthDimensionSameDimensions() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 241, "TestSetAsContractionOnFourthDimensionSameDimensions" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestSetAsContractionOnFourthDimensionSameDimensions(); }
} testDescription_TestFourthOrderTensor_TestSetAsContractionOnFourthDimensionSameDimensions;

static class TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions1 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions1() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 279, "TestFourthOrderTensorDifferentDimensions1" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestFourthOrderTensorDifferentDimensions1(); }
} testDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions1;

static class TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions2() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 309, "TestFourthOrderTensorDifferentDimensions2" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestFourthOrderTensorDifferentDimensions2(); }
} testDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions2;

static class TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions3 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions3() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 339, "TestFourthOrderTensorDifferentDimensions3" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestFourthOrderTensorDifferentDimensions3(); }
} testDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions3;

static class TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions4 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions4() : CxxTest::RealTestDescription( Tests_TestFourthOrderTensor, suiteDescription_TestFourthOrderTensor, 369, "TestFourthOrderTensorDifferentDimensions4" ) {}
 void runTest() { suite_TestFourthOrderTensor.TestFourthOrderTensorDifferentDimensions4(); }
} testDescription_TestFourthOrderTensor_TestFourthOrderTensorDifferentDimensions4;

#include <cxxtest/Root.cpp>
