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
#include "pde/test/utilities/TestFineCoarseMeshPair.hpp"

static TestFineCoarseMeshPair suite_TestFineCoarseMeshPair;

static CxxTest::List Tests_TestFineCoarseMeshPair = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFineCoarseMeshPair( "pde/test/utilities/TestFineCoarseMeshPair.hpp", 46, "TestFineCoarseMeshPair", suite_TestFineCoarseMeshPair, Tests_TestFineCoarseMeshPair );

static class TestDescription_TestFineCoarseMeshPair_TestComputeFineElemsAndWeightsForQuadPointsSimple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestComputeFineElemsAndWeightsForQuadPointsSimple() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 51, "TestComputeFineElemsAndWeightsForQuadPointsSimple" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestComputeFineElemsAndWeightsForQuadPointsSimple(); }
} testDescription_TestFineCoarseMeshPair_TestComputeFineElemsAndWeightsForQuadPointsSimple;

static class TestDescription_TestFineCoarseMeshPair_TestWithCoarseContainedInFine : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestWithCoarseContainedInFine() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 103, "TestWithCoarseContainedInFine" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestWithCoarseContainedInFine(); }
} testDescription_TestFineCoarseMeshPair_TestWithCoarseContainedInFine;

static class TestDescription_TestFineCoarseMeshPair_TestWithCoarseSlightlyOutsideFine : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestWithCoarseSlightlyOutsideFine() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 176, "TestWithCoarseSlightlyOutsideFine" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestWithCoarseSlightlyOutsideFine(); }
} testDescription_TestFineCoarseMeshPair_TestWithCoarseSlightlyOutsideFine;

static class TestDescription_TestFineCoarseMeshPair_TestWithDefaultBoxWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestWithDefaultBoxWidth() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 255, "TestWithDefaultBoxWidth" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestWithDefaultBoxWidth(); }
} testDescription_TestFineCoarseMeshPair_TestWithDefaultBoxWidth;

static class TestDescription_TestFineCoarseMeshPair_TestNonSafeMode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestNonSafeMode() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 301, "TestNonSafeMode" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestNonSafeMode(); }
} testDescription_TestFineCoarseMeshPair_TestNonSafeMode;

static class TestDescription_TestFineCoarseMeshPair_TestOtherCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestOtherCoverage() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 352, "TestOtherCoverage" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestOtherCoverage(); }
} testDescription_TestFineCoarseMeshPair_TestOtherCoverage;

static class TestDescription_TestFineCoarseMeshPair_TestComputeCoarseElementsForFineNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestComputeCoarseElementsForFineNodes() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 391, "TestComputeCoarseElementsForFineNodes" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestComputeCoarseElementsForFineNodes(); }
} testDescription_TestFineCoarseMeshPair_TestComputeCoarseElementsForFineNodes;

static class TestDescription_TestFineCoarseMeshPair_TestComputeCoarseElementsForFineElementCentroids : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestComputeCoarseElementsForFineElementCentroids() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 466, "TestComputeCoarseElementsForFineElementCentroids" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestComputeCoarseElementsForFineElementCentroids(); }
} testDescription_TestFineCoarseMeshPair_TestComputeCoarseElementsForFineElementCentroids;

static class TestDescription_TestFineCoarseMeshPair_TestComputeFineElemsAndWeightsForCoarseNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFineCoarseMeshPair_TestComputeFineElemsAndWeightsForCoarseNodes() : CxxTest::RealTestDescription( Tests_TestFineCoarseMeshPair, suiteDescription_TestFineCoarseMeshPair, 532, "TestComputeFineElemsAndWeightsForCoarseNodes" ) {}
 void runTest() { suite_TestFineCoarseMeshPair.TestComputeFineElemsAndWeightsForCoarseNodes(); }
} testDescription_TestFineCoarseMeshPair_TestComputeFineElemsAndWeightsForCoarseNodes;

#include <cxxtest/Root.cpp>
