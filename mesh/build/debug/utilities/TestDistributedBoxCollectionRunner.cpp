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
#include "mesh/test/utilities/TestDistributedBoxCollection.hpp"

static TestDistributedBoxCollection suite_TestDistributedBoxCollection;

static CxxTest::List Tests_TestDistributedBoxCollection = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDistributedBoxCollection( "mesh/test/utilities/TestDistributedBoxCollection.hpp", 50, "TestDistributedBoxCollection", suite_TestDistributedBoxCollection, Tests_TestDistributedBoxCollection );

static class TestDescription_TestDistributedBoxCollection_TestBox : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestBox() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 249, "TestBox" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestBox(); }
} testDescription_TestDistributedBoxCollection_TestBox;

static class TestDescription_TestDistributedBoxCollection_TestBoxGeneration1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestBoxGeneration1d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 282, "TestBoxGeneration1d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestBoxGeneration1d(); }
} testDescription_TestDistributedBoxCollection_TestBoxGeneration1d;

static class TestDescription_TestDistributedBoxCollection_TestAddElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestAddElement() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 388, "TestAddElement" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestAddElement(); }
} testDescription_TestDistributedBoxCollection_TestAddElement;

static class TestDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes2d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 416, "TestSetupAllLocalBoxes2d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestSetupAllLocalBoxes2d(); }
} testDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes2d;

static class TestDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes2dPeriodic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes2dPeriodic() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 503, "TestSetupAllLocalBoxes2dPeriodic" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestSetupAllLocalBoxes2dPeriodic(); }
} testDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes2dPeriodic;

static class TestDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes3d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 587, "TestSetupAllLocalBoxes3d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestSetupAllLocalBoxes3d(); }
} testDescription_TestDistributedBoxCollection_TestSetupAllLocalBoxes3d;

static class TestDescription_TestDistributedBoxCollection_TestSetupHaloBoxes1d2d3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestSetupHaloBoxes1d2d3d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 708, "TestSetupHaloBoxes1d2d3d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestSetupHaloBoxes1d2d3d(); }
} testDescription_TestDistributedBoxCollection_TestSetupHaloBoxes1d2d3d;

static class TestDescription_TestDistributedBoxCollection_TestUpdateHaloBoxes1d2d3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestUpdateHaloBoxes1d2d3d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 716, "TestUpdateHaloBoxes1d2d3d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestUpdateHaloBoxes1d2d3d(); }
} testDescription_TestDistributedBoxCollection_TestUpdateHaloBoxes1d2d3d;

static class TestDescription_TestDistributedBoxCollection_TestPairsReturned1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestPairsReturned1d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 734, "TestPairsReturned1d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestPairsReturned1d(); }
} testDescription_TestDistributedBoxCollection_TestPairsReturned1d;

static class TestDescription_TestDistributedBoxCollection_TestBoxGeneration2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestBoxGeneration2d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 921, "TestBoxGeneration2d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestBoxGeneration2d(); }
} testDescription_TestDistributedBoxCollection_TestBoxGeneration2d;

static class TestDescription_TestDistributedBoxCollection_TestLargeBoxCollection2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestLargeBoxCollection2d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 1033, "TestLargeBoxCollection2d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestLargeBoxCollection2d(); }
} testDescription_TestDistributedBoxCollection_TestLargeBoxCollection2d;

static class TestDescription_TestDistributedBoxCollection_TestPairsReturned2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestPairsReturned2d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 1063, "TestPairsReturned2d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestPairsReturned2d(); }
} testDescription_TestDistributedBoxCollection_TestPairsReturned2d;

static class TestDescription_TestDistributedBoxCollection_TestPairsReturned3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestPairsReturned3d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 1407, "TestPairsReturned3d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestPairsReturned3d(); }
} testDescription_TestDistributedBoxCollection_TestPairsReturned3d;

static class TestDescription_TestDistributedBoxCollection_TestSplitNeighbourCalculation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestSplitNeighbourCalculation() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 1577, "TestSplitNeighbourCalculation" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestSplitNeighbourCalculation(); }
} testDescription_TestDistributedBoxCollection_TestSplitNeighbourCalculation;

static class TestDescription_TestDistributedBoxCollection_TestPairsReturned2dPeriodic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestPairsReturned2dPeriodic() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 1704, "TestPairsReturned2dPeriodic" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestPairsReturned2dPeriodic(); }
} testDescription_TestDistributedBoxCollection_TestPairsReturned2dPeriodic;

static class TestDescription_TestDistributedBoxCollection_TestBoxGeneration3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestBoxGeneration3d() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 1853, "TestBoxGeneration3d" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestBoxGeneration3d(); }
} testDescription_TestDistributedBoxCollection_TestBoxGeneration3d;

static class TestDescription_TestDistributedBoxCollection_TestArchivingDistributedBoxCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestArchivingDistributedBoxCollection() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 1996, "TestArchivingDistributedBoxCollection" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestArchivingDistributedBoxCollection(); }
} testDescription_TestDistributedBoxCollection_TestArchivingDistributedBoxCollection;

static class TestDescription_TestDistributedBoxCollection_TestLoadBalanceFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestLoadBalanceFunction() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 2057, "TestLoadBalanceFunction" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestLoadBalanceFunction(); }
} testDescription_TestDistributedBoxCollection_TestLoadBalanceFunction;

static class TestDescription_TestDistributedBoxCollection_TestLoadBalanceMaintainsMinimumLocalRegion : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestLoadBalanceMaintainsMinimumLocalRegion() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 2126, "TestLoadBalanceMaintainsMinimumLocalRegion" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestLoadBalanceMaintainsMinimumLocalRegion(); }
} testDescription_TestDistributedBoxCollection_TestLoadBalanceMaintainsMinimumLocalRegion;

static class TestDescription_TestDistributedBoxCollection_TestGetDistributionOfNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedBoxCollection_TestGetDistributionOfNodes() : CxxTest::RealTestDescription( Tests_TestDistributedBoxCollection, suiteDescription_TestDistributedBoxCollection, 2153, "TestGetDistributionOfNodes" ) {}
 void runTest() { suite_TestDistributedBoxCollection.TestGetDistributionOfNodes(); }
} testDescription_TestDistributedBoxCollection_TestGetDistributionOfNodes;

#include <cxxtest/Root.cpp>
