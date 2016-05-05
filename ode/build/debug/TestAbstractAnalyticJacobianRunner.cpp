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
#include "ode/test/TestAbstractAnalyticJacobian.hpp"

static TestAbstractAnalyticJacobian suite_TestAbstractAnalyticJacobian;

static CxxTest::List Tests_TestAbstractAnalyticJacobian = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractAnalyticJacobian( "ode/test/TestAbstractAnalyticJacobian.hpp", 54, "TestAbstractAnalyticJacobian", suite_TestAbstractAnalyticJacobian, Tests_TestAbstractAnalyticJacobian );

static class TestDescription_TestAbstractAnalyticJacobian_TestJacobianOne : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractAnalyticJacobian_TestJacobianOne() : CxxTest::RealTestDescription( Tests_TestAbstractAnalyticJacobian, suiteDescription_TestAbstractAnalyticJacobian, 58, "TestJacobianOne" ) {}
 void runTest() { suite_TestAbstractAnalyticJacobian.TestJacobianOne(); }
} testDescription_TestAbstractAnalyticJacobian_TestJacobianOne;

static class TestDescription_TestAbstractAnalyticJacobian_TestJacobianTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractAnalyticJacobian_TestJacobianTwo() : CxxTest::RealTestDescription( Tests_TestAbstractAnalyticJacobian, suiteDescription_TestAbstractAnalyticJacobian, 81, "TestJacobianTwo" ) {}
 void runTest() { suite_TestAbstractAnalyticJacobian.TestJacobianTwo(); }
} testDescription_TestAbstractAnalyticJacobian_TestJacobianTwo;

#include <cxxtest/Root.cpp>
