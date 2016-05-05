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
#include "global/test/TestExecutableSupport.hpp"

static TestExecutableSupport suite_TestExecutableSupport;

static CxxTest::List Tests_TestExecutableSupport = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestExecutableSupport( "global/test/TestExecutableSupport.hpp", 48, "TestExecutableSupport", suite_TestExecutableSupport, Tests_TestExecutableSupport );

static class TestDescription_TestExecutableSupport_TestStaticMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExecutableSupport_TestStaticMethods() : CxxTest::RealTestDescription( Tests_TestExecutableSupport, suiteDescription_TestExecutableSupport, 51, "TestStaticMethods" ) {}
 void runTest() { suite_TestExecutableSupport.TestStaticMethods(); }
} testDescription_TestExecutableSupport_TestStaticMethods;

#include <cxxtest/Root.cpp>
