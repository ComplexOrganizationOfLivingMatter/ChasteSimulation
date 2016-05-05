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
#include "global/test/TestFileComparison.hpp"

static TestFileComparison suite_TestFileComparison;

static CxxTest::List Tests_TestFileComparison = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFileComparison( "global/test/TestFileComparison.hpp", 51, "TestFileComparison", suite_TestFileComparison, Tests_TestFileComparison );

static class TestDescription_TestFileComparison_TestBasicFunctionality : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileComparison_TestBasicFunctionality() : CxxTest::RealTestDescription( Tests_TestFileComparison, suiteDescription_TestFileComparison, 59, "TestBasicFunctionality" ) {}
 void runTest() { suite_TestFileComparison.TestBasicFunctionality(); }
} testDescription_TestFileComparison_TestBasicFunctionality;

static class TestDescription_TestFileComparison_TestParallelOperation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileComparison_TestParallelOperation() : CxxTest::RealTestDescription( Tests_TestFileComparison, suiteDescription_TestFileComparison, 82, "TestParallelOperation" ) {}
 void runTest() { suite_TestFileComparison.TestParallelOperation(); }
} testDescription_TestFileComparison_TestParallelOperation;

static class TestDescription_TestFileComparison_TestFileFinderInterface : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileComparison_TestFileFinderInterface() : CxxTest::RealTestDescription( Tests_TestFileComparison, suiteDescription_TestFileComparison, 94, "TestFileFinderInterface" ) {}
 void runTest() { suite_TestFileComparison.TestFileFinderInterface(); }
} testDescription_TestFileComparison_TestFileFinderInterface;

static class TestDescription_TestFileComparison_TestIgnoreHeader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileComparison_TestIgnoreHeader() : CxxTest::RealTestDescription( Tests_TestFileComparison, suiteDescription_TestFileComparison, 105, "TestIgnoreHeader" ) {}
 void runTest() { suite_TestFileComparison.TestIgnoreHeader(); }
} testDescription_TestFileComparison_TestIgnoreHeader;

static class TestDescription_TestFileComparison_TestIgnoreBlankLines : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileComparison_TestIgnoreBlankLines() : CxxTest::RealTestDescription( Tests_TestFileComparison, suiteDescription_TestFileComparison, 128, "TestIgnoreBlankLines" ) {}
 void runTest() { suite_TestFileComparison.TestIgnoreBlankLines(); }
} testDescription_TestFileComparison_TestIgnoreBlankLines;

static class TestDescription_TestFileComparison_TestBinaryFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileComparison_TestBinaryFiles() : CxxTest::RealTestDescription( Tests_TestFileComparison, suiteDescription_TestFileComparison, 147, "TestBinaryFiles" ) {}
 void runTest() { suite_TestFileComparison.TestBinaryFiles(); }
} testDescription_TestFileComparison_TestBinaryFiles;

#include <cxxtest/Root.cpp>
