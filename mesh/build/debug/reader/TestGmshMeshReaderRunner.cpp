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
#include "mesh/test/reader/TestGmshMeshReader.hpp"

static TestGmshMeshReader suite_TestGmshMeshReader;

static CxxTest::List Tests_TestGmshMeshReader = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGmshMeshReader( "mesh/test/reader/TestGmshMeshReader.hpp", 54, "TestGmshMeshReader", suite_TestGmshMeshReader, Tests_TestGmshMeshReader );

static class TestDescription_TestGmshMeshReader_TestFilesOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestFilesOpen() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 57, "TestFilesOpen" ) {}
 void runTest() { suite_TestGmshMeshReader.TestFilesOpen(); }
} testDescription_TestGmshMeshReader_TestFilesOpen;

static class TestDescription_TestGmshMeshReader_TestCorrectVersion : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestCorrectVersion() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 64, "TestCorrectVersion" ) {}
 void runTest() { suite_TestGmshMeshReader.TestCorrectVersion(); }
} testDescription_TestGmshMeshReader_TestCorrectVersion;

static class TestDescription_TestGmshMeshReader_TestErrorIfMeshContainsNodesInWeirdElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestErrorIfMeshContainsNodesInWeirdElements() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 71, "TestErrorIfMeshContainsNodesInWeirdElements" ) {}
 void runTest() { suite_TestGmshMeshReader.TestErrorIfMeshContainsNodesInWeirdElements(); }
} testDescription_TestGmshMeshReader_TestErrorIfMeshContainsNodesInWeirdElements;

static class TestDescription_TestGmshMeshReader_TestReadHeaders : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestReadHeaders() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 77, "TestReadHeaders" ) {}
 void runTest() { suite_TestGmshMeshReader.TestReadHeaders(); }
} testDescription_TestGmshMeshReader_TestReadHeaders;

static class TestDescription_TestGmshMeshReader_TestGetNextMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestGetNextMethods() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 102, "TestGetNextMethods" ) {}
 void runTest() { suite_TestGmshMeshReader.TestGetNextMethods(); }
} testDescription_TestGmshMeshReader_TestGetNextMethods;

static class TestDescription_TestGmshMeshReader_TestRead2dMeshes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestRead2dMeshes() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 188, "TestRead2dMeshes" ) {}
 void runTest() { suite_TestGmshMeshReader.TestRead2dMeshes(); }
} testDescription_TestGmshMeshReader_TestRead2dMeshes;

static class TestDescription_TestGmshMeshReader_TestRead2dQuadraticMeshes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestRead2dQuadraticMeshes() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 198, "TestRead2dQuadraticMeshes" ) {}
 void runTest() { suite_TestGmshMeshReader.TestRead2dQuadraticMeshes(); }
} testDescription_TestGmshMeshReader_TestRead2dQuadraticMeshes;

static class TestDescription_TestGmshMeshReader_TestRead3dMeshes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestRead3dMeshes() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 208, "TestRead3dMeshes" ) {}
 void runTest() { suite_TestGmshMeshReader.TestRead3dMeshes(); }
} testDescription_TestGmshMeshReader_TestRead3dMeshes;

static class TestDescription_TestGmshMeshReader_TestRead3dQuadraticMeshes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGmshMeshReader_TestRead3dQuadraticMeshes() : CxxTest::RealTestDescription( Tests_TestGmshMeshReader, suiteDescription_TestGmshMeshReader, 218, "TestRead3dQuadraticMeshes" ) {}
 void runTest() { suite_TestGmshMeshReader.TestRead3dQuadraticMeshes(); }
} testDescription_TestGmshMeshReader_TestRead3dQuadraticMeshes;

#include <cxxtest/Root.cpp>
