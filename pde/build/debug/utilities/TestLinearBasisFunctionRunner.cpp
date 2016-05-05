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
#include "pde/test/utilities/TestLinearBasisFunction.hpp"

static TestLinearBasisFunction suite_TestLinearBasisFunction;

static CxxTest::List Tests_TestLinearBasisFunction = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLinearBasisFunction( "pde/test/utilities/TestLinearBasisFunction.hpp", 49, "TestLinearBasisFunction", suite_TestLinearBasisFunction, Tests_TestLinearBasisFunction );

static class TestDescription_TestLinearBasisFunction_TestLinearBasisFunction0d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearBasisFunction_TestLinearBasisFunction0d() : CxxTest::RealTestDescription( Tests_TestLinearBasisFunction, suiteDescription_TestLinearBasisFunction, 53, "TestLinearBasisFunction0d" ) {}
 void runTest() { suite_TestLinearBasisFunction.TestLinearBasisFunction0d(); }
} testDescription_TestLinearBasisFunction_TestLinearBasisFunction0d;

static class TestDescription_TestLinearBasisFunction_TestLinearBasisFunction1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearBasisFunction_TestLinearBasisFunction1d() : CxxTest::RealTestDescription( Tests_TestLinearBasisFunction, suiteDescription_TestLinearBasisFunction, 73, "TestLinearBasisFunction1d" ) {}
 void runTest() { suite_TestLinearBasisFunction.TestLinearBasisFunction1d(); }
} testDescription_TestLinearBasisFunction_TestLinearBasisFunction1d;

static class TestDescription_TestLinearBasisFunction_TestLinearBasisFunction2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearBasisFunction_TestLinearBasisFunction2d() : CxxTest::RealTestDescription( Tests_TestLinearBasisFunction, suiteDescription_TestLinearBasisFunction, 92, "TestLinearBasisFunction2d" ) {}
 void runTest() { suite_TestLinearBasisFunction.TestLinearBasisFunction2d(); }
} testDescription_TestLinearBasisFunction_TestLinearBasisFunction2d;

static class TestDescription_TestLinearBasisFunction_TestLinearBasisFunction3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearBasisFunction_TestLinearBasisFunction3d() : CxxTest::RealTestDescription( Tests_TestLinearBasisFunction, suiteDescription_TestLinearBasisFunction, 114, "TestLinearBasisFunction3d" ) {}
 void runTest() { suite_TestLinearBasisFunction.TestLinearBasisFunction3d(); }
} testDescription_TestLinearBasisFunction_TestLinearBasisFunction3d;

static class TestDescription_TestLinearBasisFunction_TestComputeTransformedBasisFunctionDerivatives : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearBasisFunction_TestComputeTransformedBasisFunctionDerivatives() : CxxTest::RealTestDescription( Tests_TestLinearBasisFunction, suiteDescription_TestLinearBasisFunction, 139, "TestComputeTransformedBasisFunctionDerivatives" ) {}
 void runTest() { suite_TestLinearBasisFunction.TestComputeTransformedBasisFunctionDerivatives(); }
} testDescription_TestLinearBasisFunction_TestComputeTransformedBasisFunctionDerivatives;

static class TestDescription_TestLinearBasisFunction_TestComputeTransformedBasisFunction2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearBasisFunction_TestComputeTransformedBasisFunction2() : CxxTest::RealTestDescription( Tests_TestLinearBasisFunction, suiteDescription_TestLinearBasisFunction, 179, "TestComputeTransformedBasisFunction2" ) {}
 void runTest() { suite_TestLinearBasisFunction.TestComputeTransformedBasisFunction2(); }
} testDescription_TestLinearBasisFunction_TestComputeTransformedBasisFunction2;

#include <cxxtest/Root.cpp>
