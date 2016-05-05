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
#include "mesh/test/TestTetrahedralMesh.hpp"

static TestTetrahedralMesh suite_TestTetrahedralMesh;

static CxxTest::List Tests_TestTetrahedralMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTetrahedralMesh( "mesh/test/TestTetrahedralMesh.hpp", 55, "TestTetrahedralMesh", suite_TestTetrahedralMesh, Tests_TestTetrahedralMesh );

static class TestDescription_TestTetrahedralMesh_TestNodeIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestNodeIterator() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 59, "TestNodeIterator" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestNodeIterator(); }
} testDescription_TestTetrahedralMesh_TestNodeIterator;

static class TestDescription_TestTetrahedralMesh_TestElementIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestElementIterator() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 86, "TestElementIterator" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestElementIterator(); }
} testDescription_TestTetrahedralMesh_TestElementIterator;

static class TestDescription_TestTetrahedralMesh_TestMeshConstructionFromMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshConstructionFromMeshReader() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 113, "TestMeshConstructionFromMeshReader" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshConstructionFromMeshReader(); }
} testDescription_TestTetrahedralMesh_TestMeshConstructionFromMeshReader;

static class TestDescription_TestTetrahedralMesh_TestMeshMoreStatisticsHeart : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshMoreStatisticsHeart() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 154, "TestMeshMoreStatisticsHeart" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshMoreStatisticsHeart(); }
} testDescription_TestTetrahedralMesh_TestMeshMoreStatisticsHeart;

static class TestDescription_TestTetrahedralMesh_TestMeshMoreStatisticsTumour : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshMoreStatisticsTumour() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 163, "TestMeshMoreStatisticsTumour" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshMoreStatisticsTumour(); }
} testDescription_TestTetrahedralMesh_TestMeshMoreStatisticsTumour;

static class TestDescription_TestTetrahedralMesh_TestMeshStatisticsSimple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshStatisticsSimple() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 172, "TestMeshStatisticsSimple" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshStatisticsSimple(); }
} testDescription_TestTetrahedralMesh_TestMeshStatisticsSimple;

static class TestDescription_TestTetrahedralMesh_TestMeshConstructionFromMeshReaderIndexedFromOne : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshConstructionFromMeshReaderIndexedFromOne() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 183, "TestMeshConstructionFromMeshReaderIndexedFromOne" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshConstructionFromMeshReaderIndexedFromOne(); }
} testDescription_TestTetrahedralMesh_TestMeshConstructionFromMeshReaderIndexedFromOne;

static class TestDescription_TestTetrahedralMesh_Test3dMeshConstructionFromMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test3dMeshConstructionFromMeshReader() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 207, "Test3dMeshConstructionFromMeshReader" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test3dMeshConstructionFromMeshReader(); }
} testDescription_TestTetrahedralMesh_Test3dMeshConstructionFromMeshReader;

static class TestDescription_TestTetrahedralMesh_TestConstructionFromMeshReaderWithNodeAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestConstructionFromMeshReaderWithNodeAttributes() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 243, "TestConstructionFromMeshReaderWithNodeAttributes" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestConstructionFromMeshReaderWithNodeAttributes(); }
} testDescription_TestTetrahedralMesh_TestConstructionFromMeshReaderWithNodeAttributes;

static class TestDescription_TestTetrahedralMesh_Test3dMeshConstructionFromMeshReader2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test3dMeshConstructionFromMeshReader2() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 273, "Test3dMeshConstructionFromMeshReader2" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test3dMeshConstructionFromMeshReader2(); }
} testDescription_TestTetrahedralMesh_Test3dMeshConstructionFromMeshReader2;

static class TestDescription_TestTetrahedralMesh_TestMeshWithBoundaryElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshWithBoundaryElements() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 290, "TestMeshWithBoundaryElements" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshWithBoundaryElements(); }
} testDescription_TestTetrahedralMesh_TestMeshWithBoundaryElements;

static class TestDescription_TestTetrahedralMesh_Test1DClosedMeshIn2DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test1DClosedMeshIn2DSpace() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 313, "Test1DClosedMeshIn2DSpace" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test1DClosedMeshIn2DSpace(); }
} testDescription_TestTetrahedralMesh_Test1DClosedMeshIn2DSpace;

