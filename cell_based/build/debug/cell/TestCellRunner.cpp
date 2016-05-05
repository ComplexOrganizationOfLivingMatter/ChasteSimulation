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
#include "cell_based/test/cell/TestCell.hpp"

static TestCell suite_TestCell;

static CxxTest::List Tests_TestCell = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCell( "cell_based/test/cell/TestCell.hpp", 68, "TestCell", suite_TestCell, Tests_TestCell );

static class TestDescription_TestCell_TestCellConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestCellConstructor() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 72, "TestCellConstructor" ) {}
 void runTest() { suite_TestCell.TestCellConstructor(); }
} testDescription_TestCell_TestCellConstructor;

static class TestDescription_TestCell_TestCellConstructorWithSrn : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestCellConstructorWithSrn() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 106, "TestCellConstructorWithSrn" ) {}
 void runTest() { suite_TestCell.TestCellConstructorWithSrn(); }
} testDescription_TestCell_TestCellConstructorWithSrn;

static class TestDescription_TestCell_TestWithCellPropertyCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestWithCellPropertyCollection() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 143, "TestWithCellPropertyCollection" ) {}
 void runTest() { suite_TestCell.TestWithCellPropertyCollection(); }
} testDescription_TestCell_TestWithCellPropertyCollection;

static class TestDescription_TestCell_TestCellsAgeingCorrectly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestCellsAgeingCorrectly() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 267, "TestCellsAgeingCorrectly" ) {}
 void runTest() { suite_TestCell.TestCellsAgeingCorrectly(); }
} testDescription_TestCell_TestCellsAgeingCorrectly;

static class TestDescription_TestCell_TestCellDivision : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestCellDivision() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 337, "TestCellDivision" ) {}
 void runTest() { suite_TestCell.TestCellDivision(); }
} testDescription_TestCell_TestCellDivision;

static class TestDescription_TestCell_Test0DBucket : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_Test0DBucket() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 435, "Test0DBucket" ) {}
 void runTest() { suite_TestCell.Test0DBucket(); }
} testDescription_TestCell_Test0DBucket;

static class TestDescription_TestCell_TestWithFixedDurationGenerationBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestWithFixedDurationGenerationBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 511, "TestWithFixedDurationGenerationBasedCellCycleModel" ) {}
 void runTest() { suite_TestCell.TestWithFixedDurationGenerationBasedCellCycleModel(); }
} testDescription_TestCell_TestWithFixedDurationGenerationBasedCellCycleModel;

static class TestDescription_TestCell_TestStochasticCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestStochasticCycleModel() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 595, "TestStochasticCycleModel" ) {}
 void runTest() { suite_TestCell.TestStochasticCycleModel(); }
} testDescription_TestCell_TestStochasticCycleModel;

static class TestDescription_TestCell_Test0DBucketStochastic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_Test0DBucketStochastic() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 654, "Test0DBucketStochastic" ) {}
 void runTest() { suite_TestCell.Test0DBucketStochastic(); }
} testDescription_TestCell_Test0DBucketStochastic;

static class TestDescription_TestCell_TestInitialise0DBucket : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestInitialise0DBucket() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 744, "TestInitialise0DBucket" ) {}
 void runTest() { suite_TestCell.TestInitialise0DBucket(); }
} testDescription_TestCell_TestInitialise0DBucket;

static class TestDescription_TestCell_TestWithTysonNovakCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestWithTysonNovakCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 861, "TestWithTysonNovakCellCycleModel" ) {}
 void runTest() { suite_TestCell.TestWithTysonNovakCellCycleModel(); }
} testDescription_TestCell_TestWithTysonNovakCellCycleModel;

static class TestDescription_TestCell_TestTysonNovakSteadyState : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestTysonNovakSteadyState() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 922, "TestTysonNovakSteadyState" ) {}
 void runTest() { suite_TestCell.TestTysonNovakSteadyState(); }
} testDescription_TestCell_TestTysonNovakSteadyState;

static class TestDescription_TestCell_TestApoptosisAndDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestApoptosisAndDeath() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 954, "TestApoptosisAndDeath" ) {}
 void runTest() { suite_TestCell.TestApoptosisAndDeath(); }
} testDescription_TestCell_TestApoptosisAndDeath;

static class TestDescription_TestCell_TestCantDivideIfUndergoingApoptosis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestCantDivideIfUndergoingApoptosis() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 1001, "TestCantDivideIfUndergoingApoptosis" ) {}
 void runTest() { suite_TestCell.TestCantDivideIfUndergoingApoptosis(); }
} testDescription_TestCell_TestCantDivideIfUndergoingApoptosis;

static class TestDescription_TestCell_Test0DBucketWithDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_Test0DBucketWithDeath() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 1023, "Test0DBucketWithDeath" ) {}
 void runTest() { suite_TestCell.Test0DBucketWithDeath(); }
} testDescription_TestCell_Test0DBucketWithDeath;

static class TestDescription_TestCell_TestIsLogged : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestIsLogged() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 1119, "TestIsLogged" ) {}
 void runTest() { suite_TestCell.TestIsLogged(); }
} testDescription_TestCell_TestIsLogged;

static class TestDescription_TestCell_TestAncestors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestAncestors() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 1152, "TestAncestors" ) {}
 void runTest() { suite_TestCell.TestAncestors(); }
} testDescription_TestCell_TestAncestors;

static class TestDescription_TestCell_TestCellId : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestCellId() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 1183, "TestCellId" ) {}
 void runTest() { suite_TestCell.TestCellId(); }
} testDescription_TestCell_TestCellId;

#include <cxxtest/Root.cpp>
