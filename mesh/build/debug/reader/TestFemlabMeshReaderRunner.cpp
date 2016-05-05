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
#include "mesh/test/reader/TestFemlabMeshReader.hpp"

static TestFemlabMeshReaders suite_TestFemlabMeshReaders;

static CxxTest::List Tests_TestFemlabMeshReaders = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFemlabMeshReaders( "mesh/test/reader/TestFemlabMeshReader.hpp", 48, "TestFemlabMeshReaders", suite_TestFemlabMeshReaders, Tests_TestFemlabMeshReaders );

static class TestDescription_TestFemlabMeshReaders_TestFilesOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFemlabMeshReaders_TestFilesOpen() : CxxTest::RealTestDescription( Tests_TestFemlabMeshReaders, suiteDescription_TestFemlabMeshReaders, 57, "TestFilesOpen" ) {}
 void runTest() { suite_TestFemlabMeshReaders.TestFilesOpen(); }
} testDescription_TestFemlabMeshReaders_TestFilesOpen;

static class TestDescription_TestFemlabMeshReaders_TestNodesDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFemlabMeshReaders_TestNodesDataRead() : CxxTest::RealTestDescription( Tests_TestFemlabMeshReaders, suiteDescription_TestFemlabMeshReaders, 81, "TestNodesDataRead" ) {}
 void runTest() { suite_TestFemlabMeshReaders.TestNodesDataRead(); }
} testDescription_TestFemlabMeshReaders_TestNodesDataRead;

static class TestDescription_TestFemlabMeshReaders_TestElementsDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFemlabMeshReaders_TestElementsDataRead() : CxxTest::RealTestDescription( Tests_TestFemlabMeshReaders, suiteDescription_TestFemlabMeshReaders, 99, "TestElementsDataRead" ) {}
 void runTest() { suite_TestFemlabMeshReaders.TestElementsDataRead(); }
} testDescription_TestFemlabMeshReaders_TestElementsDataRead;

static class TestDescription_TestFemlabMeshReaders_TestFacesDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFemlabMeshReaders_TestFacesDataRead() : CxxTest::RealTestDescription( Tests_TestFemlabMeshReaders, suiteDescription_TestFemlabMeshReaders, 118, "TestFacesDataRead" ) {}
 void runTest() { suite_TestFemlabMeshReaders.TestFacesDataRead(); }
} testDescription_TestFemlabMeshReaders_TestFacesDataRead;

static class TestDescription_TestFemlabMeshReaders_TestGetNextNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFemlabMeshReaders_TestGetNextNode() : CxxTest::RealTestDescription( Tests_TestFemlabMeshReaders, suiteDescription_TestFemlabMeshReaders, 140, "TestGetNextNode" ) {}
 void runTest() { suite_TestFemlabMeshReaders.TestGetNextNode(); }
} testDescription_TestFemlabMeshReaders_TestGetNextNode;

static class TestDescription_TestFemlabMeshReaders_TestGetNextElementData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFemlabMeshReaders_TestGetNextElementData() : CxxTest::RealTestDescription( Tests_TestFemlabMeshReaders, suiteDescription_TestFemlabMeshReaders, 180, "TestGetNextElementData" ) {}
 void runTest() { suite_TestFemlabMeshReaders.TestGetNextElementData(); }
} testDescription_TestFemlabMeshReaders_TestGetNextElementData;

static class TestDescription_TestFemlabMeshReaders_TestGetNextFace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFemlabMeshReaders_TestGetNextFace() : CxxTest::RealTestDescription( Tests_TestFemlabMeshReaders, suiteDescription_TestFemlabMeshReaders, 219, "TestGetNextFace" ) {}
 void runTest() { suite_TestFemlabMeshReaders.TestGetNextFace(); }
} testDescription_TestFemlabMeshReaders_TestGetNextFace;

#include <cxxtest/Root.cpp>
