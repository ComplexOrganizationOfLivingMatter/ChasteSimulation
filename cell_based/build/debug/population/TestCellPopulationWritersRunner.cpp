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
#include "cell_based/test/population/TestCellPopulationWriters.hpp"

static TestCellPopulationWriters suite_TestCellPopulationWriters;

static CxxTest::List Tests_TestCellPopulationWriters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellPopulationWriters( "cell_based/test/population/TestCellPopulationWriters.hpp", 82, "TestCellPopulationWriters", suite_TestCellPopulationWriters, Tests_TestCellPopulationWriters );

static class TestDescription_TestCellPopulationWriters_TestBoundaryNodeWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestBoundaryNodeWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 86, "TestBoundaryNodeWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestBoundaryNodeWriter(); }
} testDescription_TestCellPopulationWriters_TestBoundaryNodeWriter;

static class TestDescription_TestCellPopulationWriters_TestBoundaryNodeWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestBoundaryNodeWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 128, "TestBoundaryNodeWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestBoundaryNodeWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestBoundaryNodeWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestCellPopulationAdjacencyMatrixWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestCellPopulationAdjacencyMatrixWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 151, "TestCellPopulationAdjacencyMatrixWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestCellPopulationAdjacencyMatrixWriter(); }
} testDescription_TestCellPopulationWriters_TestCellPopulationAdjacencyMatrixWriter;

static class TestDescription_TestCellPopulationWriters_TestCellPopulationAdjacencyMatrixWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestCellPopulationAdjacencyMatrixWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 261, "TestCellPopulationAdjacencyMatrixWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestCellPopulationAdjacencyMatrixWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestCellPopulationAdjacencyMatrixWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestCellPopulationAreaWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestCellPopulationAreaWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 284, "TestCellPopulationAreaWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestCellPopulationAreaWriter(); }
} testDescription_TestCellPopulationWriters_TestCellPopulationAreaWriter;

static class TestDescription_TestCellPopulationWriters_TestCellPopulationAreaWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestCellPopulationAreaWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 328, "TestCellPopulationAreaWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestCellPopulationAreaWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestCellPopulationAreaWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestCellPopulationElementWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestCellPopulationElementWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 351, "TestCellPopulationElementWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestCellPopulationElementWriter(); }
} testDescription_TestCellPopulationWriters_TestCellPopulationElementWriter;

static class TestDescription_TestCellPopulationWriters_TestCellPopulationElementWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestCellPopulationElementWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 389, "TestCellPopulationElementWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestCellPopulationElementWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestCellPopulationElementWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestHeterotypicBoundaryLengthWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestHeterotypicBoundaryLengthWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 412, "TestHeterotypicBoundaryLengthWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestHeterotypicBoundaryLengthWriter(); }
} testDescription_TestCellPopulationWriters_TestHeterotypicBoundaryLengthWriter;

static class TestDescription_TestCellPopulationWriters_TestHeterotypicBoundaryLengthWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestHeterotypicBoundaryLengthWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 719, "TestHeterotypicBoundaryLengthWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestHeterotypicBoundaryLengthWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestHeterotypicBoundaryLengthWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestNodeLocationWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestNodeLocationWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 742, "TestNodeLocationWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestNodeLocationWriter(); }
} testDescription_TestCellPopulationWriters_TestNodeLocationWriter;

static class TestDescription_TestCellPopulationWriters_TestNodeLocationWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestNodeLocationWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 786, "TestNodeLocationWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestNodeLocationWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestNodeLocationWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithMeshBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithMeshBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 809, "TestNodeVelocityWriterWithMeshBasedCellPopulation" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestNodeVelocityWriterWithMeshBasedCellPopulation(); }
} testDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithMeshBasedCellPopulation;

static class TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithNodeBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithNodeBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 866, "TestNodeVelocityWriterWithNodeBasedCellPopulation" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestNodeVelocityWriterWithNodeBasedCellPopulation(); }
} testDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithNodeBasedCellPopulation;

static class TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithVertexBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithVertexBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 938, "TestNodeVelocityWriterWithVertexBasedCellPopulation" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestNodeVelocityWriterWithVertexBasedCellPopulation(); }
} testDescription_TestCellPopulationWriters_TestNodeVelocityWriterWithVertexBasedCellPopulation;

static class TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestNodeVelocityWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 989, "TestNodeVelocityWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestNodeVelocityWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestNodeVelocityWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestVertexT1SwapLocationsWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVertexT1SwapLocationsWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1012, "TestVertexT1SwapLocationsWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVertexT1SwapLocationsWriter(); }
} testDescription_TestCellPopulationWriters_TestVertexT1SwapLocationsWriter;

static class TestDescription_TestCellPopulationWriters_TestVertexT1SwapLocationsWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVertexT1SwapLocationsWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1111, "TestVertexT1SwapLocationsWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVertexT1SwapLocationsWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestVertexT1SwapLocationsWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestVertexT2SwapLocationsWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVertexT2SwapLocationsWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1135, "TestVertexT2SwapLocationsWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVertexT2SwapLocationsWriter(); }
} testDescription_TestCellPopulationWriters_TestVertexT2SwapLocationsWriter;

static class TestDescription_TestCellPopulationWriters_TestVertexT2SwapLocationsWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVertexT2SwapLocationsWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1234, "TestVertexT2SwapLocationsWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVertexT2SwapLocationsWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestVertexT2SwapLocationsWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestVertexT3SwapLocationsWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVertexT3SwapLocationsWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1258, "TestVertexT3SwapLocationsWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVertexT3SwapLocationsWriter(); }
} testDescription_TestCellPopulationWriters_TestVertexT3SwapLocationsWriter;

static class TestDescription_TestCellPopulationWriters_TestVertexT3SwapLocationsWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVertexT3SwapLocationsWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1357, "TestVertexT3SwapLocationsWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVertexT3SwapLocationsWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestVertexT3SwapLocationsWriterArchiving;

static class TestDescription_TestCellPopulationWriters_TestVoronoiDataWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVoronoiDataWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1380, "TestVoronoiDataWriter" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVoronoiDataWriter(); }
} testDescription_TestCellPopulationWriters_TestVoronoiDataWriter;

static class TestDescription_TestCellPopulationWriters_TestVoronoiDataWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationWriters_TestVoronoiDataWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationWriters, suiteDescription_TestCellPopulationWriters, 1424, "TestVoronoiDataWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationWriters.TestVoronoiDataWriterArchiving(); }
} testDescription_TestCellPopulationWriters_TestVoronoiDataWriterArchiving;

#include <cxxtest/Root.cpp>
