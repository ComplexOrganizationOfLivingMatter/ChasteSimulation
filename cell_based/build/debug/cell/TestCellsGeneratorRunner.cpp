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
#include "cell_based/test/cell/TestCellsGenerator.hpp"

static TestCellsGenerator suite_TestCellsGenerator;

static CxxTest::List Tests_TestCellsGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellsGenerator( "cell_based/test/cell/TestCellsGenerator.hpp", 55, "TestCellsGenerator", suite_TestCellsGenerator, Tests_TestCellsGenerator );

static class TestDescription_TestCellsGenerator_TestGenerateBasicWithFixedDurationGenerationBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellsGenerator_TestGenerateBasicWithFixedDurationGenerationBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCellsGenerator, suiteDescription_TestCellsGenerator, 59, "TestGenerateBasicWithFixedDurationGenerationBasedCellCycleModel" ) {}
 void runTest() { suite_TestCellsGenerator.TestGenerateBasicWithFixedDurationGenerationBasedCellCycleModel(); }
} testDescription_TestCellsGenerator_TestGenerateBasicWithFixedDurationGenerationBasedCellCycleModel;

static class TestDescription_TestCellsGenerator_TestGenerateGivenLocationIndicesWithFixedDurationGenerationBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellsGenerator_TestGenerateGivenLocationIndicesWithFixedDurationGenerationBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCellsGenerator, suiteDescription_TestCellsGenerator, 96, "TestGenerateGivenLocationIndicesWithFixedDurationGenerationBasedCellCycleModel" ) {}
 void runTest() { suite_TestCellsGenerator.TestGenerateGivenLocationIndicesWithFixedDurationGenerationBasedCellCycleModel(); }
} testDescription_TestCellsGenerator_TestGenerateGivenLocationIndicesWithFixedDurationGenerationBasedCellCycleModel;

static class TestDescription_TestCellsGenerator_TestGenerateGivenLocationIndicesWithSpecifiedCellProliferativeType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellsGenerator_TestGenerateGivenLocationIndicesWithSpecifiedCellProliferativeType() : CxxTest::RealTestDescription( Tests_TestCellsGenerator, suiteDescription_TestCellsGenerator, 118, "TestGenerateGivenLocationIndicesWithSpecifiedCellProliferativeType" ) {}
 void runTest() { suite_TestCellsGenerator.TestGenerateGivenLocationIndicesWithSpecifiedCellProliferativeType(); }
} testDescription_TestCellsGenerator_TestGenerateGivenLocationIndicesWithSpecifiedCellProliferativeType;

static class TestDescription_TestCellsGenerator_TestGenerateBasicRandomWithNoSpecifiedProliferativeCellType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellsGenerator_TestGenerateBasicRandomWithNoSpecifiedProliferativeCellType() : CxxTest::RealTestDescription( Tests_TestCellsGenerator, suiteDescription_TestCellsGenerator, 142, "TestGenerateBasicRandomWithNoSpecifiedProliferativeCellType" ) {}
 void runTest() { suite_TestCellsGenerator.TestGenerateBasicRandomWithNoSpecifiedProliferativeCellType(); }
} testDescription_TestCellsGenerator_TestGenerateBasicRandomWithNoSpecifiedProliferativeCellType;

static class TestDescription_TestCellsGenerator_TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellsGenerator_TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCellsGenerator, suiteDescription_TestCellsGenerator, 168, "TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModel" ) {}
 void runTest() { suite_TestCellsGenerator.TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModel(); }
} testDescription_TestCellsGenerator_TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModel;

static class TestDescription_TestCellsGenerator_TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModelandVertexCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellsGenerator_TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModelandVertexCells() : CxxTest::RealTestDescription( Tests_TestCellsGenerator, suiteDescription_TestCellsGenerator, 199, "TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModelandVertexCells" ) {}
 void runTest() { suite_TestCellsGenerator.TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModelandVertexCells(); }
} testDescription_TestCellsGenerator_TestGenerateBasicRandomWithFixedDurationGenerationBasedCellCycleModelandVertexCells;

#include <cxxtest/Root.cpp>
