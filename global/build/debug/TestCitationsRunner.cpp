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
#include "global/test/TestCitations.hpp"

static TestCitations suite_TestCitations;

static CxxTest::List Tests_TestCitations = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCitations( "global/test/TestCitations.hpp", 47, "TestCitations", suite_TestCitations, Tests_TestCitations );

static class TestDescription_TestCitations_TestChasteCitation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCitations_TestChasteCitation() : CxxTest::RealTestDescription( Tests_TestCitations, suiteDescription_TestCitations, 50, "TestChasteCitation" ) {}
 void runTest() { suite_TestCitations.TestChasteCitation(); }
} testDescription_TestCitations_TestChasteCitation;

#include <cxxtest/Root.cpp>
