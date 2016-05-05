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
#include "heart/test/ionicmodels/TestCvodeWithJacobian.hpp"

static TestCvodeWithJacobian suite_TestCvodeWithJacobian;

static CxxTest::List Tests_TestCvodeWithJacobian = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCvodeWithJacobian( "heart/test/ionicmodels/TestCvodeWithJacobian.hpp", 69, "TestCvodeWithJacobian", suite_TestCvodeWithJacobian, Tests_TestCvodeWithJacobian );

static class TestDescription_TestCvodeWithJacobian_TestTimingsWithAndWithoutJacobian : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeWithJacobian_TestTimingsWithAndWithoutJacobian() : CxxTest::RealTestDescription( Tests_TestCvodeWithJacobian, suiteDescription_TestCvodeWithJacobian, 72, "TestTimingsWithAndWithoutJacobian" ) {}
 void runTest() { suite_TestCvodeWithJacobian.TestTimingsWithAndWithoutJacobian(); }
} testDescription_TestCvodeWithJacobian_TestTimingsWithAndWithoutJacobian;

#include <cxxtest/Root.cpp>
