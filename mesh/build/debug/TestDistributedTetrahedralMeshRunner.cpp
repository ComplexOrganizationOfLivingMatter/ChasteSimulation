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
#include "mesh/test/TestDistributedTetrahedralMesh.hpp"

static TestDistributedTetrahedralMesh suite_TestDistributedTetrahedralMesh;

static CxxTest::List Tests_TestDistributedTetrahedralMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDistributedTetrahedralMesh( "mesh/test/TestDistributedTetrahedralMesh.hpp", 60, "TestDistributedTetrahedralMesh", suite_TestDistributedTetrahedralMesh, Tests_TestDistributedTetrahedralMesh );

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader1D() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 314, "TestConstructFromMeshReader1D" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructFromMeshReader1D(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader1D;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader2DWithoutReordering : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader2DWithoutReordering() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 348, "TestConstructFromMeshReader2DWithoutReordering" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructFromMeshReader2DWithoutReordering(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader2DWithoutReordering;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader2DWithUnevenDistribution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader2DWithUnevenDistribution() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 468, "TestConstructFromMeshReader2DWithUnevenDistribution" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructFromMeshReader2DWithUnevenDistribution(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader2DWithUnevenDistribution;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader3D() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 518, "TestConstructFromMeshReader3D" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructFromMeshReader3D(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReader3D;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructionFromMeshReaderWithNodeAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructionFromMeshReaderWithNodeAttributes() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 583, "TestConstructionFromMeshReaderWithNodeAttributes" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructionFromMeshReaderWithNodeAttributes(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructionFromMeshReaderWithNodeAttributes;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReaderWithBinaryFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReaderWithBinaryFiles() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 628, "TestConstructFromMeshReaderWithBinaryFiles" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructFromMeshReaderWithBinaryFiles(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReaderWithBinaryFiles;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReaderWithNclFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReaderWithNclFile() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 648, "TestConstructFromMeshReaderWithNclFile" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructFromMeshReaderWithNclFile(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructFromMeshReaderWithNclFile;

static class TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedMetisLibrary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedMetisLibrary() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 668, "TestEverythingIsAssignedMetisLibrary" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestEverythingIsAssignedMetisLibrary(); }
} testDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedMetisLibrary;

static class TestDescription_TestDistributedTetrahedralMesh_TestRandomShuffle : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestRandomShuffle() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 681, "TestRandomShuffle" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestRandomShuffle(); }
} testDescription_TestDistributedTetrahedralMesh_TestRandomShuffle;

static class TestDescription_TestDistributedTetrahedralMesh_TestComparePartitionQualities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestComparePartitionQualities() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 732, "TestComparePartitionQualities" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestComparePartitionQualities(); }
} testDescription_TestDistributedTetrahedralMesh_TestComparePartitionQualities;

static class TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedParMetisLibraryAsciiFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedParMetisLibraryAsciiFiles() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 816, "TestEverythingIsAssignedParMetisLibraryAsciiFiles" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestEverythingIsAssignedParMetisLibraryAsciiFiles(); }
} testDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedParMetisLibraryAsciiFiles;

static class TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedParMetisLibraryBinaryFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedParMetisLibraryBinaryFiles() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 829, "TestEverythingIsAssignedParMetisLibraryBinaryFiles" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestEverythingIsAssignedParMetisLibraryBinaryFiles(); }
} testDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedParMetisLibraryBinaryFiles;

static class TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedPetscPartition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedPetscPartition() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 844, "TestEverythingIsAssignedPetscPartition" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestEverythingIsAssignedPetscPartition(); }
} testDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedPetscPartition;

