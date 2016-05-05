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
#include "mesh/test/writer/TestXmlMeshWriters.hpp"

static TestXmlMeshWriters suite_TestXmlMeshWriters;

static CxxTest::List Tests_TestXmlMeshWriters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestXmlMeshWriters( "mesh/test/writer/TestXmlMeshWriters.hpp", 59, "TestXmlMeshWriters", suite_TestXmlMeshWriters, Tests_TestXmlMeshWriters );

static class TestDescription_TestXmlMeshWriters_TestBasicVtkMeshWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestBasicVtkMeshWriter() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 62, "TestBasicVtkMeshWriter" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestBasicVtkMeshWriter(); }
} testDescription_TestXmlMeshWriters_TestBasicVtkMeshWriter;

static class TestDescription_TestXmlMeshWriters_TestSequentialMeshCannotWriteParallelFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestSequentialMeshCannotWriteParallelFiles() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 97, "TestSequentialMeshCannotWriteParallelFiles" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestSequentialMeshCannotWriteParallelFiles(); }
} testDescription_TestXmlMeshWriters_TestSequentialMeshCannotWriteParallelFiles;

static class TestDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 115, "TestParallelVtkMeshWriter" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestParallelVtkMeshWriter(); }
} testDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter;

static class TestDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter2d() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 245, "TestParallelVtkMeshWriter2d" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestParallelVtkMeshWriter2d(); }
} testDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter2d;

static class TestDescription_TestXmlMeshWriters_TestVtkMeshWriter2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestVtkMeshWriter2D() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 310, "TestVtkMeshWriter2D" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestVtkMeshWriter2D(); }
} testDescription_TestXmlMeshWriters_TestVtkMeshWriter2D;

static class TestDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter1d() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 433, "TestParallelVtkMeshWriter1d" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestParallelVtkMeshWriter1d(); }
} testDescription_TestXmlMeshWriters_TestParallelVtkMeshWriter1d;

static class TestDescription_TestXmlMeshWriters_TestVtkMeshWriter1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestVtkMeshWriter1D() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 497, "TestVtkMeshWriter1D" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestVtkMeshWriter1D(); }
} testDescription_TestXmlMeshWriters_TestVtkMeshWriter1D;

static class TestDescription_TestXmlMeshWriters_TestVtkMeshWriterWithData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestVtkMeshWriterWithData() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 528, "TestVtkMeshWriterWithData" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestVtkMeshWriterWithData(); }
} testDescription_TestXmlMeshWriters_TestVtkMeshWriterWithData;

static class TestDescription_TestXmlMeshWriters_TestVtkMeshWriterForCables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestVtkMeshWriterForCables() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 640, "TestVtkMeshWriterForCables" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestVtkMeshWriterForCables(); }
} testDescription_TestXmlMeshWriters_TestVtkMeshWriterForCables;

static class TestDescription_TestXmlMeshWriters_TestVtkMeshWriterForQuadraticMesh2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestVtkMeshWriterForQuadraticMesh2D() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 681, "TestVtkMeshWriterForQuadraticMesh2D" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestVtkMeshWriterForQuadraticMesh2D(); }
} testDescription_TestXmlMeshWriters_TestVtkMeshWriterForQuadraticMesh2D;

static class TestDescription_TestXmlMeshWriters_TestBasicQuadraticVtkMeshWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestBasicQuadraticVtkMeshWriter() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 770, "TestBasicQuadraticVtkMeshWriter" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestBasicQuadraticVtkMeshWriter(); }
} testDescription_TestXmlMeshWriters_TestBasicQuadraticVtkMeshWriter;

static class TestDescription_TestXmlMeshWriters_TestVtkMeshWriter1Din3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestVtkMeshWriter1Din3D() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 801, "TestVtkMeshWriter1Din3D" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestVtkMeshWriter1Din3D(); }
} testDescription_TestXmlMeshWriters_TestVtkMeshWriter1Din3D;

static class TestDescription_TestXmlMeshWriters_TestVtkMeshWriterWithSurfaceMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestVtkMeshWriterWithSurfaceMesh() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 830, "TestVtkMeshWriterWithSurfaceMesh" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestVtkMeshWriterWithSurfaceMesh(); }
} testDescription_TestXmlMeshWriters_TestVtkMeshWriterWithSurfaceMesh;

static class TestDescription_TestXmlMeshWriters_TestXdmfWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestXdmfWriter() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 857, "TestXdmfWriter" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestXdmfWriter(); }
} testDescription_TestXmlMeshWriters_TestXdmfWriter;

static class TestDescription_TestXmlMeshWriters_TestXdmfWriter2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestXdmfWriter2D() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 898, "TestXdmfWriter2D" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestXdmfWriter2D(); }
} testDescription_TestXmlMeshWriters_TestXdmfWriter2D;

static class TestDescription_TestXmlMeshWriters_TestXdmfWriterDistributed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestXmlMeshWriters_TestXdmfWriterDistributed() : CxxTest::RealTestDescription( Tests_TestXmlMeshWriters, suiteDescription_TestXmlMeshWriters, 930, "TestXdmfWriterDistributed" ) {}
 void runTest() { suite_TestXmlMeshWriters.TestXdmfWriterDistributed(); }
} testDescription_TestXmlMeshWriters_TestXdmfWriterDistributed;

#include <cxxtest/Root.cpp>
