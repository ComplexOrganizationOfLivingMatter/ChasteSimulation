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
#include "mesh/test/TestMutableMeshRemesh.hpp"

static TestMutableMeshRemesh suite_TestMutableMeshRemesh;

static CxxTest::List Tests_TestMutableMeshRemesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMutableMeshRemesh( "mesh/test/TestMutableMeshRemesh.hpp", 57, "TestMutableMeshRemesh", suite_TestMutableMeshRemesh, Tests_TestMutableMeshRemesh );

static class TestDescription_TestMutableMeshRemesh_TestRemesh3dMoveNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRemesh3dMoveNodes() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 64, "TestRemesh3dMoveNodes" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRemesh3dMoveNodes(); }
} testDescription_TestMutableMeshRemesh_TestRemesh3dMoveNodes;

static class TestDescription_TestMutableMeshRemesh_TestRemeshWithMethod1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRemeshWithMethod1D() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 131, "TestRemeshWithMethod1D" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRemeshWithMethod1D(); }
} testDescription_TestMutableMeshRemesh_TestRemeshWithMethod1D;

static class TestDescription_TestMutableMeshRemesh_TestRemeshWithMethod2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRemeshWithMethod2D() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 289, "TestRemeshWithMethod2D" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRemeshWithMethod2D(); }
} testDescription_TestMutableMeshRemesh_TestRemeshWithMethod2D;

static class TestDescription_TestMutableMeshRemesh_TestRemeshWithMethod3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRemeshWithMethod3D() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 338, "TestRemeshWithMethod3D" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRemeshWithMethod3D(); }
} testDescription_TestMutableMeshRemesh_TestRemeshWithMethod3D;

static class TestDescription_TestMutableMeshRemesh_TestNodeMap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestNodeMap() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 377, "TestNodeMap" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestNodeMap(); }
} testDescription_TestMutableMeshRemesh_TestNodeMap;

static class TestDescription_TestMutableMeshRemesh_Test1DReMeshFailsAfterEnoughDeletions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_Test1DReMeshFailsAfterEnoughDeletions() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 403, "Test1DReMeshFailsAfterEnoughDeletions" ) {}
 void runTest() { suite_TestMutableMeshRemesh.Test1DReMeshFailsAfterEnoughDeletions(); }
} testDescription_TestMutableMeshRemesh_Test1DReMeshFailsAfterEnoughDeletions;

static class TestDescription_TestMutableMeshRemesh_Test2DReMeshFailsAfterEnoughDeletions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_Test2DReMeshFailsAfterEnoughDeletions() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 437, "Test2DReMeshFailsAfterEnoughDeletions" ) {}
 void runTest() { suite_TestMutableMeshRemesh.Test2DReMeshFailsAfterEnoughDeletions(); }
} testDescription_TestMutableMeshRemesh_Test2DReMeshFailsAfterEnoughDeletions;

static class TestDescription_TestMutableMeshRemesh_TestRawTriangleLibraryCall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRawTriangleLibraryCall() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 461, "TestRawTriangleLibraryCall" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRawTriangleLibraryCall(); }
} testDescription_TestMutableMeshRemesh_TestRawTriangleLibraryCall;

static class TestDescription_TestMutableMeshRemesh_TestRawTetgenLibraryCall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRawTetgenLibraryCall() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 515, "TestRawTetgenLibraryCall" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRawTetgenLibraryCall(); }
} testDescription_TestMutableMeshRemesh_TestRawTetgenLibraryCall;

static class TestDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethodSimple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethodSimple() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 565, "TestRemeshWithLibraryMethodSimple" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRemeshWithLibraryMethodSimple(); }
} testDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethodSimple;

static class TestDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethod2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethod2D() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 598, "TestRemeshWithLibraryMethod2D" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRemeshWithLibraryMethod2D(); }
} testDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethod2D;

static class TestDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethod3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethod3D() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 634, "TestRemeshWithLibraryMethod3D" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestRemeshWithLibraryMethod3D(); }
} testDescription_TestMutableMeshRemesh_TestRemeshWithLibraryMethod3D;

static class TestDescription_TestMutableMeshRemesh_TestSplitLongEdges : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableMeshRemesh_TestSplitLongEdges() : CxxTest::RealTestDescription( Tests_TestMutableMeshRemesh, suiteDescription_TestMutableMeshRemesh, 672, "TestSplitLongEdges" ) {}
 void runTest() { suite_TestMutableMeshRemesh.TestSplitLongEdges(); }
} testDescription_TestMutableMeshRemesh_TestSplitLongEdges;

#include <cxxtest/Root.cpp>
