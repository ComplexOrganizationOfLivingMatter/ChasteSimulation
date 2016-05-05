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
#include "mesh/test/reader/TestTrianglesMeshReader.hpp"

static TestTrianglesMeshReader suite_TestTrianglesMeshReader;

static CxxTest::List Tests_TestTrianglesMeshReader = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTrianglesMeshReader( "mesh/test/reader/TestTrianglesMeshReader.hpp", 62, "TestTrianglesMeshReader", suite_TestTrianglesMeshReader, Tests_TestTrianglesMeshReader );

static class TestDescription_TestTrianglesMeshReader_TestFilesOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestFilesOpen() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 69, "TestFilesOpen" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestFilesOpen(); }
} testDescription_TestTrianglesMeshReader_TestFilesOpen;

static class TestDescription_TestTrianglesMeshReader_TestNodesDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestNodesDataRead() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 82, "TestNodesDataRead" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestNodesDataRead(); }
} testDescription_TestTrianglesMeshReader_TestNodesDataRead;

static class TestDescription_TestTrianglesMeshReader_TestElementsDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestElementsDataRead() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 101, "TestElementsDataRead" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestElementsDataRead(); }
} testDescription_TestTrianglesMeshReader_TestElementsDataRead;

static class TestDescription_TestTrianglesMeshReader_TestFacesDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestFacesDataRead() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 133, "TestFacesDataRead" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestFacesDataRead(); }
} testDescription_TestTrianglesMeshReader_TestFacesDataRead;

static class TestDescription_TestTrianglesMeshReader_TestFacesDataReadWithAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestFacesDataReadWithAttributes() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 157, "TestFacesDataReadWithAttributes" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestFacesDataReadWithAttributes(); }
} testDescription_TestTrianglesMeshReader_TestFacesDataReadWithAttributes;

static class TestDescription_TestTrianglesMeshReader_Test3dDataRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_Test3dDataRead() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 183, "Test3dDataRead" ) {}
 void runTest() { suite_TestTrianglesMeshReader.Test3dDataRead(); }
} testDescription_TestTrianglesMeshReader_Test3dDataRead;

static class TestDescription_TestTrianglesMeshReader_TestPermutedNodesFail : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestPermutedNodesFail() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 196, "TestPermutedNodesFail" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestPermutedNodesFail(); }
} testDescription_TestTrianglesMeshReader_TestPermutedNodesFail;

static class TestDescription_TestTrianglesMeshReader_TestOrder2ElementsFail : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestOrder2ElementsFail() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 206, "TestOrder2ElementsFail" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestOrder2ElementsFail(); }
} testDescription_TestTrianglesMeshReader_TestOrder2ElementsFail;

static class TestDescription_TestTrianglesMeshReader_TestGetNextNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestGetNextNode() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 219, "TestGetNextNode" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestGetNextNode(); }
} testDescription_TestTrianglesMeshReader_TestGetNextNode;

static class TestDescription_TestTrianglesMeshReader_TestGetNextNodeWithNodeAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestGetNextNodeWithNodeAttributes() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 253, "TestGetNextNodeWithNodeAttributes" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestGetNextNodeWithNodeAttributes(); }
} testDescription_TestTrianglesMeshReader_TestGetNextNodeWithNodeAttributes;

static class TestDescription_TestTrianglesMeshReader_TestGetNextElementData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestGetNextElementData() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 306, "TestGetNextElementData" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestGetNextElementData(); }
} testDescription_TestTrianglesMeshReader_TestGetNextElementData;

static class TestDescription_TestTrianglesMeshReader_TestGetNextEdgeData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestGetNextEdgeData() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 326, "TestGetNextEdgeData" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestGetNextEdgeData(); }
} testDescription_TestTrianglesMeshReader_TestGetNextEdgeData;

static class TestDescription_TestTrianglesMeshReader_Test1DMeshRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_Test1DMeshRead() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 348, "Test1DMeshRead" ) {}
 void runTest() { suite_TestTrianglesMeshReader.Test1DMeshRead(); }
} testDescription_TestTrianglesMeshReader_Test1DMeshRead;

static class TestDescription_TestTrianglesMeshReader_Test0DMeshIn1DSpaceFails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_Test0DMeshIn1DSpaceFails() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 357, "Test0DMeshIn1DSpaceFails" ) {}
 void runTest() { suite_TestTrianglesMeshReader.Test0DMeshIn1DSpaceFails(); }
} testDescription_TestTrianglesMeshReader_Test0DMeshIn1DSpaceFails;

