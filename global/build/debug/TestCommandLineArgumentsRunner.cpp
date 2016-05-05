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
#include "global/test/TestCommandLineArguments.hpp"

static TestCommandLineArguments suite_TestCommandLineArguments;

static CxxTest::List Tests_TestCommandLineArguments = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCommandLineArguments( "global/test/TestCommandLineArguments.hpp", 70, "TestCommandLineArguments", suite_TestCommandLineArguments, Tests_TestCommandLineArguments );

static class TestDescription_TestCommandLineArguments_TestCommandLineArgumentsSingleton : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCommandLineArguments_TestCommandLineArgumentsSingleton() : CxxTest::RealTestDescription( Tests_TestCommandLineArguments, suiteDescription_TestCommandLineArguments, 74, "TestCommandLineArgumentsSingleton" ) {}
 void runTest() { suite_TestCommandLineArguments.TestCommandLineArgumentsSingleton(); }
} testDescription_TestCommandLineArguments_TestCommandLineArgumentsSingleton;

static class TestDescription_TestCommandLineArguments_TestCommandLineArgumentsMocker : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCommandLineArguments_TestCommandLineArgumentsMocker() : CxxTest::RealTestDescription( Tests_TestCommandLineArguments, suiteDescription_TestCommandLineArguments, 261, "TestCommandLineArgumentsMocker" ) {}
 void runTest() { suite_TestCommandLineArguments.TestCommandLineArgumentsMocker(); }
} testDescription_TestCommandLineArguments_TestCommandLineArgumentsMocker;

static class TestDescription_TestCommandLineArguments_TestCommandLineArgumentsParrotting : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCommandLineArguments_TestCommandLineArgumentsParrotting() : CxxTest::RealTestDescription( Tests_TestCommandLineArguments, suiteDescription_TestCommandLineArguments, 300, "TestCommandLineArgumentsParrotting" ) {}
 void runTest() { suite_TestCommandLineArguments.TestCommandLineArgumentsParrotting(); }
} testDescription_TestCommandLineArguments_TestCommandLineArgumentsParrotting;

#include <cxxtest/Root.cpp>
