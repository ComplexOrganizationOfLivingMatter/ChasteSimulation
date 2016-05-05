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
#include "io/test/TestParallelColumnDataReaderWriter.hpp"

static TestParallelColumnDataReaderWriter suite_TestParallelColumnDataReaderWriter;

static CxxTest::List Tests_TestParallelColumnDataReaderWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestParallelColumnDataReaderWriter( "io/test/TestParallelColumnDataReaderWriter.hpp", 51, "TestParallelColumnDataReaderWriter", suite_TestParallelColumnDataReaderWriter, Tests_TestParallelColumnDataReaderWriter );

static class TestDescription_TestParallelColumnDataReaderWriter_TestParallelColumnWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParallelColumnDataReaderWriter_TestParallelColumnWriter() : CxxTest::RealTestDescription( Tests_TestParallelColumnDataReaderWriter, suiteDescription_TestParallelColumnDataReaderWriter, 62, "TestParallelColumnWriter" ) {}
 void runTest() { suite_TestParallelColumnDataReaderWriter.TestParallelColumnWriter(); }
} testDescription_TestParallelColumnDataReaderWriter_TestParallelColumnWriter;

static class TestDescription_TestParallelColumnDataReaderWriter_TestPutSlice : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParallelColumnDataReaderWriter_TestPutSlice() : CxxTest::RealTestDescription( Tests_TestParallelColumnDataReaderWriter, suiteDescription_TestParallelColumnDataReaderWriter, 195, "TestPutSlice" ) {}
 void runTest() { suite_TestParallelColumnDataReaderWriter.TestPutSlice(); }
} testDescription_TestParallelColumnDataReaderWriter_TestPutSlice;

static class TestDescription_TestParallelColumnDataReaderWriter_TestColumnReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParallelColumnDataReaderWriter_TestColumnReader() : CxxTest::RealTestDescription( Tests_TestParallelColumnDataReaderWriter, suiteDescription_TestParallelColumnDataReaderWriter, 254, "TestColumnReader" ) {}
 void runTest() { suite_TestParallelColumnDataReaderWriter.TestColumnReader(); }
} testDescription_TestParallelColumnDataReaderWriter_TestColumnReader;

#include <cxxtest/Root.cpp>
