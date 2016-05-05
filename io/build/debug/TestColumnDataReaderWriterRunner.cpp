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
#include "io/test/TestColumnDataReaderWriter.hpp"

static TestColumnDataReaderWriter suite_TestColumnDataReaderWriter;

static CxxTest::List Tests_TestColumnDataReaderWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestColumnDataReaderWriter( "io/test/TestColumnDataReaderWriter.hpp", 50, "TestColumnDataReaderWriter", suite_TestColumnDataReaderWriter, Tests_TestColumnDataReaderWriter );

static class TestDescription_TestColumnDataReaderWriter_TestCreateColumnWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestCreateColumnWriter() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 105, "TestCreateColumnWriter" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestCreateColumnWriter(); }
} testDescription_TestColumnDataReaderWriter_TestCreateColumnWriter;

static class TestDescription_TestColumnDataReaderWriter_TestCreateColumnReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestCreateColumnReader() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 117, "TestCreateColumnReader" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestCreateColumnReader(); }
} testDescription_TestColumnDataReaderWriter_TestCreateColumnReader;

static class TestDescription_TestColumnDataReaderWriter_TestDetermineFieldWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestDetermineFieldWidth() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 141, "TestDetermineFieldWidth" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestDetermineFieldWidth(); }
} testDescription_TestColumnDataReaderWriter_TestDetermineFieldWidth;

static class TestDescription_TestColumnDataReaderWriter_TestDefineUnlimitedDimension : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestDefineUnlimitedDimension() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 155, "TestDefineUnlimitedDimension" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestDefineUnlimitedDimension(); }
} testDescription_TestColumnDataReaderWriter_TestDefineUnlimitedDimension;

static class TestDescription_TestColumnDataReaderWriter_TestDefineFixedDimension : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestDefineFixedDimension() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 172, "TestDefineFixedDimension" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestDefineFixedDimension(); }
} testDescription_TestColumnDataReaderWriter_TestDefineFixedDimension;

static class TestDescription_TestColumnDataReaderWriter_TestDefineVariable : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestDefineVariable() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 187, "TestDefineVariable" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestDefineVariable(); }
} testDescription_TestColumnDataReaderWriter_TestDefineVariable;

static class TestDescription_TestColumnDataReaderWriter_TestEndDefineMode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestEndDefineMode() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 211, "TestEndDefineMode" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestEndDefineMode(); }
} testDescription_TestColumnDataReaderWriter_TestEndDefineMode;

static class TestDescription_TestColumnDataReaderWriter_TestCantAddUnlimitedAfterEndDefine : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestCantAddUnlimitedAfterEndDefine() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 249, "TestCantAddUnlimitedAfterEndDefine" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestCantAddUnlimitedAfterEndDefine(); }
} testDescription_TestColumnDataReaderWriter_TestCantAddUnlimitedAfterEndDefine;

static class TestDescription_TestColumnDataReaderWriter_TestPutVariableInUnlimitedFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestPutVariableInUnlimitedFile() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 268, "TestPutVariableInUnlimitedFile" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestPutVariableInUnlimitedFile(); }
} testDescription_TestColumnDataReaderWriter_TestPutVariableInUnlimitedFile;

static class TestDescription_TestColumnDataReaderWriter_TestPutNegativeVariable : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestPutNegativeVariable() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 322, "TestPutNegativeVariable" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestPutNegativeVariable(); }
} testDescription_TestColumnDataReaderWriter_TestPutNegativeVariable;

static class TestDescription_TestColumnDataReaderWriter_TestPutVariableInFixedFileAndPrecision : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestPutVariableInFixedFileAndPrecision() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 370, "TestPutVariableInFixedFileAndPrecision" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestPutVariableInFixedFileAndPrecision(); }
} testDescription_TestColumnDataReaderWriter_TestPutVariableInFixedFileAndPrecision;

static class TestDescription_TestColumnDataReaderWriter_TestReadingAnOlderFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestReadingAnOlderFile() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 467, "TestReadingAnOlderFile" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestReadingAnOlderFile(); }
} testDescription_TestColumnDataReaderWriter_TestReadingAnOlderFile;

static class TestDescription_TestColumnDataReaderWriter_TestReadingAnotherOldFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestReadingAnotherOldFile() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 479, "TestReadingAnotherOldFile" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestReadingAnotherOldFile(); }
} testDescription_TestColumnDataReaderWriter_TestReadingAnotherOldFile;

static class TestDescription_TestColumnDataReaderWriter_TestPutNegativeVariableInFixedFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestPutNegativeVariableInFixedFile() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 488, "TestPutNegativeVariableInFixedFile" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestPutNegativeVariableInFixedFile(); }
} testDescription_TestColumnDataReaderWriter_TestPutNegativeVariableInFixedFile;

static class TestDescription_TestColumnDataReaderWriter_TestPutVariableInFixedandUnlimitedFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestPutVariableInFixedandUnlimitedFile() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 530, "TestPutVariableInFixedandUnlimitedFile" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestPutVariableInFixedandUnlimitedFile(); }
} testDescription_TestColumnDataReaderWriter_TestPutVariableInFixedandUnlimitedFile;

static class TestDescription_TestColumnDataReaderWriter_TestNegativeWithFixedAndUnlimitedDefined : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestNegativeWithFixedAndUnlimitedDefined() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 615, "TestNegativeWithFixedAndUnlimitedDefined" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestNegativeWithFixedAndUnlimitedDefined(); }
} testDescription_TestColumnDataReaderWriter_TestNegativeWithFixedAndUnlimitedDefined;

static class TestDescription_TestColumnDataReaderWriter_TestReadingFileWithVerySmallHighPrecisionNumbers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestReadingFileWithVerySmallHighPrecisionNumbers() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 653, "TestReadingFileWithVerySmallHighPrecisionNumbers" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestReadingFileWithVerySmallHighPrecisionNumbers(); }
} testDescription_TestColumnDataReaderWriter_TestReadingFileWithVerySmallHighPrecisionNumbers;

static class TestDescription_TestColumnDataReaderWriter_TestWritingAndReadingWithThreeDigitExponents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestColumnDataReaderWriter_TestWritingAndReadingWithThreeDigitExponents() : CxxTest::RealTestDescription( Tests_TestColumnDataReaderWriter, suiteDescription_TestColumnDataReaderWriter, 716, "TestWritingAndReadingWithThreeDigitExponents" ) {}
 void runTest() { suite_TestColumnDataReaderWriter.TestWritingAndReadingWithThreeDigitExponents(); }
} testDescription_TestColumnDataReaderWriter_TestWritingAndReadingWithThreeDigitExponents;

#include <cxxtest/Root.cpp>
