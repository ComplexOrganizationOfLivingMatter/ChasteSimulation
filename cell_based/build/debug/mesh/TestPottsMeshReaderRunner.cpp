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
#include "cell_based/test/mesh/TestPottsMeshReader.hpp"

static TestPottsMeshReader suite_TestPottsMeshReader;

static CxxTest::List Tests_TestPottsMeshReader = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsMeshReader( "cell_based/test/mesh/TestPottsMeshReader.hpp", 48, "TestPottsMeshReader", suite_TestPottsMeshReader, Tests_TestPottsMeshReader );

static class TestDescription_TestPottsMeshReader_TestFilesOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshReader_TestFilesOpen() : CxxTest::RealTestDescription( Tests_TestPottsMeshReader, suiteDescription_TestPottsMeshReader, 55, "TestFilesOpen" ) {}
 void runTest() { suite_TestPottsMeshReader.TestFilesOpen(); }
} testDescription_TestPottsMeshReader_TestFilesOpen;

static class TestDescription_TestPottsMeshReader_TestNodesDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshReader_TestNodesDataRead() : CxxTest::RealTestDescription( Tests_TestPottsMeshReader, suiteDescription_TestPottsMeshReader, 65, "TestNodesDataRead" ) {}
 void runTest() { suite_TestPottsMeshReader.TestNodesDataRead(); }
} testDescription_TestPottsMeshReader_TestNodesDataRead;

static class TestDescription_TestPottsMeshReader_TestElementsDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshReader_TestElementsDataRead() : CxxTest::RealTestDescription( Tests_TestPottsMeshReader, suiteDescription_TestPottsMeshReader, 85, "TestElementsDataRead" ) {}
 void runTest() { suite_TestPottsMeshReader.TestElementsDataRead(); }
} testDescription_TestPottsMeshReader_TestElementsDataRead;

static class TestDescription_TestPottsMeshReader_TestGetNextNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshReader_TestGetNextNode() : CxxTest::RealTestDescription( Tests_TestPottsMeshReader, suiteDescription_TestPottsMeshReader, 133, "TestGetNextNode" ) {}
 void runTest() { suite_TestPottsMeshReader.TestGetNextNode(); }
} testDescription_TestPottsMeshReader_TestGetNextNode;

static class TestDescription_TestPottsMeshReader_TestReadingElementAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshReader_TestReadingElementAttributes() : CxxTest::RealTestDescription( Tests_TestPottsMeshReader, suiteDescription_TestPottsMeshReader, 158, "TestReadingElementAttributes" ) {}
 void runTest() { suite_TestPottsMeshReader.TestReadingElementAttributes(); }
} testDescription_TestPottsMeshReader_TestReadingElementAttributes;

static class TestDescription_TestPottsMeshReader_TestPottsMeshReader3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshReader_TestPottsMeshReader3d() : CxxTest::RealTestDescription( Tests_TestPottsMeshReader, suiteDescription_TestPottsMeshReader, 194, "TestPottsMeshReader3d" ) {}
 void runTest() { suite_TestPottsMeshReader.TestPottsMeshReader3d(); }
} testDescription_TestPottsMeshReader_TestPottsMeshReader3d;

static class TestDescription_TestPottsMeshReader_TestOtherExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshReader_TestOtherExceptions() : CxxTest::RealTestDescription( Tests_TestPottsMeshReader, suiteDescription_TestPottsMeshReader, 222, "TestOtherExceptions" ) {}
 void runTest() { suite_TestPottsMeshReader.TestOtherExceptions(); }
} testDescription_TestPottsMeshReader_TestOtherExceptions;

#include <cxxtest/Root.cpp>
