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
#include "mesh/test/utilities/TestBoxCollection.hpp"

static TestBoxCollection suite_TestBoxCollection;

static CxxTest::List Tests_TestBoxCollection = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBoxCollection( "mesh/test/utilities/TestBoxCollection.hpp", 49, "TestBoxCollection", suite_TestBoxCollection, Tests_TestBoxCollection );

static class TestDescription_TestBoxCollection_TestBox : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestBox() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 53, "TestBox" ) {}
 void runTest() { suite_TestBoxCollection.TestBox(); }
} testDescription_TestBoxCollection_TestBox;

static class TestDescription_TestBoxCollection_TestIndexing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestIndexing() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 85, "TestIndexing" ) {}
 void runTest() { suite_TestBoxCollection.TestIndexing(); }
} testDescription_TestBoxCollection_TestIndexing;

static class TestDescription_TestBoxCollection_TestBoxGeneration1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestBoxGeneration1d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 132, "TestBoxGeneration1d" ) {}
 void runTest() { suite_TestBoxCollection.TestBoxGeneration1d(); }
} testDescription_TestBoxCollection_TestBoxGeneration1d;

static class TestDescription_TestBoxCollection_TestAddElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestAddElement() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 198, "TestAddElement" ) {}
 void runTest() { suite_TestBoxCollection.TestAddElement(); }
} testDescription_TestBoxCollection_TestAddElement;

static class TestDescription_TestBoxCollection_TestSetupAllLocalBoxes2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestSetupAllLocalBoxes2d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 217, "TestSetupAllLocalBoxes2d" ) {}
 void runTest() { suite_TestBoxCollection.TestSetupAllLocalBoxes2d(); }
} testDescription_TestBoxCollection_TestSetupAllLocalBoxes2d;

static class TestDescription_TestBoxCollection_TestSetupAllLocalBoxes2dPeriodic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestSetupAllLocalBoxes2dPeriodic() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 253, "TestSetupAllLocalBoxes2dPeriodic" ) {}
 void runTest() { suite_TestBoxCollection.TestSetupAllLocalBoxes2dPeriodic(); }
} testDescription_TestBoxCollection_TestSetupAllLocalBoxes2dPeriodic;

static class TestDescription_TestBoxCollection_TestConvertBetweenLinearAndGridIndices : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestConvertBetweenLinearAndGridIndices() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 294, "TestConvertBetweenLinearAndGridIndices" ) {}
 void runTest() { suite_TestBoxCollection.TestConvertBetweenLinearAndGridIndices(); }
} testDescription_TestBoxCollection_TestConvertBetweenLinearAndGridIndices;

static class TestDescription_TestBoxCollection_TestIsBoxInDomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestIsBoxInDomain() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 363, "TestIsBoxInDomain" ) {}
 void runTest() { suite_TestBoxCollection.TestIsBoxInDomain(); }
} testDescription_TestBoxCollection_TestIsBoxInDomain;

static class TestDescription_TestBoxCollection_TestSetupAllLocalBoxes3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestSetupAllLocalBoxes3d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 393, "TestSetupAllLocalBoxes3d" ) {}
 void runTest() { suite_TestBoxCollection.TestSetupAllLocalBoxes3d(); }
} testDescription_TestBoxCollection_TestSetupAllLocalBoxes3d;

static class TestDescription_TestBoxCollection_TestPairsReturned1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestPairsReturned1d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 437, "TestPairsReturned1d" ) {}
 void runTest() { suite_TestBoxCollection.TestPairsReturned1d(); }
} testDescription_TestBoxCollection_TestPairsReturned1d;

static class TestDescription_TestBoxCollection_TestBoxGeneration2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestBoxGeneration2d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 512, "TestBoxGeneration2d" ) {}
 void runTest() { suite_TestBoxCollection.TestBoxGeneration2d(); }
} testDescription_TestBoxCollection_TestBoxGeneration2d;

static class TestDescription_TestBoxCollection_TestLargeBoxCollection2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestLargeBoxCollection2d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 567, "TestLargeBoxCollection2d" ) {}
 void runTest() { suite_TestBoxCollection.TestLargeBoxCollection2d(); }
} testDescription_TestBoxCollection_TestLargeBoxCollection2d;

static class TestDescription_TestBoxCollection_TestPairsReturned2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestPairsReturned2d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 596, "TestPairsReturned2d" ) {}
 void runTest() { suite_TestBoxCollection.TestPairsReturned2d(); }
} testDescription_TestBoxCollection_TestPairsReturned2d;

static class TestDescription_TestBoxCollection_TestPairsReturned3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestPairsReturned3d() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 720, "TestPairsReturned3d" ) {}
 void runTest() { suite_TestBoxCollection.TestPairsReturned3d(); }
} testDescription_TestBoxCollection_TestPairsReturned3d;

static class TestDescription_TestBoxCollection_TestLocalBoxesHalfOnly2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestLocalBoxesHalfOnly2D() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 848, "TestLocalBoxesHalfOnly2D" ) {}
 void runTest() { suite_TestBoxCollection.TestLocalBoxesHalfOnly2D(); }
} testDescription_TestBoxCollection_TestLocalBoxesHalfOnly2D;

static class TestDescription_TestBoxCollection_TestNodesPairs2DWithPeriodicity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestNodesPairs2DWithPeriodicity() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 1093, "TestNodesPairs2DWithPeriodicity" ) {}
 void runTest() { suite_TestBoxCollection.TestNodesPairs2DWithPeriodicity(); }
} testDescription_TestBoxCollection_TestNodesPairs2DWithPeriodicity;

static class TestDescription_TestBoxCollection_TestNodesPairs3DWithPeriodicity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoxCollection_TestNodesPairs3DWithPeriodicity() : CxxTest::RealTestDescription( Tests_TestBoxCollection, suiteDescription_TestBoxCollection, 1165, "TestNodesPairs3DWithPeriodicity" ) {}
 void runTest() { suite_TestBoxCollection.TestNodesPairs3DWithPeriodicity(); }
} testDescription_TestBoxCollection_TestNodesPairs3DWithPeriodicity;

#include <cxxtest/Root.cpp>