static class TestDescription_TestTetrahedralMesh_Test1DMeshIn2DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test1DMeshIn2DSpace() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 327, "Test1DMeshIn2DSpace" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test1DMeshIn2DSpace(); }
} testDescription_TestTetrahedralMesh_Test1DMeshIn2DSpace;

static class TestDescription_TestTetrahedralMesh_Test1DBranchedMeshIn3DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test1DBranchedMeshIn3DSpace() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 339, "Test1DBranchedMeshIn3DSpace" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test1DBranchedMeshIn3DSpace(); }
} testDescription_TestTetrahedralMesh_Test1DBranchedMeshIn3DSpace;

static class TestDescription_TestTetrahedralMesh_Test2DClosedMeshIn3DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test2DClosedMeshIn3DSpace() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 351, "Test2DClosedMeshIn3DSpace" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test2DClosedMeshIn3DSpace(); }
} testDescription_TestTetrahedralMesh_Test2DClosedMeshIn3DSpace;

static class TestDescription_TestTetrahedralMesh_Test2DMeshIn3DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test2DMeshIn3DSpace() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 362, "Test2DMeshIn3DSpace" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test2DMeshIn3DSpace(); }
} testDescription_TestTetrahedralMesh_Test2DMeshIn3DSpace;

static class TestDescription_TestTetrahedralMesh_Test1DMeshCrossReference : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test1DMeshCrossReference() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 380, "Test1DMeshCrossReference" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test1DMeshCrossReference(); }
} testDescription_TestTetrahedralMesh_Test1DMeshCrossReference;

static class TestDescription_TestTetrahedralMesh_Test2DMeshCrossReference : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test2DMeshCrossReference() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 439, "Test2DMeshCrossReference" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test2DMeshCrossReference(); }
} testDescription_TestTetrahedralMesh_Test2DMeshCrossReference;

static class TestDescription_TestTetrahedralMesh_Test3DMeshCrossReference : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test3DMeshCrossReference() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 492, "Test3DMeshCrossReference" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test3DMeshCrossReference(); }
} testDescription_TestTetrahedralMesh_Test3DMeshCrossReference;

static class TestDescription_TestTetrahedralMesh_TestCalculateDesignatedOwnership : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestCalculateDesignatedOwnership() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 538, "TestCalculateDesignatedOwnership" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestCalculateDesignatedOwnership(); }
} testDescription_TestTetrahedralMesh_TestCalculateDesignatedOwnership;

static class TestDescription_TestTetrahedralMesh_TestNodePermutation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestNodePermutation() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 570, "TestNodePermutation" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestNodePermutation(); }
} testDescription_TestTetrahedralMesh_TestNodePermutation;

static class TestDescription_TestTetrahedralMesh_TestConstructRectangleStagger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestConstructRectangleStagger() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 612, "TestConstructRectangleStagger" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestConstructRectangleStagger(); }
} testDescription_TestTetrahedralMesh_TestConstructRectangleStagger;

static class TestDescription_TestTetrahedralMesh_TestConstructRectangleNoStagger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestConstructRectangleNoStagger() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 689, "TestConstructRectangleNoStagger" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestConstructRectangleNoStagger(); }
} testDescription_TestTetrahedralMesh_TestConstructRectangleNoStagger;

static class TestDescription_TestTetrahedralMesh_TestConstructLine : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestConstructLine() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 756, "TestConstructLine" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestConstructLine(); }
} testDescription_TestTetrahedralMesh_TestConstructLine;

static class TestDescription_TestTetrahedralMesh_TestConstructLineIn3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestConstructLineIn3D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 784, "TestConstructLineIn3D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestConstructLineIn3D(); }
} testDescription_TestTetrahedralMesh_TestConstructLineIn3D;

static class TestDescription_TestTetrahedralMesh_TestSetOwnerships : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestSetOwnerships() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 801, "TestSetOwnerships" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestSetOwnerships(); }
} testDescription_TestTetrahedralMesh_TestSetOwnerships;

