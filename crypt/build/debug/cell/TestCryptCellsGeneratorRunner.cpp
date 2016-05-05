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
#include "crypt/test/cell/TestCryptCellsGenerator.hpp"

static TestCryptCellsGenerator suite_TestCryptCellsGenerator;

static CxxTest::List Tests_TestCryptCellsGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCryptCellsGenerator( "crypt/test/cell/TestCryptCellsGenerator.hpp", 55, "TestCryptCellsGenerator", suite_TestCryptCellsGenerator, Tests_TestCryptCellsGenerator );

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithFixedDurationGenerationBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithFixedDurationGenerationBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 59, "TestCryptCellsGeneratorWithFixedDurationGenerationBasedCellCycleModel" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithFixedDurationGenerationBasedCellCycleModel(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithFixedDurationGenerationBasedCellCycleModel;

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 117, "TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModel" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModel(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModel;

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithTysonNovakCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithTysonNovakCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 180, "TestCryptCellsGeneratorWithTysonNovakCellCycleModel" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithTysonNovakCellCycleModel(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithTysonNovakCellCycleModel;

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 210, "TestCryptCellsGeneratorWithWntCellCycleModel" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithWntCellCycleModel(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithWntCellCycleModel;

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithSimpleWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithSimpleWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 244, "TestCryptCellsGeneratorWithSimpleWntCellCycleModel" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithSimpleWntCellCycleModel(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithSimpleWntCellCycleModel;

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 267, "TestCryptCellsGeneratorWithStochasticWntCellCycleModel" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithStochasticWntCellCycleModel(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticWntCellCycleModel;

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModelAndVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModelAndVertexMesh() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 301, "TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModelAndVertexMesh" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModelAndVertexMesh(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithStochasticDurationGenerationBasedCellCycleModelAndVertexMesh;

static class TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithSimpleWntCellCycleModelAndVertexMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithSimpleWntCellCycleModelAndVertexMesh() : CxxTest::RealTestDescription( Tests_TestCryptCellsGenerator, suiteDescription_TestCryptCellsGenerator, 360, "TestCryptCellsGeneratorWithSimpleWntCellCycleModelAndVertexMesh" ) {}
 void runTest() { suite_TestCryptCellsGenerator.TestCryptCellsGeneratorWithSimpleWntCellCycleModelAndVertexMesh(); }
} testDescription_TestCryptCellsGenerator_TestCryptCellsGeneratorWithSimpleWntCellCycleModelAndVertexMesh;

#include <cxxtest/Root.cpp>
