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
#include "mesh/test/vertex/TestVertexMesh.hpp"

static TestVertexMesh suite_TestVertexMesh;

static CxxTest::List Tests_TestVertexMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexMesh( "mesh/test/vertex/TestVertexMesh.hpp", 52, "TestVertexMesh", suite_TestVertexMesh, Tests_TestVertexMesh );

static class TestDescription_TestVertexMesh_TestNodeIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestNodeIterator() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 189, "TestNodeIterator" ) {}
 void runTest() { suite_TestVertexMesh.TestNodeIterator(); }
} testDescription_TestVertexMesh_TestNodeIterator;

static class TestDescription_TestVertexMesh_TestVertexElementIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestVertexElementIterator() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 236, "TestVertexElementIterator" ) {}
 void runTest() { suite_TestVertexMesh.TestVertexElementIterator(); }
} testDescription_TestVertexMesh_TestVertexElementIterator;

static class TestDescription_TestVertexMesh_TestBasic1dVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestBasic1dVertexMesh() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 274, "TestBasic1dVertexMesh" ) {}
 void runTest() { suite_TestVertexMesh.TestBasic1dVertexMesh(); }
} testDescription_TestVertexMesh_TestBasic1dVertexMesh;

static class TestDescription_TestVertexMesh_TestBasic2dVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestBasic2dVertexMesh() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 312, "TestBasic2dVertexMesh" ) {}
 void runTest() { suite_TestVertexMesh.TestBasic2dVertexMesh(); }
} testDescription_TestVertexMesh_TestBasic2dVertexMesh;

static class TestDescription_TestVertexMesh_TestBasic3dVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestBasic3dVertexMesh() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 370, "TestBasic3dVertexMesh" ) {}
 void runTest() { suite_TestVertexMesh.TestBasic3dVertexMesh(); }
} testDescription_TestVertexMesh_TestBasic3dVertexMesh;

static class TestDescription_TestVertexMesh_TestMeshConstructionFromMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestMeshConstructionFromMeshReader() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 426, "TestMeshConstructionFromMeshReader" ) {}
 void runTest() { suite_TestVertexMesh.TestMeshConstructionFromMeshReader(); }
} testDescription_TestVertexMesh_TestMeshConstructionFromMeshReader;

static class TestDescription_TestVertexMesh_TestMeshConstructionFromMeshReaderIndexedFromOne : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestMeshConstructionFromMeshReaderIndexedFromOne() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 468, "TestMeshConstructionFromMeshReaderIndexedFromOne" ) {}
 void runTest() { suite_TestVertexMesh.TestMeshConstructionFromMeshReaderIndexedFromOne(); }
} testDescription_TestVertexMesh_TestMeshConstructionFromMeshReaderIndexedFromOne;

static class TestDescription_TestVertexMesh_TestMeshConstructionFromMeshReaderWithFaces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestMeshConstructionFromMeshReaderWithFaces() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 489, "TestMeshConstructionFromMeshReaderWithFaces" ) {}
 void runTest() { suite_TestVertexMesh.TestMeshConstructionFromMeshReaderWithFaces(); }
} testDescription_TestVertexMesh_TestMeshConstructionFromMeshReaderWithFaces;

static class TestDescription_TestVertexMesh_TestArchive2dVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestArchive2dVertexMesh() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 570, "TestArchive2dVertexMesh" ) {}
 void runTest() { suite_TestVertexMesh.TestArchive2dVertexMesh(); }
} testDescription_TestVertexMesh_TestArchive2dVertexMesh;

static class TestDescription_TestVertexMesh_TestArchive3dVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestArchive3dVertexMesh() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 657, "TestArchive3dVertexMesh" ) {}
 void runTest() { suite_TestVertexMesh.TestArchive3dVertexMesh(); }
} testDescription_TestVertexMesh_TestArchive3dVertexMesh;

static class TestDescription_TestVertexMesh_TestVertexElementMap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestVertexElementMap() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 746, "TestVertexElementMap" ) {}
 void runTest() { suite_TestVertexMesh.TestVertexElementMap(); }
} testDescription_TestVertexMesh_TestVertexElementMap;