static class TestDescription_TestTetrahedralMesh_TestOutwardNormal3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestOutwardNormal3D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 832, "TestOutwardNormal3D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestOutwardNormal3D(); }
} testDescription_TestTetrahedralMesh_TestOutwardNormal3D;

static class TestDescription_TestTetrahedralMesh_TestCheckOutwardNormals : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestCheckOutwardNormals() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 851, "TestCheckOutwardNormals" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestCheckOutwardNormals(); }
} testDescription_TestTetrahedralMesh_TestCheckOutwardNormals;

static class TestDescription_TestTetrahedralMesh_TestConstructCuboid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestConstructCuboid() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 903, "TestConstructCuboid" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestConstructCuboid(); }
} testDescription_TestTetrahedralMesh_TestConstructCuboid;

static class TestDescription_TestTetrahedralMesh_TestPermute : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPermute() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 977, "TestPermute" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPermute(); }
} testDescription_TestTetrahedralMesh_TestPermute;

static class TestDescription_TestTetrahedralMesh_TestClear : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestClear() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1047, "TestClear" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestClear(); }
} testDescription_TestTetrahedralMesh_TestClear;

static class TestDescription_TestTetrahedralMesh_TestGetVectorBetweenPoints : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestGetVectorBetweenPoints() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1065, "TestGetVectorBetweenPoints" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestGetVectorBetweenPoints(); }
} testDescription_TestTetrahedralMesh_TestGetVectorBetweenPoints;

static class TestDescription_TestTetrahedralMesh_TestMeshGetWidthAndBoundingBoxMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshGetWidthAndBoundingBoxMethod() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1103, "TestMeshGetWidthAndBoundingBoxMethod" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshGetWidthAndBoundingBoxMethod(); }
} testDescription_TestTetrahedralMesh_TestMeshGetWidthAndBoundingBoxMethod;

static class TestDescription_TestTetrahedralMesh_TestPointWeightsInElement1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPointWeightsInElement1D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1122, "TestPointWeightsInElement1D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPointWeightsInElement1D(); }
} testDescription_TestTetrahedralMesh_TestPointWeightsInElement1D;

static class TestDescription_TestTetrahedralMesh_TestPointInElement1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPointInElement1D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1151, "TestPointInElement1D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPointInElement1D(); }
} testDescription_TestTetrahedralMesh_TestPointInElement1D;

static class TestDescription_TestTetrahedralMesh_TestPointinMesh1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPointinMesh1D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1171, "TestPointinMesh1D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPointinMesh1D(); }
} testDescription_TestTetrahedralMesh_TestPointinMesh1D;

static class TestDescription_TestTetrahedralMesh_TestPointWeightsAndInclusion2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPointWeightsAndInclusion2D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1205, "TestPointWeightsAndInclusion2D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPointWeightsAndInclusion2D(); }
} testDescription_TestTetrahedralMesh_TestPointWeightsAndInclusion2D;

static class TestDescription_TestTetrahedralMesh_TestPointinMesh2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPointinMesh2D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1252, "TestPointinMesh2D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPointinMesh2D(); }
} testDescription_TestTetrahedralMesh_TestPointinMesh2D;

static class TestDescription_TestTetrahedralMesh_TestPointInElement3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPointInElement3D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1300, "TestPointInElement3D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPointInElement3D(); }
} testDescription_TestTetrahedralMesh_TestPointInElement3D;

static class TestDescription_TestTetrahedralMesh_TestPointinMesh3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestPointinMesh3D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1366, "TestPointinMesh3D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestPointinMesh3D(); }
} testDescription_TestTetrahedralMesh_TestPointinMesh3D;

static class TestDescription_TestTetrahedralMesh_TestFloatingPointIn3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestFloatingPointIn3D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1431, "TestFloatingPointIn3D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestFloatingPointIn3D(); }
} testDescription_TestTetrahedralMesh_TestFloatingPointIn3D;

static class TestDescription_TestTetrahedralMesh_TestGetAngleBetweenNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestGetAngleBetweenNodes() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1455, "TestGetAngleBetweenNodes" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestGetAngleBetweenNodes(); }
} testDescription_TestTetrahedralMesh_TestGetAngleBetweenNodes;

