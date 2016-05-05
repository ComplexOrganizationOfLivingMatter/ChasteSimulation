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
#include "heart/test/postprocessing/TestPostProcessingWriter.hpp"

static TestPostProcessingWriter suite_TestPostProcessingWriter;

static CxxTest::List Tests_TestPostProcessingWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPostProcessingWriter( "heart/test/postprocessing/TestPostProcessingWriter.hpp", 60, "TestPostProcessingWriter", suite_TestPostProcessingWriter, Tests_TestPostProcessingWriter );

static class TestDescription_TestPostProcessingWriter_TestWriterMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestWriterMethods() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 91, "TestWriterMethods" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestWriterMethods(); }
} testDescription_TestPostProcessingWriter_TestWriterMethods;

static class TestDescription_TestPostProcessingWriter_TestApdWritingWithNoApdsPresent : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestApdWritingWithNoApdsPresent() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 150, "TestApdWritingWithNoApdsPresent" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestApdWritingWithNoApdsPresent(); }
} testDescription_TestPostProcessingWriter_TestApdWritingWithNoApdsPresent;

static class TestDescription_TestPostProcessingWriter_TestPostProcessWriting : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestPostProcessWriting() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 178, "TestPostProcessWriting" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestPostProcessWriting(); }
} testDescription_TestPostProcessingWriter_TestPostProcessWriting;

static class TestDescription_TestPostProcessingWriter_TestExtractNodeTracesWithNodePermutation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestExtractNodeTracesWithNodePermutation() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 289, "TestExtractNodeTracesWithNodePermutation" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestExtractNodeTracesWithNodePermutation(); }
} testDescription_TestPostProcessingWriter_TestExtractNodeTracesWithNodePermutation;

static class TestDescription_TestPostProcessingWriter_TestWritingEads : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestWritingEads() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 337, "TestWritingEads" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestWritingEads(); }
} testDescription_TestPostProcessingWriter_TestWritingEads;

static class TestDescription_TestPostProcessingWriter_TestSwitchingOutputFormat : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestSwitchingOutputFormat() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 357, "TestSwitchingOutputFormat" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestSwitchingOutputFormat(); }
} testDescription_TestPostProcessingWriter_TestSwitchingOutputFormat;

static class TestDescription_TestPostProcessingWriter_TestHdfOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestHdfOutput() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 417, "TestHdfOutput" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestHdfOutput(); }
} testDescription_TestPostProcessingWriter_TestHdfOutput;

static class TestDescription_TestPostProcessingWriter_TestVtkOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestVtkOutput() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 471, "TestVtkOutput" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestVtkOutput(); }
} testDescription_TestPostProcessingWriter_TestVtkOutput;

static class TestDescription_TestPostProcessingWriter_TestDifferentNumberOfPaces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPostProcessingWriter_TestDifferentNumberOfPaces() : CxxTest::RealTestDescription( Tests_TestPostProcessingWriter, suiteDescription_TestPostProcessingWriter, 537, "TestDifferentNumberOfPaces" ) {}
 void runTest() { suite_TestPostProcessingWriter.TestDifferentNumberOfPaces(); }
} testDescription_TestPostProcessingWriter_TestDifferentNumberOfPaces;

#include <cxxtest/Root.cpp>
