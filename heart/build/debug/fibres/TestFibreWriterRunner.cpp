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
#include "heart/test/fibres/TestFibreWriter.hpp"

static TestFibreWriter suite_TestFibreWriter;

static CxxTest::List Tests_TestFibreWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFibreWriter( "heart/test/fibres/TestFibreWriter.hpp", 54, "TestFibreWriter", suite_TestFibreWriter, Tests_TestFibreWriter );

static class TestDescription_TestFibreWriter_TestAxiWriterAscii : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreWriter_TestAxiWriterAscii() : CxxTest::RealTestDescription( Tests_TestFibreWriter, suiteDescription_TestFibreWriter, 57, "TestAxiWriterAscii" ) {}
 void runTest() { suite_TestFibreWriter.TestAxiWriterAscii(); }
} testDescription_TestFibreWriter_TestAxiWriterAscii;

static class TestDescription_TestFibreWriter_TestAxiWriterBinary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreWriter_TestAxiWriterBinary() : CxxTest::RealTestDescription( Tests_TestFibreWriter, suiteDescription_TestFibreWriter, 73, "TestAxiWriterBinary" ) {}
 void runTest() { suite_TestFibreWriter.TestAxiWriterBinary(); }
} testDescription_TestFibreWriter_TestAxiWriterBinary;

static class TestDescription_TestFibreWriter_TestOrthoWriterAscii : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreWriter_TestOrthoWriterAscii() : CxxTest::RealTestDescription( Tests_TestFibreWriter, suiteDescription_TestFibreWriter, 90, "TestOrthoWriterAscii" ) {}
 void runTest() { suite_TestFibreWriter.TestOrthoWriterAscii(); }
} testDescription_TestFibreWriter_TestOrthoWriterAscii;

static class TestDescription_TestFibreWriter_TestOrthoWriterBinary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreWriter_TestOrthoWriterBinary() : CxxTest::RealTestDescription( Tests_TestFibreWriter, suiteDescription_TestFibreWriter, 109, "TestOrthoWriterBinary" ) {}
 void runTest() { suite_TestFibreWriter.TestOrthoWriterBinary(); }
} testDescription_TestFibreWriter_TestOrthoWriterBinary;

static class TestDescription_TestFibreWriter_TestConvertFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreWriter_TestConvertFiles() : CxxTest::RealTestDescription( Tests_TestFibreWriter, suiteDescription_TestFibreWriter, 210, "TestConvertFiles" ) {}
 void runTest() { suite_TestFibreWriter.TestConvertFiles(); }
} testDescription_TestFibreWriter_TestConvertFiles;

#include <cxxtest/Root.cpp>
