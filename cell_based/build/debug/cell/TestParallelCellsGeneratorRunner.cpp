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
#include "cell_based/test/cell/TestParallelCellsGenerator.hpp"

static TestParallelCellsGenerator suite_TestParallelCellsGenerator;

static CxxTest::List Tests_TestParallelCellsGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestParallelCellsGenerator( "cell_based/test/cell/TestParallelCellsGenerator.hpp", 54, "TestParallelCellsGenerator", suite_TestParallelCellsGenerator, Tests_TestParallelCellsGenerator );

static class TestDescription_TestParallelCellsGenerator_TestConstruct1dParallelPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParallelCellsGenerator_TestConstruct1dParallelPopulation() : CxxTest::RealTestDescription( Tests_TestParallelCellsGenerator, suiteDescription_TestParallelCellsGenerator, 58, "TestConstruct1dParallelPopulation" ) {}
 void runTest() { suite_TestParallelCellsGenerator.TestConstruct1dParallelPopulation(); }
} testDescription_TestParallelCellsGenerator_TestConstruct1dParallelPopulation;

static class TestDescription_TestParallelCellsGenerator_TestConstruct2dParallelPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParallelCellsGenerator_TestConstruct2dParallelPopulation() : CxxTest::RealTestDescription( Tests_TestParallelCellsGenerator, suiteDescription_TestParallelCellsGenerator, 94, "TestConstruct2dParallelPopulation" ) {}
 void runTest() { suite_TestParallelCellsGenerator.TestConstruct2dParallelPopulation(); }
} testDescription_TestParallelCellsGenerator_TestConstruct2dParallelPopulation;

static class TestDescription_TestParallelCellsGenerator_TestConstruct3dParallelPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParallelCellsGenerator_TestConstruct3dParallelPopulation() : CxxTest::RealTestDescription( Tests_TestParallelCellsGenerator, suiteDescription_TestParallelCellsGenerator, 129, "TestConstruct3dParallelPopulation" ) {}
 void runTest() { suite_TestParallelCellsGenerator.TestConstruct3dParallelPopulation(); }
} testDescription_TestParallelCellsGenerator_TestConstruct3dParallelPopulation;

#include <cxxtest/Root.cpp>
