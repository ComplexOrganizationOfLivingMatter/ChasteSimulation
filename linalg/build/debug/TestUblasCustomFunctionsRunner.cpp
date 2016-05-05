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
#include "linalg/test/TestUblasCustomFunctions.hpp"

static TestUblasCustomFunctions suite_TestUblasCustomFunctions;

static CxxTest::List Tests_TestUblasCustomFunctions = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestUblasCustomFunctions( "linalg/test/TestUblasCustomFunctions.hpp", 46, "TestUblasCustomFunctions", suite_TestUblasCustomFunctions, Tests_TestUblasCustomFunctions );

static class TestDescription_TestUblasCustomFunctions_TestDeterminant : public CxxTest::RealTestDescription {
public:
 TestDescription_TestUblasCustomFunctions_TestDeterminant() : CxxTest::RealTestDescription( Tests_TestUblasCustomFunctions, suiteDescription_TestUblasCustomFunctions, 50, "TestDeterminant" ) {}
 void runTest() { suite_TestUblasCustomFunctions.TestDeterminant(); }
} testDescription_TestUblasCustomFunctions_TestDeterminant;

static class TestDescription_TestUblasCustomFunctions_TestSubDeterminant : public CxxTest::RealTestDescription {
public:
 TestDescription_TestUblasCustomFunctions_TestSubDeterminant() : CxxTest::RealTestDescription( Tests_TestUblasCustomFunctions, suiteDescription_TestUblasCustomFunctions, 105, "TestSubDeterminant" ) {}
 void runTest() { suite_TestUblasCustomFunctions.TestSubDeterminant(); }
} testDescription_TestUblasCustomFunctions_TestSubDeterminant;

static class TestDescription_TestUblasCustomFunctions_TestInverse : public CxxTest::RealTestDescription {
public:
 TestDescription_TestUblasCustomFunctions_TestInverse() : CxxTest::RealTestDescription( Tests_TestUblasCustomFunctions, suiteDescription_TestUblasCustomFunctions, 163, "TestInverse" ) {}
 void runTest() { suite_TestUblasCustomFunctions.TestInverse(); }
} testDescription_TestUblasCustomFunctions_TestInverse;

static class TestDescription_TestUblasCustomFunctions_TestTraceAndSecondInvariant : public CxxTest::RealTestDescription {
public:
 TestDescription_TestUblasCustomFunctions_TestTraceAndSecondInvariant() : CxxTest::RealTestDescription( Tests_TestUblasCustomFunctions, suiteDescription_TestUblasCustomFunctions, 255, "TestTraceAndSecondInvariant" ) {}
 void runTest() { suite_TestUblasCustomFunctions.TestTraceAndSecondInvariant(); }
} testDescription_TestUblasCustomFunctions_TestTraceAndSecondInvariant;

static class TestDescription_TestUblasCustomFunctions_TestUblasMatrixRow : public CxxTest::RealTestDescription {
public:
 TestDescription_TestUblasCustomFunctions_TestUblasMatrixRow() : CxxTest::RealTestDescription( Tests_TestUblasCustomFunctions, suiteDescription_TestUblasCustomFunctions, 297, "TestUblasMatrixRow" ) {}
 void runTest() { suite_TestUblasCustomFunctions.TestUblasMatrixRow(); }
} testDescription_TestUblasCustomFunctions_TestUblasMatrixRow;

static class TestDescription_TestUblasCustomFunctions_TestCreate_c_vector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestUblasCustomFunctions_TestCreate_c_vector() : CxxTest::RealTestDescription( Tests_TestUblasCustomFunctions, suiteDescription_TestUblasCustomFunctions, 318, "TestCreate_c_vector" ) {}
 void runTest() { suite_TestUblasCustomFunctions.TestCreate_c_vector(); }
} testDescription_TestUblasCustomFunctions_TestCreate_c_vector;

static class TestDescription_TestUblasCustomFunctions_TestEigenVectorValueCalculation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestUblasCustomFunctions_TestEigenVectorValueCalculation() : CxxTest::RealTestDescription( Tests_TestUblasCustomFunctions, suiteDescription_TestUblasCustomFunctions, 333, "TestEigenVectorValueCalculation" ) {}
 void runTest() { suite_TestUblasCustomFunctions.TestEigenVectorValueCalculation(); }
} testDescription_TestUblasCustomFunctions_TestEigenVectorValueCalculation;

#include <cxxtest/Root.cpp>
