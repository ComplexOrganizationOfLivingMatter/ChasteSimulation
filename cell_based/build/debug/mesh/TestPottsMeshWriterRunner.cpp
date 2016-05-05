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
#include "cell_based/test/mesh/TestPottsMeshWriter.hpp"

static TestPottsMeshWriter suite_TestPottsMeshWriter;

static CxxTest::List Tests_TestPottsMeshWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsMeshWriter( "cell_based/test/mesh/TestPottsMeshWriter.hpp", 55, "TestPottsMeshWriter", suite_TestPottsMeshWriter, Tests_TestPottsMeshWriter );

static class TestDescription_TestPottsMeshWriter_TestPottsMeshWriter2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshWriter_TestPottsMeshWriter2d() : CxxTest::RealTestDescription( Tests_TestPottsMeshWriter, suiteDescription_TestPottsMeshWriter, 59, "TestPottsMeshWriter2d" ) {}
 void runTest() { suite_TestPottsMeshWriter.TestPottsMeshWriter2d(); }
} testDescription_TestPottsMeshWriter_TestPottsMeshWriter2d;

static class TestDescription_TestPottsMeshWriter_TestPottsMeshWriter3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshWriter_TestPottsMeshWriter3d() : CxxTest::RealTestDescription( Tests_TestPottsMeshWriter, suiteDescription_TestPottsMeshWriter, 87, "TestPottsMeshWriter3d" ) {}
 void runTest() { suite_TestPottsMeshWriter.TestPottsMeshWriter3d(); }
} testDescription_TestPottsMeshWriter_TestPottsMeshWriter3d;

static class TestDescription_TestPottsMeshWriter_TestReadingAndWritingElementAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshWriter_TestReadingAndWritingElementAttributes() : CxxTest::RealTestDescription( Tests_TestPottsMeshWriter, suiteDescription_TestPottsMeshWriter, 115, "TestReadingAndWritingElementAttributes" ) {}
 void runTest() { suite_TestPottsMeshWriter.TestReadingAndWritingElementAttributes(); }
} testDescription_TestPottsMeshWriter_TestReadingAndWritingElementAttributes;

#include <cxxtest/Root.cpp>
