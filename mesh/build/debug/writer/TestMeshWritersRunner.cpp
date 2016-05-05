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
#include "mesh/test/writer/TestMeshWriters.hpp"

static TestMeshWriters suite_TestMeshWriters;

static CxxTest::List Tests_TestMeshWriters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMeshWriters( "mesh/test/writer/TestMeshWriters.hpp", 62, "TestMeshWriters", suite_TestMeshWriters, Tests_TestMeshWriters );

static class TestDescription_TestMeshWriters_TestMemfemToTetgen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestMemfemToTetgen() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 67, "TestMemfemToTetgen" ) {}
 void runTest() { suite_TestMeshWriters.TestMemfemToTetgen(); }
} testDescription_TestMeshWriters_TestMemfemToTetgen;

static class TestDescription_TestMeshWriters_TestFemlabToTriangles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestFemlabToTriangles() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 78, "TestFemlabToTriangles" ) {}
 void runTest() { suite_TestMeshWriters.TestFemlabToTriangles(); }
} testDescription_TestMeshWriters_TestFemlabToTriangles;

static class TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer1d() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 97, "TestTrianglesToMeshalyzer1d" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToMeshalyzer1d(); }
} testDescription_TestMeshWriters_TestTrianglesToMeshalyzer1d;

static class TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer2d() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 105, "TestTrianglesToMeshalyzer2d" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToMeshalyzer2d(); }
} testDescription_TestMeshWriters_TestTrianglesToMeshalyzer2d;

static class TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer3d() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 113, "TestTrianglesToMeshalyzer3d" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToMeshalyzer3d(); }
} testDescription_TestMeshWriters_TestTrianglesToMeshalyzer3d;

static class TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer1dIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToMeshalyzer1dIn3d() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 121, "TestTrianglesToMeshalyzer1dIn3d" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToMeshalyzer1dIn3d(); }
} testDescription_TestMeshWriters_TestTrianglesToMeshalyzer1dIn3d;

static class TestDescription_TestMeshWriters_TestTrianglesToCoolGraphics : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToCoolGraphics() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 129, "TestTrianglesToCoolGraphics" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToCoolGraphics(); }
} testDescription_TestMeshWriters_TestTrianglesToCoolGraphics;

static class TestDescription_TestMeshWriters_TestFemlabtoTrianglesViaMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestFemlabtoTrianglesViaMesh() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 139, "TestFemlabtoTrianglesViaMesh" ) {}
 void runTest() { suite_TestMeshWriters.TestFemlabtoTrianglesViaMesh(); }
} testDescription_TestMeshWriters_TestFemlabtoTrianglesViaMesh;

static class TestDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh1d() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 160, "TestTrianglesToMeshalyzerViaMesh1d" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToMeshalyzerViaMesh1d(); }
} testDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh1d;

static class TestDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh2d() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 171, "TestTrianglesToMeshalyzerViaMesh2d" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToMeshalyzerViaMesh2d(); }
} testDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh2d;

static class TestDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh3d() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 182, "TestTrianglesToMeshalyzerViaMesh3d" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToMeshalyzerViaMesh3d(); }
} testDescription_TestMeshWriters_TestTrianglesToMeshalyzerViaMesh3d;

static class TestDescription_TestMeshWriters_TestTrianglesToCoolGraphicsViaMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTrianglesToCoolGraphicsViaMesh() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 204, "TestTrianglesToCoolGraphicsViaMesh" ) {}
 void runTest() { suite_TestMeshWriters.TestTrianglesToCoolGraphicsViaMesh(); }
} testDescription_TestMeshWriters_TestTrianglesToCoolGraphicsViaMesh;

static class TestDescription_TestMeshWriters_TestTriangles1DClosedMeshIn2DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTriangles1DClosedMeshIn2DSpace() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 216, "TestTriangles1DClosedMeshIn2DSpace" ) {}
 void runTest() { suite_TestMeshWriters.TestTriangles1DClosedMeshIn2DSpace(); }
} testDescription_TestMeshWriters_TestTriangles1DClosedMeshIn2DSpace;

static class TestDescription_TestMeshWriters_TestTriangles1DMeshIn2DSpaceBinary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTriangles1DMeshIn2DSpaceBinary() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 237, "TestTriangles1DMeshIn2DSpaceBinary" ) {}
 void runTest() { suite_TestMeshWriters.TestTriangles1DMeshIn2DSpaceBinary(); }
} testDescription_TestMeshWriters_TestTriangles1DMeshIn2DSpaceBinary;

static class TestDescription_TestMeshWriters_TestTriangles1DMeshIn2DSpaceWithDeletedNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestTriangles1DMeshIn2DSpaceWithDeletedNode() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 263, "TestTriangles1DMeshIn2DSpaceWithDeletedNode" ) {}
 void runTest() { suite_TestMeshWriters.TestTriangles1DMeshIn2DSpaceWithDeletedNode(); }
} testDescription_TestMeshWriters_TestTriangles1DMeshIn2DSpaceWithDeletedNode;

