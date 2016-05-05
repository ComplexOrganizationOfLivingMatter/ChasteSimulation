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
#include "mesh/test/vertex/TestMutableVertexMeshReMesh.hpp"

static TestMutableVertexMeshReMesh suite_TestMutableVertexMeshReMesh;

static CxxTest::List Tests_TestMutableVertexMeshReMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMutableVertexMeshReMesh( "mesh/test/vertex/TestMutableVertexMeshReMesh.hpp", 49, "TestMutableVertexMeshReMesh", suite_TestMutableVertexMeshReMesh, Tests_TestMutableVertexMeshReMesh );

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformNodeMerge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformNodeMerge() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 53, "TestPerformNodeMerge" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformNodeMerge(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformNodeMerge;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformNodeMergeWhenLowIndexNodeMustBeAddedToElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformNodeMergeWhenLowIndexNodeMustBeAddedToElement() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 114, "TestPerformNodeMergeWhenLowIndexNodeMustBeAddedToElement" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformNodeMergeWhenLowIndexNodeMustBeAddedToElement(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformNodeMergeWhenLowIndexNodeMustBeAddedToElement;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapAndIdentifySwapType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapAndIdentifySwapType() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 186, "TestPerformT1SwapAndIdentifySwapType" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT1SwapAndIdentifySwapType(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapAndIdentifySwapType;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapOnBoundary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapOnBoundary() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 280, "TestPerformT1SwapOnBoundary" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT1SwapOnBoundary(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapOnBoundary;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapOnBoundary2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapOnBoundary2() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 368, "TestPerformT1SwapOnBoundary2" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT1SwapOnBoundary2(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapOnBoundary2;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapWhenVoidForms : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapWhenVoidForms() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 458, "TestPerformT1SwapWhenVoidForms" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT1SwapWhenVoidForms(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapWhenVoidForms;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapExceptions() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 532, "TestPerformT1SwapExceptions" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT1SwapExceptions(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapExceptions;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapWithAddingEdgeToTriangularElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapWithAddingEdgeToTriangularElement() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 578, "TestPerformT1SwapWithAddingEdgeToTriangularElement" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT1SwapWithAddingEdgeToTriangularElement(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT1SwapWithAddingEdgeToTriangularElement;

static class TestDescription_TestMutableVertexMeshReMesh_TestDoNotPerforT1SwapWithRemovingEdgeFromTriangularElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestDoNotPerforT1SwapWithRemovingEdgeFromTriangularElement() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 646, "TestDoNotPerforT1SwapWithRemovingEdgeFromTriangularElement" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestDoNotPerforT1SwapWithRemovingEdgeFromTriangularElement(); }
} testDescription_TestMutableVertexMeshReMesh_TestDoNotPerforT1SwapWithRemovingEdgeFromTriangularElement;

static class TestDescription_TestMutableVertexMeshReMesh_TestExceptionForVoidRemovalWithRemovingEdgeFromTriangularElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestExceptionForVoidRemovalWithRemovingEdgeFromTriangularElement() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 714, "TestExceptionForVoidRemovalWithRemovingEdgeFromTriangularElement" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestExceptionForVoidRemovalWithRemovingEdgeFromTriangularElement(); }
} testDescription_TestMutableVertexMeshReMesh_TestExceptionForVoidRemovalWithRemovingEdgeFromTriangularElement;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT2Swap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT2Swap() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 767, "TestPerformT2Swap" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT2Swap(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT2Swap;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT2SwapWithBoundaryNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT2SwapWithBoundaryNodes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 848, "TestPerformT2SwapWithBoundaryNodes" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT2SwapWithBoundaryNodes(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT2SwapWithBoundaryNodes;

static class TestDescription_TestMutableVertexMeshReMesh_TestT2SwapsDontOccurWithTriangularNeighbours : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestT2SwapsDontOccurWithTriangularNeighbours() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 983, "TestT2SwapsDontOccurWithTriangularNeighbours" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestT2SwapsDontOccurWithTriangularNeighbours(); }
} testDescription_TestMutableVertexMeshReMesh_TestT2SwapsDontOccurWithTriangularNeighbours;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT2SwapWithRosettes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT2SwapWithRosettes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1031, "TestPerformT2SwapWithRosettes" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT2SwapWithRosettes(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT2SwapWithRosettes;

static class TestDescription_TestMutableVertexMeshReMesh_TestReMeshForT1Swaps : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestReMeshForT1Swaps() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1133, "TestReMeshForT1Swaps" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestReMeshForT1Swaps(); }
} testDescription_TestMutableVertexMeshReMesh_TestReMeshForT1Swaps;

static class TestDescription_TestMutableVertexMeshReMesh_TestReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1184, "TestReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements(); }
} testDescription_TestMutableVertexMeshReMesh_TestReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements;

static class TestDescription_TestMutableVertexMeshReMesh_TestIdentifySwapTypeExceptionWhenBoundaryNodeIsContainedInThreeElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestIdentifySwapTypeExceptionWhenBoundaryNodeIsContainedInThreeElements() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1224, "TestIdentifySwapTypeExceptionWhenBoundaryNodeIsContainedInThreeElements" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestIdentifySwapTypeExceptionWhenBoundaryNodeIsContainedInThreeElements(); }
} testDescription_TestMutableVertexMeshReMesh_TestIdentifySwapTypeExceptionWhenBoundaryNodeIsContainedInThreeElements;

