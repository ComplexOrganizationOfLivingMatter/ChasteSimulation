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
#include "cell_based/test/mesh/TestPottsMesh.hpp"

static TestPottsMesh suite_TestPottsMesh;

static CxxTest::List Tests_TestPottsMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsMesh( "cell_based/test/mesh/TestPottsMesh.hpp", 51, "TestPottsMesh", suite_TestPottsMesh, Tests_TestPottsMesh );

static class TestDescription_TestPottsMesh_TestBasic2dPottsMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestBasic2dPottsMesh() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 54, "TestBasic2dPottsMesh" ) {}
 void runTest() { suite_TestPottsMesh.TestBasic2dPottsMesh(); }
} testDescription_TestPottsMesh_TestBasic2dPottsMesh;

static class TestDescription_TestPottsMesh_TestBasic3dPottsMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestBasic3dPottsMesh() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 206, "TestBasic3dPottsMesh" ) {}
 void runTest() { suite_TestPottsMesh.TestBasic3dPottsMesh(); }
} testDescription_TestPottsMesh_TestBasic3dPottsMesh;

static class TestDescription_TestPottsMesh_TestConstructorExcepions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestConstructorExcepions() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 408, "TestConstructorExcepions" ) {}
 void runTest() { suite_TestPottsMesh.TestConstructorExcepions(); }
} testDescription_TestPottsMesh_TestConstructorExcepions;

static class TestDescription_TestPottsMesh_TestNodeIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestNodeIterator() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 450, "TestNodeIterator" ) {}
 void runTest() { suite_TestPottsMesh.TestNodeIterator(); }
} testDescription_TestPottsMesh_TestNodeIterator;

static class TestDescription_TestPottsMesh_TestPottsElementIterator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestPottsElementIterator() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 495, "TestPottsElementIterator" ) {}
 void runTest() { suite_TestPottsMesh.TestPottsElementIterator(); }
} testDescription_TestPottsMesh_TestPottsElementIterator;

static class TestDescription_TestPottsMesh_TestMeshGetWidthAndBoundingBoxMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestMeshGetWidthAndBoundingBoxMethod() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 545, "TestMeshGetWidthAndBoundingBoxMethod" ) {}
 void runTest() { suite_TestPottsMesh.TestMeshGetWidthAndBoundingBoxMethod(); }
} testDescription_TestPottsMesh_TestMeshGetWidthAndBoundingBoxMethod;

static class TestDescription_TestPottsMesh_TestGetMooreNeighbouringNodeIndices2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestGetMooreNeighbouringNodeIndices2d() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 566, "TestGetMooreNeighbouringNodeIndices2d" ) {}
 void runTest() { suite_TestPottsMesh.TestGetMooreNeighbouringNodeIndices2d(); }
} testDescription_TestPottsMesh_TestGetMooreNeighbouringNodeIndices2d;

static class TestDescription_TestPottsMesh_TestGetMooreNeighbouringNodeIndices3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestGetMooreNeighbouringNodeIndices3d() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 744, "TestGetMooreNeighbouringNodeIndices3d" ) {}
 void runTest() { suite_TestPottsMesh.TestGetMooreNeighbouringNodeIndices3d(); }
} testDescription_TestPottsMesh_TestGetMooreNeighbouringNodeIndices3d;

static class TestDescription_TestPottsMesh_TestGetVonNeumannNeighbouringNodeIndices2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestGetVonNeumannNeighbouringNodeIndices2d() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 896, "TestGetVonNeumannNeighbouringNodeIndices2d" ) {}
 void runTest() { suite_TestPottsMesh.TestGetVonNeumannNeighbouringNodeIndices2d(); }
} testDescription_TestPottsMesh_TestGetVonNeumannNeighbouringNodeIndices2d;

static class TestDescription_TestPottsMesh_TestGetVonNeumannNeighbouringNodeIndices3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestGetVonNeumannNeighbouringNodeIndices3d() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1039, "TestGetVonNeumannNeighbouringNodeIndices3d" ) {}
 void runTest() { suite_TestPottsMesh.TestGetVonNeumannNeighbouringNodeIndices3d(); }
} testDescription_TestPottsMesh_TestGetVonNeumannNeighbouringNodeIndices3d;

static class TestDescription_TestPottsMesh_Test2dScaleAndTranslate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_Test2dScaleAndTranslate() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1289, "Test2dScaleAndTranslate" ) {}
 void runTest() { suite_TestPottsMesh.Test2dScaleAndTranslate(); }
} testDescription_TestPottsMesh_Test2dScaleAndTranslate;

static class TestDescription_TestPottsMesh_TestTranslation2DWithUblas : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestTranslation2DWithUblas() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1326, "TestTranslation2DWithUblas" ) {}
 void runTest() { suite_TestPottsMesh.TestTranslation2DWithUblas(); }
} testDescription_TestPottsMesh_TestTranslation2DWithUblas;

static class TestDescription_TestPottsMesh_TestAddElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestAddElement() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1353, "TestAddElement" ) {}
 void runTest() { suite_TestPottsMesh.TestAddElement(); }
} testDescription_TestPottsMesh_TestAddElement;

static class TestDescription_TestPottsMesh_TestDividePottsElementIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestDividePottsElementIn2d() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1393, "TestDividePottsElementIn2d" ) {}
 void runTest() { suite_TestPottsMesh.TestDividePottsElementIn2d(); }
} testDescription_TestPottsMesh_TestDividePottsElementIn2d;

static class TestDescription_TestPottsMesh_TestDividePottsElementIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestDividePottsElementIn3d() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1529, "TestDividePottsElementIn3d" ) {}
 void runTest() { suite_TestPottsMesh.TestDividePottsElementIn3d(); }
} testDescription_TestPottsMesh_TestDividePottsElementIn3d;

static class TestDescription_TestPottsMesh_TestDeleteAndDividePottsElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestDeleteAndDividePottsElement() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1635, "TestDeleteAndDividePottsElement" ) {}
 void runTest() { suite_TestPottsMesh.TestDeleteAndDividePottsElement(); }
} testDescription_TestPottsMesh_TestDeleteAndDividePottsElement;

static class TestDescription_TestPottsMesh_TestDeleteNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestDeleteNode() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1702, "TestDeleteNode" ) {}
 void runTest() { suite_TestPottsMesh.TestDeleteNode(); }
} testDescription_TestPottsMesh_TestDeleteNode;

static class TestDescription_TestPottsMesh_TestArchive2dPottsMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestArchive2dPottsMesh() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1777, "TestArchive2dPottsMesh" ) {}
 void runTest() { suite_TestPottsMesh.TestArchive2dPottsMesh(); }
} testDescription_TestPottsMesh_TestArchive2dPottsMesh;

static class TestDescription_TestPottsMesh_TestMeshConstructionFromMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMesh_TestMeshConstructionFromMeshReader() : CxxTest::RealTestDescription( Tests_TestPottsMesh, suiteDescription_TestPottsMesh, 1868, "TestMeshConstructionFromMeshReader" ) {}
 void runTest() { suite_TestPottsMesh.TestMeshConstructionFromMeshReader(); }
} testDescription_TestPottsMesh_TestMeshConstructionFromMeshReader;

#include <cxxtest/Root.cpp>
