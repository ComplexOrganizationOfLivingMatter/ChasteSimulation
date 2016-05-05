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
#include "mesh/test/vertex/TestVertexMeshWriter.hpp"

static TestVertexMeshWriter suite_TestVertexMeshWriter;

static CxxTest::List Tests_TestVertexMeshWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexMeshWriter( "mesh/test/vertex/TestVertexMeshWriter.hpp", 60, "TestVertexMeshWriter", suite_TestVertexMeshWriter, Tests_TestVertexMeshWriter );

static class TestDescription_TestVertexMeshWriter_TestVertexMeshWriterIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshWriter_TestVertexMeshWriterIn2d() : CxxTest::RealTestDescription( Tests_TestVertexMeshWriter, suiteDescription_TestVertexMeshWriter, 64, "TestVertexMeshWriterIn2d" ) {}
 void runTest() { suite_TestVertexMeshWriter.TestVertexMeshWriterIn2d(); }
} testDescription_TestVertexMeshWriter_TestVertexMeshWriterIn2d;

static class TestDescription_TestVertexMeshWriter_TestVertexMeshWriterWithCylindricalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshWriter_TestVertexMeshWriterWithCylindricalMesh() : CxxTest::RealTestDescription( Tests_TestVertexMeshWriter, suiteDescription_TestVertexMeshWriter, 139, "TestVertexMeshWriterWithCylindricalMesh" ) {}
 void runTest() { suite_TestVertexMeshWriter.TestVertexMeshWriterWithCylindricalMesh(); }
} testDescription_TestVertexMeshWriter_TestVertexMeshWriterWithCylindricalMesh;

static class TestDescription_TestVertexMeshWriter_TestVertexMeshWriterWithToroidalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshWriter_TestVertexMeshWriterWithToroidalMesh() : CxxTest::RealTestDescription( Tests_TestVertexMeshWriter, suiteDescription_TestVertexMeshWriter, 200, "TestVertexMeshWriterWithToroidalMesh" ) {}
 void runTest() { suite_TestVertexMeshWriter.TestVertexMeshWriterWithToroidalMesh(); }
} testDescription_TestVertexMeshWriter_TestVertexMeshWriterWithToroidalMesh;

static class TestDescription_TestVertexMeshWriter_TestVertexMeshWriterIn3dWithoutFaces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshWriter_TestVertexMeshWriterIn3dWithoutFaces() : CxxTest::RealTestDescription( Tests_TestVertexMeshWriter, suiteDescription_TestVertexMeshWriter, 261, "TestVertexMeshWriterIn3dWithoutFaces" ) {}
 void runTest() { suite_TestVertexMeshWriter.TestVertexMeshWriterIn3dWithoutFaces(); }
} testDescription_TestVertexMeshWriter_TestVertexMeshWriterIn3dWithoutFaces;

static class TestDescription_TestVertexMeshWriter_TestVertexMeshWriterIn3dWithFaces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshWriter_TestVertexMeshWriterIn3dWithFaces() : CxxTest::RealTestDescription( Tests_TestVertexMeshWriter, suiteDescription_TestVertexMeshWriter, 326, "TestVertexMeshWriterIn3dWithFaces" ) {}
 void runTest() { suite_TestVertexMeshWriter.TestVertexMeshWriterIn3dWithFaces(); }
} testDescription_TestVertexMeshWriter_TestVertexMeshWriterIn3dWithFaces;

static class TestDescription_TestVertexMeshWriter_TestMeshWriterWithDeletedNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshWriter_TestMeshWriterWithDeletedNode() : CxxTest::RealTestDescription( Tests_TestVertexMeshWriter, suiteDescription_TestVertexMeshWriter, 385, "TestMeshWriterWithDeletedNode" ) {}
 void runTest() { suite_TestVertexMeshWriter.TestMeshWriterWithDeletedNode(); }
} testDescription_TestVertexMeshWriter_TestMeshWriterWithDeletedNode;

static class TestDescription_TestVertexMeshWriter_TestReadingAndWritingElementAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMeshWriter_TestReadingAndWritingElementAttributes() : CxxTest::RealTestDescription( Tests_TestVertexMeshWriter, suiteDescription_TestVertexMeshWriter, 415, "TestReadingAndWritingElementAttributes" ) {}
 void runTest() { suite_TestVertexMeshWriter.TestReadingAndWritingElementAttributes(); }
} testDescription_TestVertexMeshWriter_TestReadingAndWritingElementAttributes;

#include <cxxtest/Root.cpp>