static class TestDescription_TestMutableVertexMeshReMesh_TestReMeshExceptionWhenNonBoundaryNodeIsContainedOnlyInTwoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestReMeshExceptionWhenNonBoundaryNodeIsContainedOnlyInTwoElements() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1273, "TestReMeshExceptionWhenNonBoundaryNodeIsContainedOnlyInTwoElements" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestReMeshExceptionWhenNonBoundaryNodeIsContainedOnlyInTwoElements(); }
} testDescription_TestMutableVertexMeshReMesh_TestReMeshExceptionWhenNonBoundaryNodeIsContainedOnlyInTwoElements;

static class TestDescription_TestMutableVertexMeshReMesh_TestAnotherReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestAnotherReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1313, "TestAnotherReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestAnotherReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements(); }
} testDescription_TestMutableVertexMeshReMesh_TestAnotherReMeshExceptionWhenNonBoundaryNodesAreContainedOnlyInTwoElements;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT3Swap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT3Swap() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1362, "TestPerformT3Swap" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT3Swap(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT3Swap;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT3SwapException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT3SwapException() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1521, "TestPerformT3SwapException" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT3SwapException(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT3SwapException;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformT3SwapAnotherException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformT3SwapAnotherException() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1573, "TestPerformT3SwapAnotherException" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformT3SwapAnotherException(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformT3SwapAnotherException;

static class TestDescription_TestMutableVertexMeshReMesh_TestT3SwapOnSmallEdge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestT3SwapOnSmallEdge() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1629, "TestT3SwapOnSmallEdge" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestT3SwapOnSmallEdge(); }
} testDescription_TestMutableVertexMeshReMesh_TestT3SwapOnSmallEdge;

static class TestDescription_TestMutableVertexMeshReMesh_TestConsecutiveT3SwapsForSmallEdges : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestConsecutiveT3SwapsForSmallEdges() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1724, "TestConsecutiveT3SwapsForSmallEdges" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestConsecutiveT3SwapsForSmallEdges(); }
} testDescription_TestMutableVertexMeshReMesh_TestConsecutiveT3SwapsForSmallEdges;

static class TestDescription_TestMutableVertexMeshReMesh_TestT3SwapForNeighbouringElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestT3SwapForNeighbouringElements() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1854, "TestT3SwapForNeighbouringElements" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestT3SwapForNeighbouringElements(); }
} testDescription_TestMutableVertexMeshReMesh_TestT3SwapForNeighbouringElements;

static class TestDescription_TestMutableVertexMeshReMesh_TestResolveTriangularOverlapAfterConsecutiveT3Swaps : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestResolveTriangularOverlapAfterConsecutiveT3Swaps() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 1975, "TestResolveTriangularOverlapAfterConsecutiveT3Swaps" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestResolveTriangularOverlapAfterConsecutiveT3Swaps(); }
} testDescription_TestMutableVertexMeshReMesh_TestResolveTriangularOverlapAfterConsecutiveT3Swaps;

static class TestDescription_TestMutableVertexMeshReMesh_TestT3SwapForNeighbouringElementsWithTwoCommonNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestT3SwapForNeighbouringElementsWithTwoCommonNodes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2092, "TestT3SwapForNeighbouringElementsWithTwoCommonNodes" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestT3SwapForNeighbouringElementsWithTwoCommonNodes(); }
} testDescription_TestMutableVertexMeshReMesh_TestT3SwapForNeighbouringElementsWithTwoCommonNodes;

static class TestDescription_TestMutableVertexMeshReMesh_TestReMeshForT3Swaps : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestReMeshForT3Swaps() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2217, "TestReMeshForT3Swaps" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestReMeshForT3Swaps(); }
} testDescription_TestMutableVertexMeshReMesh_TestReMeshForT3Swaps;

static class TestDescription_TestMutableVertexMeshReMesh_TestReMeshForRemovingVoids : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestReMeshForRemovingVoids() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2289, "TestReMeshForRemovingVoids" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestReMeshForRemovingVoids(); }
} testDescription_TestMutableVertexMeshReMesh_TestReMeshForRemovingVoids;

static class TestDescription_TestMutableVertexMeshReMesh_TestReMeshForRemovingVoidsException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestReMeshForRemovingVoidsException() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2383, "TestReMeshForRemovingVoidsException" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestReMeshForRemovingVoidsException(); }
} testDescription_TestMutableVertexMeshReMesh_TestReMeshForRemovingVoidsException;

static class TestDescription_TestMutableVertexMeshReMesh_TestT3SwapForRemovingVoids : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestT3SwapForRemovingVoids() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2462, "TestT3SwapForRemovingVoids" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestT3SwapForRemovingVoids(); }
} testDescription_TestMutableVertexMeshReMesh_TestT3SwapForRemovingVoids;

static class TestDescription_TestMutableVertexMeshReMesh_TestT3SwapWithConcaveElements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestT3SwapWithConcaveElements() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2556, "TestT3SwapWithConcaveElements" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestT3SwapWithConcaveElements(); }
} testDescription_TestMutableVertexMeshReMesh_TestT3SwapWithConcaveElements;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformIntersectionSwap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformIntersectionSwap() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2663, "TestPerformIntersectionSwap" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformIntersectionSwap(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformIntersectionSwap;

static class TestDescription_TestMutableVertexMeshReMesh_TestPerformIntersectionSwapOtherWayRound : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshReMesh_TestPerformIntersectionSwapOtherWayRound() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshReMesh, suiteDescription_TestMutableVertexMeshReMesh, 2743, "TestPerformIntersectionSwapOtherWayRound" ) {}
 void runTest() { suite_TestMutableVertexMeshReMesh.TestPerformIntersectionSwapOtherWayRound(); }
} testDescription_TestMutableVertexMeshReMesh_TestPerformIntersectionSwapOtherWayRound;

#include <cxxtest/Root.cpp>