static class TestDescription_TestVertexMesh_TestNeighbouringNodeAndElementMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestNeighbouringNodeAndElementMethods() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 771, "TestNeighbouringNodeAndElementMethods" ) {}
 void runTest() { suite_TestVertexMesh.TestNeighbouringNodeAndElementMethods(); }
} testDescription_TestVertexMesh_TestNeighbouringNodeAndElementMethods;

static class TestDescription_TestVertexMesh_TestGetRosetteRankOfElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetRosetteRankOfElement() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 827, "TestGetRosetteRankOfElement" ) {}
 void runTest() { suite_TestVertexMesh.TestGetRosetteRankOfElement(); }
} testDescription_TestVertexMesh_TestGetRosetteRankOfElement;

static class TestDescription_TestVertexMesh_TestGetCentroidOfElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetCentroidOfElement() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 898, "TestGetCentroidOfElement" ) {}
 void runTest() { suite_TestVertexMesh.TestGetCentroidOfElement(); }
} testDescription_TestVertexMesh_TestGetCentroidOfElement;

static class TestDescription_TestVertexMesh_TestGetVolumeOfElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetVolumeOfElement() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1045, "TestGetVolumeOfElement" ) {}
 void runTest() { suite_TestVertexMesh.TestGetVolumeOfElement(); }
} testDescription_TestVertexMesh_TestGetVolumeOfElement;

static class TestDescription_TestVertexMesh_TestGetSurfaceAreaOfElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetSurfaceAreaOfElement() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1135, "TestGetSurfaceAreaOfElement" ) {}
 void runTest() { suite_TestVertexMesh.TestGetSurfaceAreaOfElement(); }
} testDescription_TestVertexMesh_TestGetSurfaceAreaOfElement;

static class TestDescription_TestVertexMesh_Test3dMethodsWithPrism : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_Test3dMethodsWithPrism() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1225, "Test3dMethodsWithPrism" ) {}
 void runTest() { suite_TestVertexMesh.Test3dMethodsWithPrism(); }
} testDescription_TestVertexMesh_Test3dMethodsWithPrism;

static class TestDescription_TestVertexMesh_TestGetAreaGradientOfElementAtNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetAreaGradientOfElementAtNode() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1288, "TestGetAreaGradientOfElementAtNode" ) {}
 void runTest() { suite_TestVertexMesh.TestGetAreaGradientOfElementAtNode(); }
} testDescription_TestVertexMesh_TestGetAreaGradientOfElementAtNode;

static class TestDescription_TestVertexMesh_TestGetPerimeterGradientAtNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetPerimeterGradientAtNode() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1321, "TestGetPerimeterGradientAtNode" ) {}
 void runTest() { suite_TestVertexMesh.TestGetPerimeterGradientAtNode(); }
} testDescription_TestVertexMesh_TestGetPerimeterGradientAtNode;

static class TestDescription_TestVertexMesh_TestMeshGetWidthAndBoundingBoxMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestMeshGetWidthAndBoundingBoxMethod() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1354, "TestMeshGetWidthAndBoundingBoxMethod" ) {}
 void runTest() { suite_TestVertexMesh.TestMeshGetWidthAndBoundingBoxMethod(); }
} testDescription_TestVertexMesh_TestMeshGetWidthAndBoundingBoxMethod;

static class TestDescription_TestVertexMesh_TestCalculateMomentsOfElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestCalculateMomentsOfElement() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1376, "TestCalculateMomentsOfElement" ) {}
 void runTest() { suite_TestVertexMesh.TestCalculateMomentsOfElement(); }
} testDescription_TestVertexMesh_TestCalculateMomentsOfElement;

static class TestDescription_TestVertexMesh_TestGetShortAxisOfElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetShortAxisOfElement() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1511, "TestGetShortAxisOfElement" ) {}
 void runTest() { suite_TestVertexMesh.TestGetShortAxisOfElement(); }
} testDescription_TestVertexMesh_TestGetShortAxisOfElement;

