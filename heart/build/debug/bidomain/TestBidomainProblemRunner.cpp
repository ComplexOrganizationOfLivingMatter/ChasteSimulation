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
#include "heart/test/bidomain/TestBidomainProblem.hpp"

static TestBidomainProblem suite_TestBidomainProblem;

static CxxTest::List Tests_TestBidomainProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBidomainProblem( "heart/test/bidomain/TestBidomainProblem.hpp", 171, "TestBidomainProblem", suite_TestBidomainProblem, Tests_TestBidomainProblem );

static class TestDescription_TestBidomainProblem_TestBidomainErrorHandling : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainErrorHandling() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 183, "TestBidomainErrorHandling" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainErrorHandling(); }
} testDescription_TestBidomainProblem_TestBidomainErrorHandling;

static class TestDescription_TestBidomainProblem_TestBidomainSmallestMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainSmallestMesh() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 216, "TestBidomainSmallestMesh" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainSmallestMesh(); }
} testDescription_TestBidomainProblem_TestBidomainSmallestMesh;

static class TestDescription_TestBidomainProblem_TestBidomainDg01DPinned : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainDg01DPinned() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 242, "TestBidomainDg01DPinned" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainDg01DPinned(); }
} testDescription_TestBidomainProblem_TestBidomainDg01DPinned;

static class TestDescription_TestBidomainProblem_TestBidomainDg01DAveragePhiEOverDifferentRows : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainDg01DAveragePhiEOverDifferentRows() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 341, "TestBidomainDg01DAveragePhiEOverDifferentRows" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainDg01DAveragePhiEOverDifferentRows(); }
} testDescription_TestBidomainProblem_TestBidomainDg01DAveragePhiEOverDifferentRows;

static class TestDescription_TestBidomainProblem_TestCompareBidomainProblemWithMonodomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestCompareBidomainProblemWithMonodomain() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 477, "TestCompareBidomainProblemWithMonodomain" ) {}
 void runTest() { suite_TestBidomainProblem.TestCompareBidomainProblemWithMonodomain(); }
} testDescription_TestBidomainProblem_TestCompareBidomainProblemWithMonodomain;

static class TestDescription_TestBidomainProblem_TestBidomainProblemPrintsOnlyAtRequestedTimesAndOnlyRequestedNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainProblemPrintsOnlyAtRequestedTimesAndOnlyRequestedNodes() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 564, "TestBidomainProblemPrintsOnlyAtRequestedTimesAndOnlyRequestedNodes" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainProblemPrintsOnlyAtRequestedTimesAndOnlyRequestedNodes(); }
} testDescription_TestBidomainProblem_TestBidomainProblemPrintsOnlyAtRequestedTimesAndOnlyRequestedNodes;

static class TestDescription_TestBidomainProblem_TestBidomainFallsOverProducesOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainFallsOverProducesOutput() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 662, "TestBidomainFallsOverProducesOutput" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainFallsOverProducesOutput(); }
} testDescription_TestBidomainProblem_TestBidomainFallsOverProducesOutput;

static class TestDescription_TestBidomainProblem_TestBidomainProblemExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainProblemExceptions() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 714, "TestBidomainProblemExceptions" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainProblemExceptions(); }
} testDescription_TestBidomainProblem_TestBidomainProblemExceptions;

static class TestDescription_TestBidomainProblem_TestCompareOrthotropicWithAxisymmetricBidomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestCompareOrthotropicWithAxisymmetricBidomain() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 761, "TestCompareOrthotropicWithAxisymmetricBidomain" ) {}
 void runTest() { suite_TestBidomainProblem.TestCompareOrthotropicWithAxisymmetricBidomain(); }
} testDescription_TestBidomainProblem_TestCompareOrthotropicWithAxisymmetricBidomain;

static class TestDescription_TestBidomainProblem_TestBidomainProblemPrintsMultipleVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainProblemPrintsMultipleVariables() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 893, "TestBidomainProblemPrintsMultipleVariables" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainProblemPrintsMultipleVariables(); }
} testDescription_TestBidomainProblem_TestBidomainProblemPrintsMultipleVariables;

static class TestDescription_TestBidomainProblem_TestBidomainProblemPrintsAllStateVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainProblemPrintsAllStateVariables() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 956, "TestBidomainProblemPrintsAllStateVariables" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainProblemPrintsAllStateVariables(); }
} testDescription_TestBidomainProblem_TestBidomainProblemPrintsAllStateVariables;

static class TestDescription_TestBidomainProblem_TestSimpleBidomain1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestSimpleBidomain1D() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 1010, "TestSimpleBidomain1D" ) {}
 void runTest() { suite_TestBidomainProblem.TestSimpleBidomain1D(); }
} testDescription_TestBidomainProblem_TestSimpleBidomain1D;

static class TestDescription_TestBidomainProblem_TestPermutedBidomain1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestPermutedBidomain1D() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 1057, "TestPermutedBidomain1D" ) {}
 void runTest() { suite_TestBidomainProblem.TestPermutedBidomain1D(); }
} testDescription_TestBidomainProblem_TestPermutedBidomain1D;

static class TestDescription_TestBidomainProblem_TestBidomainProblemInTwoHalves : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestBidomainProblemInTwoHalves() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 1136, "TestBidomainProblemInTwoHalves" ) {}
 void runTest() { suite_TestBidomainProblem.TestBidomainProblemInTwoHalves(); }
} testDescription_TestBidomainProblem_TestBidomainProblemInTwoHalves;

static class TestDescription_TestBidomainProblem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainProblem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestBidomainProblem, suiteDescription_TestBidomainProblem, 1200, "TestArchiving" ) {}
 void runTest() { suite_TestBidomainProblem.TestArchiving(); }
} testDescription_TestBidomainProblem_TestArchiving;

#include <cxxtest/Root.cpp>
