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
#include "global/test/TestNumericFileComparison.hpp"

static TestNumericFileComparison suite_TestNumericFileComparison;

static CxxTest::List Tests_TestNumericFileComparison = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNumericFileComparison( "global/test/TestNumericFileComparison.hpp", 50, "TestNumericFileComparison", suite_TestNumericFileComparison, Tests_TestNumericFileComparison );

static class TestDescription_TestNumericFileComparison_TestBasicFunctionality : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNumericFileComparison_TestBasicFunctionality() : CxxTest::RealTestDescription( Tests_TestNumericFileComparison, suiteDescription_TestNumericFileComparison, 58, "TestBasicFunctionality" ) {}
 void runTest() { suite_TestNumericFileComparison.TestBasicFunctionality(); }
} testDescription_TestNumericFileComparison_TestBasicFunctionality;

static class TestDescription_TestNumericFileComparison_TestIgnoreHeader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNumericFileComparison_TestIgnoreHeader() : CxxTest::RealTestDescription( Tests_TestNumericFileComparison, suiteDescription_TestNumericFileComparison, 76, "TestIgnoreHeader" ) {}
 void runTest() { suite_TestNumericFileComparison.TestIgnoreHeader(); }
} testDescription_TestNumericFileComparison_TestIgnoreHeader;

static class TestDescription_TestNumericFileComparison_TestIgnoreProvenanceComment : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNumericFileComparison_TestIgnoreProvenanceComment() : CxxTest::RealTestDescription( Tests_TestNumericFileComparison, suiteDescription_TestNumericFileComparison, 87, "TestIgnoreProvenanceComment" ) {}
 void runTest() { suite_TestNumericFileComparison.TestIgnoreProvenanceComment(); }
} testDescription_TestNumericFileComparison_TestIgnoreProvenanceComment;

static class TestDescription_TestNumericFileComparison_TestRelativeDifference : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNumericFileComparison_TestRelativeDifference() : CxxTest::RealTestDescription( Tests_TestNumericFileComparison, suiteDescription_TestNumericFileComparison, 98, "TestRelativeDifference" ) {}
 void runTest() { suite_TestNumericFileComparison.TestRelativeDifference(); }
} testDescription_TestNumericFileComparison_TestRelativeDifference;

#include <cxxtest/Root.cpp>
