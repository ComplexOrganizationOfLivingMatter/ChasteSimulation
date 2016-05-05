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
#include "heart/test/fibres/TestFibreReader.hpp"

static TestFibreReader suite_TestFibreReader;

static CxxTest::List Tests_TestFibreReader = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFibreReader( "heart/test/fibres/TestFibreReader.hpp", 66, "TestFibreReader", suite_TestFibreReader, Tests_TestFibreReader );

static class TestDescription_TestFibreReader_TestOrthoReaderSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestOrthoReaderSetup() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 69, "TestOrthoReaderSetup" ) {}
 void runTest() { suite_TestFibreReader.TestOrthoReaderSetup(); }
} testDescription_TestFibreReader_TestOrthoReaderSetup;

static class TestDescription_TestFibreReader_TestOrthoReaderSkipping : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestOrthoReaderSkipping() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 114, "TestOrthoReaderSkipping" ) {}
 void runTest() { suite_TestFibreReader.TestOrthoReaderSkipping(); }
} testDescription_TestFibreReader_TestOrthoReaderSkipping;

static class TestDescription_TestFibreReader_TestAxiReaderSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestAxiReaderSetup() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 136, "TestAxiReaderSetup" ) {}
 void runTest() { suite_TestFibreReader.TestAxiReaderSetup(); }
} testDescription_TestFibreReader_TestAxiReaderSetup;

static class TestDescription_TestFibreReader_TestAxiReaderSkipping : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestAxiReaderSkipping() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 168, "TestAxiReaderSkipping" ) {}
 void runTest() { suite_TestFibreReader.TestAxiReaderSkipping(); }
} testDescription_TestFibreReader_TestAxiReaderSkipping;

static class TestDescription_TestFibreReader_TestFibreConvenienceMethodsForVtk : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestFibreConvenienceMethodsForVtk() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 184, "TestFibreConvenienceMethodsForVtk" ) {}
 void runTest() { suite_TestFibreReader.TestFibreConvenienceMethodsForVtk(); }
} testDescription_TestFibreReader_TestFibreConvenienceMethodsForVtk;

static class TestDescription_TestFibreReader_TestFibretoVtk : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestFibretoVtk() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 233, "TestFibretoVtk" ) {}
 void runTest() { suite_TestFibreReader.TestFibretoVtk(); }
} testDescription_TestFibreReader_TestFibretoVtk;

static class TestDescription_TestFibreReader_TestFibreReaderExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestFibreReaderExceptions() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 277, "TestFibreReaderExceptions" ) {}
 void runTest() { suite_TestFibreReader.TestFibreReaderExceptions(); }
} testDescription_TestFibreReader_TestFibreReaderExceptions;

static class TestDescription_TestFibreReader_TestAxiBinaryFileReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestAxiBinaryFileReader() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 328, "TestAxiBinaryFileReader" ) {}
 void runTest() { suite_TestFibreReader.TestAxiBinaryFileReader(); }
} testDescription_TestFibreReader_TestAxiBinaryFileReader;

static class TestDescription_TestFibreReader_TestAxiBinaryFileReaderWithSkipping : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestAxiBinaryFileReaderWithSkipping() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 355, "TestAxiBinaryFileReaderWithSkipping" ) {}
 void runTest() { suite_TestFibreReader.TestAxiBinaryFileReaderWithSkipping(); }
} testDescription_TestFibreReader_TestAxiBinaryFileReaderWithSkipping;

static class TestDescription_TestFibreReader_TestOrthoBinaryFileReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestOrthoBinaryFileReader() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 378, "TestOrthoBinaryFileReader" ) {}
 void runTest() { suite_TestFibreReader.TestOrthoBinaryFileReader(); }
} testDescription_TestFibreReader_TestOrthoBinaryFileReader;

static class TestDescription_TestFibreReader_TestOrthoBinaryFileReaderWithSkipping : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReader_TestOrthoBinaryFileReaderWithSkipping() : CxxTest::RealTestDescription( Tests_TestFibreReader, suiteDescription_TestFibreReader, 412, "TestOrthoBinaryFileReaderWithSkipping" ) {}
 void runTest() { suite_TestFibreReader.TestOrthoBinaryFileReaderWithSkipping(); }
} testDescription_TestFibreReader_TestOrthoBinaryFileReaderWithSkipping;

#include <cxxtest/Root.cpp>
