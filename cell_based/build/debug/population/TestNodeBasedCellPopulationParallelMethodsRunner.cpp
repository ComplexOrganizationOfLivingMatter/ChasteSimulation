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
#include "cell_based/test/population/TestNodeBasedCellPopulationParallelMethods.hpp"

static TestNodeBasedCellPopulationParallelMethods suite_TestNodeBasedCellPopulationParallelMethods;

static CxxTest::List Tests_TestNodeBasedCellPopulationParallelMethods = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNodeBasedCellPopulationParallelMethods( "cell_based/test/population/TestNodeBasedCellPopulationParallelMethods.hpp", 70, "TestNodeBasedCellPopulationParallelMethods", suite_TestNodeBasedCellPopulationParallelMethods, Tests_TestNodeBasedCellPopulationParallelMethods );

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestGetCellAndNodePair : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestGetCellAndNodePair() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 112, "TestGetCellAndNodePair" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestGetCellAndNodePair(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestGetCellAndNodePair;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestAddNodeAndCellsToSend : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestAddNodeAndCellsToSend() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 124, "TestAddNodeAndCellsToSend" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestAddNodeAndCellsToSend(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestAddNodeAndCellsToSend;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestSendAndReceiveCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestSendAndReceiveCells() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 140, "TestSendAndReceiveCells" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestSendAndReceiveCells(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestSendAndReceiveCells;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestSendAndReceiveCellsNonBlocking : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestSendAndReceiveCellsNonBlocking() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 174, "TestSendAndReceiveCellsNonBlocking" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestSendAndReceiveCellsNonBlocking(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestSendAndReceiveCellsNonBlocking;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestUpdateCellProcessLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestUpdateCellProcessLocation() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 210, "TestUpdateCellProcessLocation" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestUpdateCellProcessLocation(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestUpdateCellProcessLocation;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestRefreshHaloCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestRefreshHaloCells() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 253, "TestRefreshHaloCells" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestRefreshHaloCells(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestRefreshHaloCells;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestUpdateWithLoadBalanceDoesntThrow : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestUpdateWithLoadBalanceDoesntThrow() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 280, "TestUpdateWithLoadBalanceDoesntThrow" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestUpdateWithLoadBalanceDoesntThrow(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestUpdateWithLoadBalanceDoesntThrow;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestGetCellUsingLocationIndexWithHaloCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestGetCellUsingLocationIndexWithHaloCell() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 299, "TestGetCellUsingLocationIndexWithHaloCell" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestGetCellUsingLocationIndexWithHaloCell(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestGetCellUsingLocationIndexWithHaloCell;

static class TestDescription_TestNodeBasedCellPopulationParallelMethods_TestNodeBasedCellPopulationOutputInParallel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationParallelMethods_TestNodeBasedCellPopulationOutputInParallel() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationParallelMethods, suiteDescription_TestNodeBasedCellPopulationParallelMethods, 316, "TestNodeBasedCellPopulationOutputInParallel" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationParallelMethods.TestNodeBasedCellPopulationOutputInParallel(); }
} testDescription_TestNodeBasedCellPopulationParallelMethods_TestNodeBasedCellPopulationOutputInParallel;

#include <cxxtest/Root.cpp>