static class TestDescription_TestVertexMesh_TestGetElongationShapeFactorOfElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetElongationShapeFactorOfElement() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1643, "TestGetElongationShapeFactorOfElement" ) {}
 void runTest() { suite_TestVertexMesh.TestGetElongationShapeFactorOfElement(); }
} testDescription_TestVertexMesh_TestGetElongationShapeFactorOfElement;

static class TestDescription_TestVertexMesh_TestScaleAndTranslate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestScaleAndTranslate() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1694, "TestScaleAndTranslate" ) {}
 void runTest() { suite_TestVertexMesh.TestScaleAndTranslate(); }
} testDescription_TestVertexMesh_TestScaleAndTranslate;

static class TestDescription_TestVertexMesh_TestBoundaryNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestBoundaryNodes() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1758, "TestBoundaryNodes" ) {}
 void runTest() { suite_TestVertexMesh.TestBoundaryNodes(); }
} testDescription_TestVertexMesh_TestBoundaryNodes;

static class TestDescription_TestVertexMesh_TestTranslation2DWithUblas : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestTranslation2DWithUblas() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1803, "TestTranslation2DWithUblas" ) {}
 void runTest() { suite_TestVertexMesh.TestTranslation2DWithUblas(); }
} testDescription_TestVertexMesh_TestTranslation2DWithUblas;

static class TestDescription_TestVertexMesh_TestTranslation2DMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestTranslation2DMethod() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1830, "TestTranslation2DMethod" ) {}
 void runTest() { suite_TestVertexMesh.TestTranslation2DMethod(); }
} testDescription_TestVertexMesh_TestTranslation2DMethod;

static class TestDescription_TestVertexMesh_TestGenerateVerticesFromElementCircumcentres : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGenerateVerticesFromElementCircumcentres() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1851, "TestGenerateVerticesFromElementCircumcentres" ) {}
 void runTest() { suite_TestVertexMesh.TestGenerateVerticesFromElementCircumcentres(); }
} testDescription_TestVertexMesh_TestGenerateVerticesFromElementCircumcentres;

static class TestDescription_TestVertexMesh_TestTessellationConstructor2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestTessellationConstructor2d() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1900, "TestTessellationConstructor2d" ) {}
 void runTest() { suite_TestVertexMesh.TestTessellationConstructor2d(); }
} testDescription_TestVertexMesh_TestTessellationConstructor2d;

static class TestDescription_TestVertexMesh_TestTessellationConstructor2dWithGhostNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestTessellationConstructor2dWithGhostNodes() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1947, "TestTessellationConstructor2dWithGhostNodes" ) {}
 void runTest() { suite_TestVertexMesh.TestTessellationConstructor2dWithGhostNodes(); }
} testDescription_TestVertexMesh_TestTessellationConstructor2dWithGhostNodes;

static class TestDescription_TestVertexMesh_TestGetEdgeLengthWithSimpleMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestGetEdgeLengthWithSimpleMesh() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 1983, "TestGetEdgeLengthWithSimpleMesh" ) {}
 void runTest() { suite_TestVertexMesh.TestGetEdgeLengthWithSimpleMesh(); }
} testDescription_TestVertexMesh_TestGetEdgeLengthWithSimpleMesh;

static class TestDescription_TestVertexMesh_TestTessellationConstructor3dWithGhostNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestTessellationConstructor3dWithGhostNode() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 2017, "TestTessellationConstructor3dWithGhostNode" ) {}
 void runTest() { suite_TestVertexMesh.TestTessellationConstructor3dWithGhostNode(); }
} testDescription_TestVertexMesh_TestTessellationConstructor3dWithGhostNode;

static class TestDescription_TestVertexMesh_TestTessellationConstructor3dWithRepeatedCircumcentres : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexMesh_TestTessellationConstructor3dWithRepeatedCircumcentres() : CxxTest::RealTestDescription( Tests_TestVertexMesh, suiteDescription_TestVertexMesh, 2104, "TestTessellationConstructor3dWithRepeatedCircumcentres" ) {}
 void runTest() { suite_TestVertexMesh.TestTessellationConstructor3dWithRepeatedCircumcentres(); }
} testDescription_TestVertexMesh_TestTessellationConstructor3dWithRepeatedCircumcentres;

#include <cxxtest/Root.cpp>
