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
#include "global/test/TestLogFile.hpp"

static TestLogFile suite_TestLogFile;

static CxxTest::List Tests_TestLogFile = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLogFile( "global/test/TestLogFile.hpp", 48, "TestLogFile", suite_TestLogFile, Tests_TestLogFile );

static class TestDescription_TestLogFile_TestLogFileCreate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestLogFileCreate() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 52, "TestLogFileCreate" ) {}
 void runTest() { suite_TestLogFile.TestLogFileCreate(); }
} testDescription_TestLogFile_TestLogFileCreate;

static class TestDescription_TestLogFile_TestLogStillExists : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestLogStillExists() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 68, "TestLogStillExists" ) {}
 void runTest() { suite_TestLogFile.TestLogStillExists(); }
} testDescription_TestLogFile_TestLogStillExists;

static class TestDescription_TestLogFile_TestClose : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestClose() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 74, "TestClose" ) {}
 void runTest() { suite_TestLogFile.TestClose(); }
} testDescription_TestLogFile_TestClose;

static class TestDescription_TestLogFile_TestWritingToFile1 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestWritingToFile1() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 83, "TestWritingToFile1" ) {}
 void runTest() { suite_TestLogFile.TestWritingToFile1(); }
} testDescription_TestLogFile_TestWritingToFile1;

static class TestDescription_TestLogFile_TestWritingToFile2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestWritingToFile2() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 92, "TestWritingToFile2" ) {}
 void runTest() { suite_TestLogFile.TestWritingToFile2(); }
} testDescription_TestLogFile_TestWritingToFile2;

static class TestDescription_TestLogFile_TestWritingToNoFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestWritingToNoFile() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 108, "TestWritingToNoFile" ) {}
 void runTest() { suite_TestLogFile.TestWritingToNoFile(); }
} testDescription_TestLogFile_TestWritingToNoFile;

static class TestDescription_TestLogFile_TestWritingToNewFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestWritingToNewFiles() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 116, "TestWritingToNewFiles" ) {}
 void runTest() { suite_TestLogFile.TestWritingToNewFiles(); }
} testDescription_TestLogFile_TestWritingToNewFiles;

static class TestDescription_TestLogFile_TestUsingMacroAndLevels : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestUsingMacroAndLevels() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 133, "TestUsingMacroAndLevels" ) {}
 void runTest() { suite_TestLogFile.TestUsingMacroAndLevels(); }
} testDescription_TestLogFile_TestUsingMacroAndLevels;

static class TestDescription_TestLogFile_TestHeaderAndElapsedTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLogFile_TestHeaderAndElapsedTime() : CxxTest::RealTestDescription( Tests_TestLogFile, suiteDescription_TestLogFile, 156, "TestHeaderAndElapsedTime" ) {}
 void runTest() { suite_TestLogFile.TestHeaderAndElapsedTime(); }
} testDescription_TestLogFile_TestHeaderAndElapsedTime;

#include <cxxtest/Root.cpp>
