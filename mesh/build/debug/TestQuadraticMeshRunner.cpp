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
#include "mesh/test/TestQuadraticMesh.hpp"

static TestQuadraticMesh suite_TestQuadraticMesh;

static CxxTest::List Tests_TestQuadraticMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestQuadraticMesh( "mesh/test/TestQuadraticMesh.hpp", 51, "TestQuadraticMesh", suite_TestQuadraticMesh, Tests_TestQuadraticMesh );

static class TestDescription_TestQuadraticMesh_TestQuadraticMesh1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestQuadraticMesh1d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 55, "TestQuadraticMesh1d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestQuadraticMesh1d(); }
} testDescription_TestQuadraticMesh_TestQuadraticMesh1d;

static class TestDescription_TestQuadraticMesh_TestQuadraticMesh1dAutomaticallyGenerated : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestQuadraticMesh1dAutomaticallyGenerated() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 86, "TestQuadraticMesh1dAutomaticallyGenerated" ) {}
 void runTest() { suite_TestQuadraticMesh.TestQuadraticMesh1dAutomaticallyGenerated(); }
} testDescription_TestQuadraticMesh_TestQuadraticMesh1dAutomaticallyGenerated;

static class TestDescription_TestQuadraticMesh_TestQuadraticMesh2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestQuadraticMesh2d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 114, "TestQuadraticMesh2d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestQuadraticMesh2d(); }
} testDescription_TestQuadraticMesh_TestQuadraticMesh2d;

static class TestDescription_TestQuadraticMesh_TestQuadraticMesh3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestQuadraticMesh3d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 176, "TestQuadraticMesh3d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestQuadraticMesh3d(); }
} testDescription_TestQuadraticMesh_TestQuadraticMesh3d;

static class TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated2dMesh1 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated2dMesh1() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 253, "TestAutomaticallyGenerated2dMesh1" ) {}
 void runTest() { suite_TestQuadraticMesh.TestAutomaticallyGenerated2dMesh1(); }
} testDescription_TestQuadraticMesh_TestAutomaticallyGenerated2dMesh1;

static class TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated2dMesh2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated2dMesh2() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 324, "TestAutomaticallyGenerated2dMesh2" ) {}
 void runTest() { suite_TestQuadraticMesh.TestAutomaticallyGenerated2dMesh2(); }
} testDescription_TestQuadraticMesh_TestAutomaticallyGenerated2dMesh2;

static class TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated3dMeshSimple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated3dMeshSimple() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 348, "TestAutomaticallyGenerated3dMeshSimple" ) {}
 void runTest() { suite_TestQuadraticMesh.TestAutomaticallyGenerated3dMeshSimple(); }
} testDescription_TestQuadraticMesh_TestAutomaticallyGenerated3dMeshSimple;

static class TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated3dMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestAutomaticallyGenerated3dMesh() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 395, "TestAutomaticallyGenerated3dMesh" ) {}
 void runTest() { suite_TestQuadraticMesh.TestAutomaticallyGenerated3dMesh(); }
} testDescription_TestQuadraticMesh_TestAutomaticallyGenerated3dMesh;

static class TestDescription_TestQuadraticMesh_TestWritingReadingBoundaryElementsWithContainingElementInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestWritingReadingBoundaryElementsWithContainingElementInfo() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 417, "TestWritingReadingBoundaryElementsWithContainingElementInfo" ) {}
 void runTest() { suite_TestQuadraticMesh.TestWritingReadingBoundaryElementsWithContainingElementInfo(); }
} testDescription_TestQuadraticMesh_TestWritingReadingBoundaryElementsWithContainingElementInfo;

static class TestDescription_TestQuadraticMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 432, "TestArchiving" ) {}
 void runTest() { suite_TestQuadraticMesh.TestArchiving(); }
} testDescription_TestQuadraticMesh_TestArchiving;

static class TestDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_1d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 483, "TestConstructRegularSlabMesh_Directly_1d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestConstructRegularSlabMesh_Directly_1d(); }
} testDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_1d;

static class TestDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_2d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 528, "TestConstructRegularSlabMesh_Directly_2d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestConstructRegularSlabMesh_Directly_2d(); }
} testDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_2d;

static class TestDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_3d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 552, "TestConstructRegularSlabMesh_Directly_3d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestConstructRegularSlabMesh_Directly_3d(); }
} testDescription_TestQuadraticMesh_TestConstructRegularSlabMesh_Directly_3d;

static class TestDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction2dNoStagger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction2dNoStagger() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 576, "TestConstructionConversionVersusConstruction2dNoStagger" ) {}
 void runTest() { suite_TestQuadraticMesh.TestConstructionConversionVersusConstruction2dNoStagger(); }
} testDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction2dNoStagger;

static class TestDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction2dWithStagger : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction2dWithStagger() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 626, "TestConstructionConversionVersusConstruction2dWithStagger" ) {}
 void runTest() { suite_TestQuadraticMesh.TestConstructionConversionVersusConstruction2dWithStagger(); }
} testDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction2dWithStagger;

static class TestDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction3d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 676, "TestConstructionConversionVersusConstruction3d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestConstructionConversionVersusConstruction3d(); }
} testDescription_TestQuadraticMesh_TestConstructionConversionVersusConstruction3d;

static class TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion2d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 731, "TestLinearToQuadraticMeshConversion2d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestLinearToQuadraticMeshConversion2d(); }
} testDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion2d;

static class TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion2dNonconvex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion2dNonconvex() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 761, "TestLinearToQuadraticMeshConversion2dNonconvex" ) {}
 void runTest() { suite_TestQuadraticMesh.TestLinearToQuadraticMeshConversion2dNonconvex(); }
} testDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion2dNonconvex;

static class TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion3d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 786, "TestLinearToQuadraticMeshConversion3d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestLinearToQuadraticMeshConversion3d(); }
} testDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion3d;

static class TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion3dNonconvex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion3dNonconvex() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 817, "TestLinearToQuadraticMeshConversion3dNonconvex" ) {}
 void runTest() { suite_TestQuadraticMesh.TestLinearToQuadraticMeshConversion3dNonconvex(); }
} testDescription_TestQuadraticMesh_TestLinearToQuadraticMeshConversion3dNonconvex;

static class TestDescription_TestQuadraticMesh_TestQuadraticMesh2dReordered : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestQuadraticMesh2dReordered() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 841, "TestQuadraticMesh2dReordered" ) {}
 void runTest() { suite_TestQuadraticMesh.TestQuadraticMesh2dReordered(); }
} testDescription_TestQuadraticMesh_TestQuadraticMesh2dReordered;

static class TestDescription_TestQuadraticMesh_TestBuildQuadraticMeshFromVtkMeshReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestBuildQuadraticMeshFromVtkMeshReader() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 877, "TestBuildQuadraticMeshFromVtkMeshReader" ) {}
 void runTest() { suite_TestQuadraticMesh.TestBuildQuadraticMeshFromVtkMeshReader(); }
} testDescription_TestQuadraticMesh_TestBuildQuadraticMeshFromVtkMeshReader;

static class TestDescription_TestQuadraticMesh_TestElementsContainedByNodes3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestQuadraticMesh_TestElementsContainedByNodes3d() : CxxTest::RealTestDescription( Tests_TestQuadraticMesh, suiteDescription_TestQuadraticMesh, 1002, "TestElementsContainedByNodes3d" ) {}
 void runTest() { suite_TestQuadraticMesh.TestElementsContainedByNodes3d(); }
} testDescription_TestQuadraticMesh_TestElementsContainedByNodes3d;

#include <cxxtest/Root.cpp>