static class TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedPetscPartitionBinaryFiles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedPetscPartitionBinaryFiles() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 860, "TestEverythingIsAssignedPetscPartitionBinaryFiles" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestEverythingIsAssignedPetscPartitionBinaryFiles(); }
} testDescription_TestDistributedTetrahedralMesh_TestEverythingIsAssignedPetscPartitionBinaryFiles;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstruct3DWithRegions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstruct3DWithRegions() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 877, "TestConstruct3DWithRegions" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstruct3DWithRegions(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstruct3DWithRegions;

static class TestDescription_TestDistributedTetrahedralMesh_TestMetisPartitioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestMetisPartitioning() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 914, "TestMetisPartitioning" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestMetisPartitioning(); }
} testDescription_TestDistributedTetrahedralMesh_TestMetisPartitioning;

static class TestDescription_TestDistributedTetrahedralMesh_TestPartitioningOfEmbeddedDimensionMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestPartitioningOfEmbeddedDimensionMesh() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 941, "TestPartitioningOfEmbeddedDimensionMesh" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestPartitioningOfEmbeddedDimensionMesh(); }
} testDescription_TestDistributedTetrahedralMesh_TestPartitioningOfEmbeddedDimensionMesh;

static class TestDescription_TestDistributedTetrahedralMesh_TestGeometricPartition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestGeometricPartition() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 958, "TestGeometricPartition" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestGeometricPartition(); }
} testDescription_TestDistributedTetrahedralMesh_TestGeometricPartition;

static class TestDescription_TestDistributedTetrahedralMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1022, "TestArchiving" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestArchiving(); }
} testDescription_TestDistributedTetrahedralMesh_TestArchiving;

static class TestDescription_TestDistributedTetrahedralMesh_TestArchivingBinaryMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestArchivingBinaryMesh() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1162, "TestArchivingBinaryMesh" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestArchivingBinaryMesh(); }
} testDescription_TestDistributedTetrahedralMesh_TestArchivingBinaryMesh;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMesh() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1336, "TestConstructLinearMesh" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructLinearMesh(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructLinearMesh;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshVerySmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshVerySmall() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1376, "TestConstructLinearMeshVerySmall" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructLinearMeshVerySmall(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshVerySmall;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshSmall() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1479, "TestConstructLinearMeshSmall" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructLinearMeshSmall(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshSmall;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMeshSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMeshSmall() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1506, "TestConstructRetangularMeshSmall" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructRetangularMeshSmall(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMeshSmall;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMesh() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1533, "TestConstructRetangularMesh" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructRetangularMesh(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMesh;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMeshStagger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMeshStagger() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1576, "TestConstructRetangularMeshStagger" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructRetangularMeshStagger(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructRetangularMeshStagger;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructCuboidMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructCuboidMesh() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1615, "TestConstructCuboidMesh" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructCuboidMesh(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructCuboidMesh;

static class TestDescription_TestDistributedTetrahedralMesh_TestNearestNodeIndex2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestNearestNodeIndex2D() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1681, "TestNearestNodeIndex2D" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestNearestNodeIndex2D(); }
} testDescription_TestDistributedTetrahedralMesh_TestNearestNodeIndex2D;

static class TestDescription_TestDistributedTetrahedralMesh_TestNearestNodeIndex1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestNearestNodeIndex1D() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1752, "TestNearestNodeIndex1D" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestNearestNodeIndex1D(); }
} testDescription_TestDistributedTetrahedralMesh_TestNearestNodeIndex1D;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructParallelCuboidMeshGeometricPartition : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructParallelCuboidMeshGeometricPartition() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1780, "TestConstructParallelCuboidMeshGeometricPartition" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructParallelCuboidMeshGeometricPartition(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructParallelCuboidMeshGeometricPartition;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshSmallest : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshSmallest() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1865, "TestConstructLinearMeshSmallest" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructLinearMeshSmallest(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructLinearMeshSmallest;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructRectangularMeshSmallest : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructRectangularMeshSmallest() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1904, "TestConstructRectangularMeshSmallest" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructRectangularMeshSmallest(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructRectangularMeshSmallest;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructCuboidMeshSmallest : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructCuboidMeshSmallest() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1937, "TestConstructCuboidMeshSmallest" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructCuboidMeshSmallest(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructCuboidMeshSmallest;

static class TestDescription_TestDistributedTetrahedralMesh_TestParallelWriting1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestParallelWriting1D() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1970, "TestParallelWriting1D" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestParallelWriting1D(); }
} testDescription_TestDistributedTetrahedralMesh_TestParallelWriting1D;

static class TestDescription_TestDistributedTetrahedralMesh_TestNodeExchange : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestNodeExchange() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 1991, "TestNodeExchange" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestNodeExchange(); }
} testDescription_TestDistributedTetrahedralMesh_TestNodeExchange;

static class TestDescription_TestDistributedTetrahedralMesh_TestParallelWriting3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestParallelWriting3D() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2038, "TestParallelWriting3D" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestParallelWriting3D(); }
} testDescription_TestDistributedTetrahedralMesh_TestParallelWriting3D;

static class TestDescription_TestDistributedTetrahedralMesh_TestEfficientParallelWriting3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestEfficientParallelWriting3D() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2071, "TestEfficientParallelWriting3D" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestEfficientParallelWriting3D(); }
} testDescription_TestDistributedTetrahedralMesh_TestEfficientParallelWriting3D;

