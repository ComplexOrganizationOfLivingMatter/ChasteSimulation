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
#include "lung/test/airway_generation/TestAirwayGenerator.hpp"

static TestAirwayGenerator suite_TestAirwayGenerator;

static CxxTest::List Tests_TestAirwayGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAirwayGenerator( "lung/test/airway_generation/TestAirwayGenerator.hpp", 64, "TestAirwayGenerator", suite_TestAirwayGenerator, Tests_TestAirwayGenerator );

static class TestDescription_TestAirwayGenerator_TestCreatePointCloud : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestCreatePointCloud() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 67, "TestCreatePointCloud" ) {}
 void runTest() { suite_TestAirwayGenerator.TestCreatePointCloud(); }
} testDescription_TestAirwayGenerator_TestCreatePointCloud;

static class TestDescription_TestAirwayGenerator_TestCreatePointCloudOtherMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestCreatePointCloudOtherMethods() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 110, "TestCreatePointCloudOtherMethods" ) {}
 void runTest() { suite_TestAirwayGenerator.TestCreatePointCloudOtherMethods(); }
} testDescription_TestAirwayGenerator_TestCreatePointCloudOtherMethods;

static class TestDescription_TestAirwayGenerator_TestSplitPointCloud : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestSplitPointCloud() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 138, "TestSplitPointCloud" ) {}
 void runTest() { suite_TestAirwayGenerator.TestSplitPointCloud(); }
} testDescription_TestAirwayGenerator_TestSplitPointCloud;

static class TestDescription_TestAirwayGenerator_TestAddInitialApex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestAddInitialApex() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 183, "TestAddInitialApex" ) {}
 void runTest() { suite_TestAirwayGenerator.TestAddInitialApex(); }
} testDescription_TestAirwayGenerator_TestAddInitialApex;

static class TestDescription_TestAirwayGenerator_TestInsertBranch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestInsertBranch() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 215, "TestInsertBranch" ) {}
 void runTest() { suite_TestAirwayGenerator.TestInsertBranch(); }
} testDescription_TestAirwayGenerator_TestInsertBranch;

static class TestDescription_TestAirwayGenerator_TestGrowApex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestGrowApex() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 260, "TestGrowApex" ) {}
 void runTest() { suite_TestAirwayGenerator.TestGrowApex(); }
} testDescription_TestAirwayGenerator_TestGrowApex;

static class TestDescription_TestAirwayGenerator_TestInvalidateClosestPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestInvalidateClosestPoint() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 325, "TestInvalidateClosestPoint" ) {}
 void runTest() { suite_TestAirwayGenerator.TestInvalidateClosestPoint(); }
} testDescription_TestAirwayGenerator_TestInvalidateClosestPoint;

static class TestDescription_TestAirwayGenerator_TestGrowTerminalLengthApex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestGrowTerminalLengthApex() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 356, "TestGrowTerminalLengthApex" ) {}
 void runTest() { suite_TestAirwayGenerator.TestGrowTerminalLengthApex(); }
} testDescription_TestAirwayGenerator_TestGrowTerminalLengthApex;

static class TestDescription_TestAirwayGenerator_TestCheckAngleAndLength : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestCheckAngleAndLength() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 411, "TestCheckAngleAndLength" ) {}
 void runTest() { suite_TestAirwayGenerator.TestCheckAngleAndLength(); }
} testDescription_TestAirwayGenerator_TestCheckAngleAndLength;

static class TestDescription_TestAirwayGenerator_TestOutsideHostVolume : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestOutsideHostVolume() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 474, "TestOutsideHostVolume" ) {}
 void runTest() { suite_TestAirwayGenerator.TestOutsideHostVolume(); }
} testDescription_TestAirwayGenerator_TestOutsideHostVolume;

static class TestDescription_TestAirwayGenerator_TestGenerate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestGenerate() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 498, "TestGenerate" ) {}
 void runTest() { suite_TestAirwayGenerator.TestGenerate(); }
} testDescription_TestAirwayGenerator_TestGenerate;

static class TestDescription_TestAirwayGenerator_TestHorsfieldOrder : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestHorsfieldOrder() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 539, "TestHorsfieldOrder" ) {}
 void runTest() { suite_TestAirwayGenerator.TestHorsfieldOrder(); }
} testDescription_TestAirwayGenerator_TestHorsfieldOrder;

static class TestDescription_TestAirwayGenerator_TestGenerateDecomposedAirways : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestGenerateDecomposedAirways() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 619, "TestGenerateDecomposedAirways" ) {}
 void runTest() { suite_TestAirwayGenerator.TestGenerateDecomposedAirways(); }
} testDescription_TestAirwayGenerator_TestGenerateDecomposedAirways;

static class TestDescription_TestAirwayGenerator_TestCalculateLobeVolume : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestCalculateLobeVolume() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 674, "TestCalculateLobeVolume" ) {}
 void runTest() { suite_TestAirwayGenerator.TestCalculateLobeVolume(); }
} testDescription_TestAirwayGenerator_TestCalculateLobeVolume;

static class TestDescription_TestAirwayGenerator_TestEndBranchDistanceLimit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestEndBranchDistanceLimit() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 689, "TestEndBranchDistanceLimit" ) {}
 void runTest() { suite_TestAirwayGenerator.TestEndBranchDistanceLimit(); }
} testDescription_TestAirwayGenerator_TestEndBranchDistanceLimit;

static class TestDescription_TestAirwayGenerator_TestDummyClassCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayGenerator_TestDummyClassCoverage() : CxxTest::RealTestDescription( Tests_TestAirwayGenerator, suiteDescription_TestAirwayGenerator, 744, "TestDummyClassCoverage" ) {}
 void runTest() { suite_TestAirwayGenerator.TestDummyClassCoverage(); }
} testDescription_TestAirwayGenerator_TestDummyClassCoverage;

#include <cxxtest/Root.cpp>
