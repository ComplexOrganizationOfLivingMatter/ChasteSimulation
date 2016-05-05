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
#include "mesh/test/TestMixedDimensionMesh.hpp"

static TestMixedDimensionMesh suite_TestMixedDimensionMesh;

static CxxTest::List Tests_TestMixedDimensionMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMixedDimensionMesh( "mesh/test/TestMixedDimensionMesh.hpp", 51, "TestMixedDimensionMesh", suite_TestMixedDimensionMesh, Tests_TestMixedDimensionMesh );

static class TestDescription_TestMixedDimensionMesh_TestReadingSquareMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestReadingSquareMesh() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 54, "TestReadingSquareMesh" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestReadingSquareMesh(); }
} testDescription_TestMixedDimensionMesh_TestReadingSquareMesh;

static class TestDescription_TestMixedDimensionMesh_TestReadingMeshWithNoCables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestReadingMeshWithNoCables() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 205, "TestReadingMeshWithNoCables" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestReadingMeshWithNoCables(); }
} testDescription_TestMixedDimensionMesh_TestReadingMeshWithNoCables;

static class TestDescription_TestMixedDimensionMesh_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestExceptions() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 217, "TestExceptions" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestExceptions(); }
} testDescription_TestMixedDimensionMesh_TestExceptions;

static class TestDescription_TestMixedDimensionMesh_TestWritingCableFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestWritingCableFiles() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 227, "TestWritingCableFiles" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestWritingCableFiles(); }
} testDescription_TestMixedDimensionMesh_TestWritingCableFiles;

static class TestDescription_TestMixedDimensionMesh_TestWritingCableFilesUsingMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestWritingCableFilesUsingMeshReader() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 245, "TestWritingCableFilesUsingMeshReader" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestWritingCableFilesUsingMeshReader(); }
} testDescription_TestMixedDimensionMesh_TestWritingCableFilesUsingMeshReader;

static class TestDescription_TestMixedDimensionMesh_TestWritingBinaryFormat : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestWritingBinaryFormat() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 260, "TestWritingBinaryFormat" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestWritingBinaryFormat(); }
} testDescription_TestMixedDimensionMesh_TestWritingBinaryFormat;

static class TestDescription_TestMixedDimensionMesh_TestGeometryWithMetisPermuation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestGeometryWithMetisPermuation() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 315, "TestGeometryWithMetisPermuation" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestGeometryWithMetisPermuation(); }
} testDescription_TestMixedDimensionMesh_TestGeometryWithMetisPermuation;

static class TestDescription_TestMixedDimensionMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMixedDimensionMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestMixedDimensionMesh, suiteDescription_TestMixedDimensionMesh, 412, "TestArchiving" ) {}
 void runTest() { suite_TestMixedDimensionMesh.TestArchiving(); }
} testDescription_TestMixedDimensionMesh_TestArchiving;

#include <cxxtest/Root.cpp>
