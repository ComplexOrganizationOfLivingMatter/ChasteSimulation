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
#include "crypt/test/population/TestCellBetaCateninWriter.hpp"

static TestCellBetaCateninWriter suite_TestCellBetaCateninWriter;

static CxxTest::List Tests_TestCellBetaCateninWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellBetaCateninWriter( "crypt/test/population/TestCellBetaCateninWriter.hpp", 52, "TestCellBetaCateninWriter", suite_TestCellBetaCateninWriter, Tests_TestCellBetaCateninWriter );

static class TestDescription_TestCellBetaCateninWriter_TestWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBetaCateninWriter_TestWriter() : CxxTest::RealTestDescription( Tests_TestCellBetaCateninWriter, suiteDescription_TestCellBetaCateninWriter, 56, "TestWriter" ) {}
 void runTest() { suite_TestCellBetaCateninWriter.TestWriter(); }
} testDescription_TestCellBetaCateninWriter_TestWriter;

static class TestDescription_TestCellBetaCateninWriter_TestCellBetaCateninWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBetaCateninWriter_TestCellBetaCateninWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellBetaCateninWriter, suiteDescription_TestCellBetaCateninWriter, 111, "TestCellBetaCateninWriterArchiving" ) {}
 void runTest() { suite_TestCellBetaCateninWriter.TestCellBetaCateninWriterArchiving(); }
} testDescription_TestCellBetaCateninWriter_TestCellBetaCateninWriterArchiving;

static class TestDescription_TestCellBetaCateninWriter_TestUseInPopulationWriteResultsToFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBetaCateninWriter_TestUseInPopulationWriteResultsToFile() : CxxTest::RealTestDescription( Tests_TestCellBetaCateninWriter, suiteDescription_TestCellBetaCateninWriter, 140, "TestUseInPopulationWriteResultsToFile" ) {}
 void runTest() { suite_TestCellBetaCateninWriter.TestUseInPopulationWriteResultsToFile(); }
} testDescription_TestCellBetaCateninWriter_TestUseInPopulationWriteResultsToFile;

#include <cxxtest/Root.cpp>
