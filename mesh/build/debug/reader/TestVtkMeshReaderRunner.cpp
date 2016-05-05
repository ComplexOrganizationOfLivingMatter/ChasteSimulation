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
#include "mesh/test/reader/TestVtkMeshReader.hpp"

static TestVtkMeshReader suite_TestVtkMeshReader;

static CxxTest::List Tests_TestVtkMeshReader = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVtkMeshReader( "mesh/test/reader/TestVtkMeshReader.hpp", 74, "TestVtkMeshReader", suite_TestVtkMeshReader, Tests_TestVtkMeshReader );

static class TestDescription_TestVtkMeshReader_TestFilesOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestFilesOpen() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 82, "TestFilesOpen" ) {}
 void runTest() { suite_TestVtkMeshReader.TestFilesOpen(); }
} testDescription_TestVtkMeshReader_TestFilesOpen;

static class TestDescription_TestVtkMeshReader_TestOutputVtkUnstructuredGrid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestOutputVtkUnstructuredGrid() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 96, "TestOutputVtkUnstructuredGrid" ) {}
 void runTest() { suite_TestVtkMeshReader.TestOutputVtkUnstructuredGrid(); }
} testDescription_TestVtkMeshReader_TestOutputVtkUnstructuredGrid;

static class TestDescription_TestVtkMeshReader_TestGetNextNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestGetNextNode() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 116, "TestGetNextNode" ) {}
 void runTest() { suite_TestVtkMeshReader.TestGetNextNode(); }
} testDescription_TestVtkMeshReader_TestGetNextNode;

static class TestDescription_TestVtkMeshReader_TestGetNextElementData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestGetNextElementData() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 146, "TestGetNextElementData" ) {}
 void runTest() { suite_TestVtkMeshReader.TestGetNextElementData(); }
} testDescription_TestVtkMeshReader_TestGetNextElementData;

static class TestDescription_TestVtkMeshReader_TestGetNextFaceData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestGetNextFaceData() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 191, "TestGetNextFaceData" ) {}
 void runTest() { suite_TestVtkMeshReader.TestGetNextFaceData(); }
} testDescription_TestVtkMeshReader_TestGetNextFaceData;

static class TestDescription_TestVtkMeshReader_TestConstructFromVtkUnstructuredGridObject : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestConstructFromVtkUnstructuredGridObject() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 234, "TestConstructFromVtkUnstructuredGridObject" ) {}
 void runTest() { suite_TestVtkMeshReader.TestConstructFromVtkUnstructuredGridObject(); }
} testDescription_TestVtkMeshReader_TestConstructFromVtkUnstructuredGridObject;

static class TestDescription_TestVtkMeshReader_TestGenericReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestGenericReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 261, "TestGenericReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestGenericReader(); }
} testDescription_TestVtkMeshReader_TestGenericReader;

static class TestDescription_TestVtkMeshReader_TestBuildTetrahedralMeshFromMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestBuildTetrahedralMeshFromMeshReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 292, "TestBuildTetrahedralMeshFromMeshReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestBuildTetrahedralMeshFromMeshReader(); }
} testDescription_TestVtkMeshReader_TestBuildTetrahedralMeshFromMeshReader;

static class TestDescription_TestVtkMeshReader_TestBuildDistributedTetrahedralMeshFromVtkMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestBuildDistributedTetrahedralMeshFromVtkMeshReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 387, "TestBuildDistributedTetrahedralMeshFromVtkMeshReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestBuildDistributedTetrahedralMeshFromVtkMeshReader(); }
} testDescription_TestVtkMeshReader_TestBuildDistributedTetrahedralMeshFromVtkMeshReader;

static class TestDescription_TestVtkMeshReader_TestBuild2DFromVtkMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestBuild2DFromVtkMeshReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 450, "TestBuild2DFromVtkMeshReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestBuild2DFromVtkMeshReader(); }
} testDescription_TestVtkMeshReader_TestBuild2DFromVtkMeshReader;

static class TestDescription_TestVtkMeshReader_TestBuildMixedMesh2DFromVtkMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestBuildMixedMesh2DFromVtkMeshReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 478, "TestBuildMixedMesh2DFromVtkMeshReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestBuildMixedMesh2DFromVtkMeshReader(); }
} testDescription_TestVtkMeshReader_TestBuildMixedMesh2DFromVtkMeshReader;

static class TestDescription_TestVtkMeshReader_TestBuildMixedMeshTetrahedralMeshFromVtkMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestBuildMixedMeshTetrahedralMeshFromVtkMeshReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 510, "TestBuildMixedMeshTetrahedralMeshFromVtkMeshReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestBuildMixedMeshTetrahedralMeshFromVtkMeshReader(); }
} testDescription_TestVtkMeshReader_TestBuildMixedMeshTetrahedralMeshFromVtkMeshReader;

static class TestDescription_TestVtkMeshReader_TestLoadingSurfaceMeshFromVtkMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestLoadingSurfaceMeshFromVtkMeshReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 543, "TestLoadingSurfaceMeshFromVtkMeshReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestLoadingSurfaceMeshFromVtkMeshReader(); }
} testDescription_TestVtkMeshReader_TestLoadingSurfaceMeshFromVtkMeshReader;

static class TestDescription_TestVtkMeshReader_TestLoading1Din3DMeshFromVtkMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkMeshReader_TestLoading1Din3DMeshFromVtkMeshReader() : CxxTest::RealTestDescription( Tests_TestVtkMeshReader, suiteDescription_TestVtkMeshReader, 570, "TestLoading1Din3DMeshFromVtkMeshReader" ) {}
 void runTest() { suite_TestVtkMeshReader.TestLoading1Din3DMeshFromVtkMeshReader(); }
} testDescription_TestVtkMeshReader_TestLoading1Din3DMeshFromVtkMeshReader;

#include <cxxtest/Root.cpp>
