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
#include "mesh/test/TestDistributedQuadraticMesh.hpp"

static TestDistributedQuadraticMesh suite_TestDistributedQuadraticMesh;

static CxxTest::List Tests_TestDistributedQuadraticMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDistributedQuadraticMesh( "mesh/test/TestDistributedQuadraticMesh.hpp", 56, "TestDistributedQuadraticMesh", suite_TestDistributedQuadraticMesh, Tests_TestDistributedQuadraticMesh );

static class TestDescription_TestDistributedQuadraticMesh_TestDumbMeshPartitioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestDumbMeshPartitioning() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 59, "TestDumbMeshPartitioning" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestDumbMeshPartitioning(); }
} testDescription_TestDistributedQuadraticMesh_TestDumbMeshPartitioning;

static class TestDescription_TestDistributedQuadraticMesh_TestMetisMeshPartitioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestMetisMeshPartitioning() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 100, "TestMetisMeshPartitioning" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestMetisMeshPartitioning(); }
} testDescription_TestDistributedQuadraticMesh_TestMetisMeshPartitioning;

static class TestDescription_TestDistributedQuadraticMesh_TestPetscMatrixPartitioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestPetscMatrixPartitioning() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 115, "TestPetscMatrixPartitioning" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestPetscMatrixPartitioning(); }
} testDescription_TestDistributedQuadraticMesh_TestPetscMatrixPartitioning;

static class TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader2D() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 209, "TestConstructFromMeshReader2D" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestConstructFromMeshReader2D(); }
} testDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader2D;

static class TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader2DWithPetscSupport : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader2DWithPetscSupport() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 313, "TestConstructFromMeshReader2DWithPetscSupport" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestConstructFromMeshReader2DWithPetscSupport(); }
} testDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader2DWithPetscSupport;

static class TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader3DElementHintsInFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader3DElementHintsInFile() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 340, "TestConstructFromMeshReader3DElementHintsInFile" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestConstructFromMeshReader3DElementHintsInFile(); }
} testDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader3DElementHintsInFile;

static class TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader3DFullyQuadratic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader3DFullyQuadratic() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 371, "TestConstructFromMeshReader3DFullyQuadratic" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestConstructFromMeshReader3DFullyQuadratic(); }
} testDescription_TestDistributedQuadraticMesh_TestConstructFromMeshReader3DFullyQuadratic;

static class TestDescription_TestDistributedQuadraticMesh_TestConstructFromLinearMeshReaderException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestConstructFromLinearMeshReaderException() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 394, "TestConstructFromLinearMeshReaderException" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestConstructFromLinearMeshReaderException(); }
} testDescription_TestDistributedQuadraticMesh_TestConstructFromLinearMeshReaderException;

static class TestDescription_TestDistributedQuadraticMesh_TestArchiveOfReadMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedQuadraticMesh_TestArchiveOfReadMesh() : CxxTest::RealTestDescription( Tests_TestDistributedQuadraticMesh, suiteDescription_TestDistributedQuadraticMesh, 404, "TestArchiveOfReadMesh" ) {}
 void runTest() { suite_TestDistributedQuadraticMesh.TestArchiveOfReadMesh(); }
} testDescription_TestDistributedQuadraticMesh_TestArchiveOfReadMesh;

#include <cxxtest/Root.cpp>