static class TestDescription_TestMeshWriters_Test2DClosedMeshIn3DSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_Test2DClosedMeshIn3DSpace() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 289, "Test2DClosedMeshIn3DSpace" ) {}
 void runTest() { suite_TestMeshWriters.Test2DClosedMeshIn3DSpace(); }
} testDescription_TestMeshWriters_Test2DClosedMeshIn3DSpace;

static class TestDescription_TestMeshWriters_Test2DMeshIn3DSpaceBinary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_Test2DMeshIn3DSpaceBinary() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 308, "Test2DMeshIn3DSpaceBinary" ) {}
 void runTest() { suite_TestMeshWriters.Test2DMeshIn3DSpaceBinary(); }
} testDescription_TestMeshWriters_Test2DMeshIn3DSpaceBinary;

static class TestDescription_TestMeshWriters_TestQuadratic1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestQuadratic1D() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 333, "TestQuadratic1D" ) {}
 void runTest() { suite_TestMeshWriters.TestQuadratic1D(); }
} testDescription_TestMeshWriters_TestQuadratic1D;

static class TestDescription_TestMeshWriters_TestQuadratic2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestQuadratic2D() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 357, "TestQuadratic2D" ) {}
 void runTest() { suite_TestMeshWriters.TestQuadratic2D(); }
} testDescription_TestMeshWriters_TestQuadratic2D;

static class TestDescription_TestMeshWriters_TestQuadratic3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestQuadratic3D() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 381, "TestQuadratic3D" ) {}
 void runTest() { suite_TestMeshWriters.TestQuadratic3D(); }
} testDescription_TestMeshWriters_TestQuadratic3D;

static class TestDescription_TestMeshWriters_TestCmguiMeshWriter3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiMeshWriter3D() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 405, "TestCmguiMeshWriter3D" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiMeshWriter3D(); }
} testDescription_TestMeshWriters_TestCmguiMeshWriter3D;

static class TestDescription_TestMeshWriters_TestCmguiMeshWriter2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiMeshWriter2D() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 445, "TestCmguiMeshWriter2D" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiMeshWriter2D(); }
} testDescription_TestMeshWriters_TestCmguiMeshWriter2D;

static class TestDescription_TestMeshWriters_TestCmguiMeshWriter1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiMeshWriter1D() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 485, "TestCmguiMeshWriter1D" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiMeshWriter1D(); }
} testDescription_TestMeshWriters_TestCmguiMeshWriter1D;

static class TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter2dLinearViz : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter2dLinearViz() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 525, "TestCmguiDeformedSolutionsWriter2dLinearViz" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiDeformedSolutionsWriter2dLinearViz(); }
} testDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter2dLinearViz;

static class TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter2dQuadraticViz : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter2dQuadraticViz() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 633, "TestCmguiDeformedSolutionsWriter2dQuadraticViz" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiDeformedSolutionsWriter2dQuadraticViz(); }
} testDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter2dQuadraticViz;

static class TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter3dQuadraticViz : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter3dQuadraticViz() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 702, "TestCmguiDeformedSolutionsWriter3dQuadraticViz" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiDeformedSolutionsWriter3dQuadraticViz(); }
} testDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriter3dQuadraticViz;

static class TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriterConvertOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriterConvertOutput() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 756, "TestCmguiDeformedSolutionsWriterConvertOutput" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiDeformedSolutionsWriterConvertOutput(); }
} testDescription_TestMeshWriters_TestCmguiDeformedSolutionsWriterConvertOutput;

static class TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsMeshType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestCmguiDeformedSolutionsMeshType() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 805, "TestCmguiDeformedSolutionsMeshType" ) {}
 void runTest() { suite_TestMeshWriters.TestCmguiDeformedSolutionsMeshType(); }
} testDescription_TestMeshWriters_TestCmguiDeformedSolutionsMeshType;

static class TestDescription_TestMeshWriters_TestWritingElementAttributesInTrianglesFormat : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestWritingElementAttributesInTrianglesFormat() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 823, "TestWritingElementAttributesInTrianglesFormat" ) {}
 void runTest() { suite_TestMeshWriters.TestWritingElementAttributesInTrianglesFormat(); }
} testDescription_TestMeshWriters_TestWritingElementAttributesInTrianglesFormat;

static class TestDescription_TestMeshWriters_TestWritingAttributesInTrianglesFormat : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestWritingAttributesInTrianglesFormat() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 905, "TestWritingAttributesInTrianglesFormat" ) {}
 void runTest() { suite_TestMeshWriters.TestWritingAttributesInTrianglesFormat(); }
} testDescription_TestMeshWriters_TestWritingAttributesInTrianglesFormat;

static class TestDescription_TestMeshWriters_TestWritingBinaryFormat : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMeshWriters_TestWritingBinaryFormat() : CxxTest::RealTestDescription( Tests_TestMeshWriters, suiteDescription_TestMeshWriters, 999, "TestWritingBinaryFormat" ) {}
 void runTest() { suite_TestMeshWriters.TestWritingBinaryFormat(); }
} testDescription_TestMeshWriters_TestWritingBinaryFormat;

#include <cxxtest/Root.cpp>
