/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "pde/test/utilities/TestQuadraticBasisFunction.hpp"

static TestQuadraticBasisFunction suite_TestQuadraticBasisFunction;

static CxxTest::List Tests_TestQuadraticBasisFunction = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestQuadraticBasisFunction( "pde/test/utilities/TestQuadraticBasisFunction.hpp", 47, "TestQuadraticBasisFunction", suite_TestQuadraticBasisFunction, Tests_TestQuadraticBasisFunction );

static class TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction0d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction0d() : CxxTest::RealTestDescription( Tests_TestQuadraticBasisFunction, suiteDescription_TestQuadraticBasisFunction, 51, "TestQuadraticBasisFunction0d" ) {}
 void runTest() { suite_TestQuadraticBasisFunction.TestQuadraticBasisFunction0d(); }
} testDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction0d;

static class TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction1d() : CxxTest::RealTestDescription( Tests_TestQuadraticBasisFunction, suiteDescription_TestQuadraticBasisFunction, 62, "TestQuadraticBasisFunction1d" ) {}
 void runTest() { suite_TestQuadraticBasisFunction.TestQuadraticBasisFunction1d(); }
} testDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction1d;

static class TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction2d() : CxxTest::RealTestDescription( Tests_TestQuadraticBasisFunction, suiteDescription_TestQuadraticBasisFunction, 95, "TestQuadraticBasisFunction2d" ) {}
 void runTest() { suite_TestQuadraticBasisFunction.TestQuadraticBasisFunction2d(); }
} testDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction2d;

static class TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction3d() : CxxTest::RealTestDescription( Tests_TestQuadraticBasisFunction, suiteDescription_TestQuadraticBasisFunction, 162, "TestQuadraticBasisFunction3d" ) {}
 void runTest() { suite_TestQuadraticBasisFunction.TestQuadraticBasisFunction3d(); }
} testDescription_TestQuadraticBasisFunction_TestQuadraticBasisFunction3d;

static class TestDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunctionDerivatives1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunctionDerivatives1d() : CxxTest::RealTestDescription( Tests_TestQuadraticBasisFunction, suiteDescription_TestQuadraticBasisFunction, 201, "TestComputeTransformedQuadraticBasisFunctionDerivatives1d" ) {}
 void runTest() { suite_TestQuadraticBasisFunction.TestComputeTransformedQuadraticBasisFunctionDerivatives1d(); }
} testDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunctionDerivatives1d;

static class TestDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunction2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunction2d() : CxxTest::RealTestDescription( Tests_TestQuadraticBasisFunction, suiteDescription_TestQuadraticBasisFunction, 230, "TestComputeTransformedQuadraticBasisFunction2d" ) {}
 void runTest() { suite_TestQuadraticBasisFunction.TestComputeTransformedQuadraticBasisFunction2d(); }
} testDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunction2d;

static class TestDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunction3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunction3d() : CxxTest::RealTestDescription( Tests_TestQuadraticBasisFunction, suiteDescription_TestQuadraticBasisFunction, 271, "TestComputeTransformedQuadraticBasisFunction3d" ) {}
 void runTest() { suite_TestQuadraticBasisFunction.TestComputeTransformedQuadraticBasisFunction3d(); }
} testDescription_TestQuadraticBasisFunction_TestComputeTransformedQuadraticBasisFunction3d;

#include <cxxtest/Root.cpp>
