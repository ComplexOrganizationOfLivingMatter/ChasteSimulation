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
#include "global/test/TestMathsCustomFunctions.hpp"

static TestMathsCustomFunctions suite_TestMathsCustomFunctions;

static CxxTest::List Tests_TestMathsCustomFunctions = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMathsCustomFunctions( "global/test/TestMathsCustomFunctions.hpp", 45, "TestMathsCustomFunctions", suite_TestMathsCustomFunctions, Tests_TestMathsCustomFunctions );

static class TestDescription_TestMathsCustomFunctions_TestSmallPow : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMathsCustomFunctions_TestSmallPow() : CxxTest::RealTestDescription( Tests_TestMathsCustomFunctions, suiteDescription_TestMathsCustomFunctions, 49, "TestSmallPow" ) {}
 void runTest() { suite_TestMathsCustomFunctions.TestSmallPow(); }
} testDescription_TestMathsCustomFunctions_TestSmallPow;

static class TestDescription_TestMathsCustomFunctions_TestDivides : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMathsCustomFunctions_TestDivides() : CxxTest::RealTestDescription( Tests_TestMathsCustomFunctions, suiteDescription_TestMathsCustomFunctions, 65, "TestDivides" ) {}
 void runTest() { suite_TestMathsCustomFunctions.TestDivides(); }
} testDescription_TestMathsCustomFunctions_TestDivides;

static class TestDescription_TestMathsCustomFunctions_TestCeilDivide : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMathsCustomFunctions_TestCeilDivide() : CxxTest::RealTestDescription( Tests_TestMathsCustomFunctions, suiteDescription_TestMathsCustomFunctions, 81, "TestCeilDivide" ) {}
 void runTest() { suite_TestMathsCustomFunctions.TestCeilDivide(); }
} testDescription_TestMathsCustomFunctions_TestCeilDivide;

static class TestDescription_TestMathsCustomFunctions_TestSignum : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMathsCustomFunctions_TestSignum() : CxxTest::RealTestDescription( Tests_TestMathsCustomFunctions, suiteDescription_TestMathsCustomFunctions, 92, "TestSignum" ) {}
 void runTest() { suite_TestMathsCustomFunctions.TestSignum(); }
} testDescription_TestMathsCustomFunctions_TestSignum;

static class TestDescription_TestMathsCustomFunctions_TestCompareDoubles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMathsCustomFunctions_TestCompareDoubles() : CxxTest::RealTestDescription( Tests_TestMathsCustomFunctions, suiteDescription_TestMathsCustomFunctions, 102, "TestCompareDoubles" ) {}
 void runTest() { suite_TestMathsCustomFunctions.TestCompareDoubles(); }
} testDescription_TestMathsCustomFunctions_TestCompareDoubles;

#include <cxxtest/Root.cpp>
