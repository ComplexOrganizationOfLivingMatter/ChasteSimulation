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
#include "mesh/test/vertex/TestVertexMeshReader.hpp"

static TestVertexMeshReader suite_TestVertexMeshReader;

static CxxTest::List Tests_TestVertexMeshReader = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexMeshReader( "mesh/test/vertex/TestVertexMeshReader.hpp", 50, "TestVertexMeshReader", suite_TestVertexMeshReader, Tests_TestVertexMeshReader );

static class TestDescription_TestVertexMeshReader_TestFilesOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestFilesOpen() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 57, "TestFilesOpen" ) {}
 void runTest() { suite_TestVertexMeshReader.TestFilesOpen(); }
} testDescription_TestVertexMeshReader_TestFilesOpen;

static class TestDescription_TestVertexMeshReader_TestNodesDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestNodesDataRead() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 67, "TestNodesDataRead" ) {}
 void runTest() { suite_TestVertexMeshReader.TestNodesDataRead(); }
} testDescription_TestVertexMeshReader_TestNodesDataRead;

static class TestDescription_TestVertexMeshReader_TestElementsDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestElementsDataRead() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 87, "TestElementsDataRead" ) {}
 void runTest() { suite_TestVertexMeshReader.TestElementsDataRead(); }
} testDescription_TestVertexMeshReader_TestElementsDataRead;

static class TestDescription_TestVertexMeshReader_TestPermutedNodesFail : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestPermutedNodesFail() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 135, "TestPermutedNodesFail" ) {}
 void runTest() { suite_TestVertexMeshReader.TestPermutedNodesFail(); }
} testDescription_TestVertexMeshReader_TestPermutedNodesFail;

static class TestDescription_TestVertexMeshReader_TestGetNextNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestGetNextNode() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 147, "TestGetNextNode" ) {}
 void runTest() { suite_TestVertexMeshReader.TestGetNextNode(); }
} testDescription_TestVertexMeshReader_TestGetNextNode;

static class TestDescription_TestVertexMeshReader_TestGetNextElementData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestGetNextElementData() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 177, "TestGetNextElementData" ) {}
 void runTest() { suite_TestVertexMeshReader.TestGetNextElementData(); }
} testDescription_TestVertexMeshReader_TestGetNextElementData;

static class TestDescription_TestVertexMeshReader_TestGetNextElementDataWithFaces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestGetNextElementDataWithFaces() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 196, "TestGetNextElementDataWithFaces" ) {}
 void runTest() { suite_TestVertexMeshReader.TestGetNextElementDataWithFaces(); }
} testDescription_TestVertexMeshReader_TestGetNextElementDataWithFaces;

static class TestDescription_TestVertexMeshReader_TestReadingWithNoElementAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestReadingWithNoElementAttributes() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 265, "TestReadingWithNoElementAttributes" ) {}
 void runTest() { suite_TestVertexMeshReader.TestReadingWithNoElementAttributes(); }
} testDescription_TestVertexMeshReader_TestReadingWithNoElementAttributes;

static class TestDescription_TestVertexMeshReader_TestReadingElementAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestReadingElementAttributes() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 276, "TestReadingElementAttributes" ) {}
 void runTest() { suite_TestVertexMeshReader.TestReadingElementAttributes(); }
} testDescription_TestVertexMeshReader_TestReadingElementAttributes;

static class TestDescription_TestVertexMeshReader_TestOtherExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshReader_TestOtherExceptions() : CxxTest::RealTestDescription( Tests_TestVertexMeshReader, suiteDescription_TestVertexMeshReader, 312, "TestOtherExceptions" ) {}
 void runTest() { suite_TestVertexMeshReader.TestOtherExceptions(); }
} testDescription_TestVertexMeshReader_TestOtherExceptions;

#include <cxxtest/Root.cpp>