static class TestDescription_TestTetrahedralMesh_TestNodesPerProcessorFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestNodesPerProcessorFile() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1470, "TestNodesPerProcessorFile" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestNodesPerProcessorFile(); }
} testDescription_TestTetrahedralMesh_TestNodesPerProcessorFile;

static class TestDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsAndGenericReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsAndGenericReader() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1504, "TestReadingMeshesWithRegionsAndGenericReader" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestReadingMeshesWithRegionsAndGenericReader(); }
} testDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsAndGenericReader;

static class TestDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsElementsAndFaces3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsElementsAndFaces3D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1519, "TestReadingMeshesWithRegionsElementsAndFaces3D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestReadingMeshesWithRegionsElementsAndFaces3D(); }
} testDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsElementsAndFaces3D;

static class TestDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsElementsAndFaces2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsElementsAndFaces2D() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1546, "TestReadingMeshesWithRegionsElementsAndFaces2D" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestReadingMeshesWithRegionsElementsAndFaces2D(); }
} testDescription_TestTetrahedralMesh_TestReadingMeshesWithRegionsElementsAndFaces2D;

static class TestDescription_TestTetrahedralMesh_Test1DIn3DBranchWithAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_Test1DIn3DBranchWithAttributes() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1578, "Test1DIn3DBranchWithAttributes" ) {}
 void runTest() { suite_TestTetrahedralMesh.Test1DIn3DBranchWithAttributes(); }
} testDescription_TestTetrahedralMesh_Test1DIn3DBranchWithAttributes;

static class TestDescription_TestTetrahedralMesh_TestCuboidMeshConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestCuboidMeshConstructors() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1593, "TestCuboidMeshConstructors" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestCuboidMeshConstructors(); }
} testDescription_TestTetrahedralMesh_TestCuboidMeshConstructors;

static class TestDescription_TestTetrahedralMesh_TestMeshStoresFilename : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestMeshStoresFilename() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1618, "TestMeshStoresFilename" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestMeshStoresFilename(); }
} testDescription_TestTetrahedralMesh_TestMeshStoresFilename;

static class TestDescription_TestTetrahedralMesh_TestCalculateBoundingBox : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestCalculateBoundingBox() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1640, "TestCalculateBoundingBox" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestCalculateBoundingBox(); }
} testDescription_TestTetrahedralMesh_TestCalculateBoundingBox;

static class TestDescription_TestTetrahedralMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1681, "TestArchiving" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestArchiving(); }
} testDescription_TestTetrahedralMesh_TestArchiving;

static class TestDescription_TestTetrahedralMesh_TestArchiving2din3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestArchiving2din3d() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1734, "TestArchiving2din3d" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestArchiving2din3d(); }
} testDescription_TestTetrahedralMesh_TestArchiving2din3d;

static class TestDescription_TestTetrahedralMesh_TestDeepCopy : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestDeepCopy() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1786, "TestDeepCopy" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestDeepCopy(); }
} testDescription_TestTetrahedralMesh_TestDeepCopy;

static class TestDescription_TestTetrahedralMesh_TestNodeExchange : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestNodeExchange() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1824, "TestNodeExchange" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestNodeExchange(); }
} testDescription_TestTetrahedralMesh_TestNodeExchange;

static class TestDescription_TestTetrahedralMesh_TestCalculateEdgeLengths : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestCalculateEdgeLengths() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1880, "TestCalculateEdgeLengths" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestCalculateEdgeLengths(); }
} testDescription_TestTetrahedralMesh_TestCalculateEdgeLengths;

static class TestDescription_TestTetrahedralMesh_TestConstructSlabMeshWithDimensionSplit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTetrahedralMesh_TestConstructSlabMeshWithDimensionSplit() : CxxTest::RealTestDescription( Tests_TestTetrahedralMesh, suiteDescription_TestTetrahedralMesh, 1907, "TestConstructSlabMeshWithDimensionSplit" ) {}
 void runTest() { suite_TestTetrahedralMesh.TestConstructSlabMeshWithDimensionSplit(); }
} testDescription_TestTetrahedralMesh_TestConstructSlabMeshWithDimensionSplit;

#include <cxxtest/Root.cpp>