static class TestDescription_TestDistributedTetrahedralMesh_TestArchiveOfConstructedMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestArchiveOfConstructedMesh() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2126, "TestArchiveOfConstructedMesh" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestArchiveOfConstructedMesh(); }
} testDescription_TestDistributedTetrahedralMesh_TestArchiveOfConstructedMesh;

static class TestDescription_TestDistributedTetrahedralMesh_TestLoadBadFacesException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestLoadBadFacesException() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2239, "TestLoadBadFacesException" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestLoadBadFacesException(); }
} testDescription_TestDistributedTetrahedralMesh_TestLoadBadFacesException;

static class TestDescription_TestDistributedTetrahedralMesh_TestWritingDistributedMeshBinary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestWritingDistributedMeshBinary() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2263, "TestWritingDistributedMeshBinary" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestWritingDistributedMeshBinary(); }
} testDescription_TestDistributedTetrahedralMesh_TestWritingDistributedMeshBinary;

static class TestDescription_TestDistributedTetrahedralMesh_TestCheckOutwardNormals : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestCheckOutwardNormals() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2293, "TestCheckOutwardNormals" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestCheckOutwardNormals(); }
} testDescription_TestDistributedTetrahedralMesh_TestCheckOutwardNormals;

static class TestDescription_TestDistributedTetrahedralMesh_TestCalculateEdgeLengths : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestCalculateEdgeLengths() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2307, "TestCalculateEdgeLengths" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestCalculateEdgeLengths(); }
} testDescription_TestDistributedTetrahedralMesh_TestCalculateEdgeLengths;

static class TestDescription_TestDistributedTetrahedralMesh_TestPartitionHasNoElementsWithAllHaloNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestPartitionHasNoElementsWithAllHaloNodes() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2334, "TestPartitionHasNoElementsWithAllHaloNodes" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestPartitionHasNoElementsWithAllHaloNodes(); }
} testDescription_TestDistributedTetrahedralMesh_TestPartitionHasNoElementsWithAllHaloNodes;

static class TestDescription_TestDistributedTetrahedralMesh_TestConstructSlabMeshWithDimensionSplit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedTetrahedralMesh_TestConstructSlabMeshWithDimensionSplit() : CxxTest::RealTestDescription( Tests_TestDistributedTetrahedralMesh, suiteDescription_TestDistributedTetrahedralMesh, 2362, "TestConstructSlabMeshWithDimensionSplit" ) {}
 void runTest() { suite_TestDistributedTetrahedralMesh.TestConstructSlabMeshWithDimensionSplit(); }
} testDescription_TestDistributedTetrahedralMesh_TestConstructSlabMeshWithDimensionSplit;

#include <cxxtest/Root.cpp>