static class TestDescription_TestTrianglesMeshReader_Test1DMeshIn2DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_Test1DMeshIn2DSpace() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 363, "Test1DMeshIn2DSpace" ) {}
 void runTest() { suite_TestTrianglesMeshReader.Test1DMeshIn2DSpace(); }
} testDescription_TestTrianglesMeshReader_Test1DMeshIn2DSpace;

static class TestDescription_TestTrianglesMeshReader_Test1DMeshIn3DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_Test1DMeshIn3DSpace() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 375, "Test1DMeshIn3DSpace" ) {}
 void runTest() { suite_TestTrianglesMeshReader.Test1DMeshIn3DSpace(); }
} testDescription_TestTrianglesMeshReader_Test1DMeshIn3DSpace;

static class TestDescription_TestTrianglesMeshReader_Test2DMeshIn3DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_Test2DMeshIn3DSpace() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 382, "Test2DMeshIn3DSpace" ) {}
 void runTest() { suite_TestTrianglesMeshReader.Test2DMeshIn3DSpace(); }
} testDescription_TestTrianglesMeshReader_Test2DMeshIn3DSpace;

static class TestDescription_TestTrianglesMeshReader_TestOtherExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestOtherExceptions() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 396, "TestOtherExceptions" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestOtherExceptions(); }
} testDescription_TestTrianglesMeshReader_TestOtherExceptions;

static class TestDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh1d() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 418, "TestReadingQuadraticMesh1d" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingQuadraticMesh1d(); }
} testDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh1d;

static class TestDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh2d() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 442, "TestReadingQuadraticMesh2d" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingQuadraticMesh2d(); }
} testDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh2d;

static class TestDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh3d() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 466, "TestReadingQuadraticMesh3d" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingQuadraticMesh3d(); }
} testDescription_TestTrianglesMeshReader_TestReadingQuadraticMesh3d;

static class TestDescription_TestTrianglesMeshReader_TestReadingElementAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingElementAttributes() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 482, "TestReadingElementAttributes" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingElementAttributes(); }
} testDescription_TestTrianglesMeshReader_TestReadingElementAttributes;

static class TestDescription_TestTrianglesMeshReader_TestReadingContainingElementsOfBoundaryElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingContainingElementsOfBoundaryElements() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 507, "TestReadingContainingElementsOfBoundaryElements" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingContainingElementsOfBoundaryElements(); }
} testDescription_TestTrianglesMeshReader_TestReadingContainingElementsOfBoundaryElements;

static class TestDescription_TestTrianglesMeshReader_TestReadingBinary1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingBinary1D() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 520, "TestReadingBinary1D" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingBinary1D(); }
} testDescription_TestTrianglesMeshReader_TestReadingBinary1D;

static class TestDescription_TestTrianglesMeshReader_TestReadingBinary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingBinary() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 536, "TestReadingBinary" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingBinary(); }
} testDescription_TestTrianglesMeshReader_TestReadingBinary;

static class TestDescription_TestTrianglesMeshReader_TestReadingHexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingHexMesh() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 856, "TestReadingHexMesh" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingHexMesh(); }
} testDescription_TestTrianglesMeshReader_TestReadingHexMesh;

static class TestDescription_TestTrianglesMeshReader_TestReadingWithGenericReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingWithGenericReader() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 871, "TestReadingWithGenericReader" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingWithGenericReader(); }
} testDescription_TestTrianglesMeshReader_TestReadingWithGenericReader;

static class TestDescription_TestTrianglesMeshReader_TestReadingNclInformation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingNclInformation() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 883, "TestReadingNclInformation" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingNclInformation(); }
} testDescription_TestTrianglesMeshReader_TestReadingNclInformation;

static class TestDescription_TestTrianglesMeshReader_TestReading3dMeshWithPermutation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReading3dMeshWithPermutation() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 914, "TestReading3dMeshWithPermutation" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReading3dMeshWithPermutation(); }
} testDescription_TestTrianglesMeshReader_TestReading3dMeshWithPermutation;

static class TestDescription_TestTrianglesMeshReader_TestReadingMissingAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTrianglesMeshReader_TestReadingMissingAttributes() : CxxTest::RealTestDescription( Tests_TestTrianglesMeshReader, suiteDescription_TestTrianglesMeshReader, 973, "TestReadingMissingAttributes" ) {}
 void runTest() { suite_TestTrianglesMeshReader.TestReadingMissingAttributes(); }
} testDescription_TestTrianglesMeshReader_TestReadingMissingAttributes;

#include <cxxtest/Root.cpp>
