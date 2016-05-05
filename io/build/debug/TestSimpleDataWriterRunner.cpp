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
#include "io/test/TestSimpleDataWriter.hpp"

static TestSimpleDataWriter suite_TestSimpleDataWriter;

static CxxTest::List Tests_TestSimpleDataWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimpleDataWriter( "io/test/TestSimpleDataWriter.hpp", 46, "TestSimpleDataWriter", suite_TestSimpleDataWriter, Tests_TestSimpleDataWriter );

static class TestDescription_TestSimpleDataWriter_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleDataWriter_TestExceptions() : CxxTest::RealTestDescription( Tests_TestSimpleDataWriter, suiteDescription_TestSimpleDataWriter, 50, "TestExceptions" ) {}
 void runTest() { suite_TestSimpleDataWriter.TestExceptions(); }
} testDescription_TestSimpleDataWriter_TestExceptions;

static class TestDescription_TestSimpleDataWriter_TestSimpleDataWriterWithStdVecs : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleDataWriter_TestSimpleDataWriterWithStdVecs() : CxxTest::RealTestDescription( Tests_TestSimpleDataWriter, suiteDescription_TestSimpleDataWriter, 70, "TestSimpleDataWriterWithStdVecs" ) {}
 void runTest() { suite_TestSimpleDataWriter.TestSimpleDataWriterWithStdVecs(); }
} testDescription_TestSimpleDataWriter_TestSimpleDataWriterWithStdVecs;

#include <cxxtest/Root.cpp>
