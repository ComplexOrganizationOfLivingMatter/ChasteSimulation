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
#include "cell_based/test/population/TestCaBasedCellPopulation.hpp"

static TestCaBasedCellPopulation suite_TestCaBasedCellPopulation;

static CxxTest::List Tests_TestCaBasedCellPopulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCaBasedCellPopulation( "cell_based/test/population/TestCaBasedCellPopulation.hpp", 73, "TestCaBasedCellPopulation", suite_TestCaBasedCellPopulation, Tests_TestCaBasedCellPopulation );

static class TestDescription_TestCaBasedCellPopulation_TestConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestConstructor() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 77, "TestConstructor" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestConstructor(); }
} testDescription_TestCaBasedCellPopulation_TestConstructor;

static class TestDescription_TestCaBasedCellPopulation_TestConstructorWithMultipleCellsPerSite : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestConstructorWithMultipleCellsPerSite() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 134, "TestConstructorWithMultipleCellsPerSite" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestConstructorWithMultipleCellsPerSite(); }
} testDescription_TestCaBasedCellPopulation_TestConstructorWithMultipleCellsPerSite;

static class TestDescription_TestCaBasedCellPopulation_TestMultipleCellExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestMultipleCellExceptions() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 198, "TestMultipleCellExceptions" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestMultipleCellExceptions(); }
} testDescription_TestCaBasedCellPopulation_TestMultipleCellExceptions;

static class TestDescription_TestCaBasedCellPopulation_TestWriteResultsToFileAndOutputCellPopulationParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestWriteResultsToFileAndOutputCellPopulationParameters() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 309, "TestWriteResultsToFileAndOutputCellPopulationParameters" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestWriteResultsToFileAndOutputCellPopulationParameters(); }
} testDescription_TestCaBasedCellPopulation_TestWriteResultsToFileAndOutputCellPopulationParameters;

static class TestDescription_TestCaBasedCellPopulation_TestRemoveDeadCellsAndUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestRemoveDeadCellsAndUpdate() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 481, "TestRemoveDeadCellsAndUpdate" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestRemoveDeadCellsAndUpdate(); }
} testDescription_TestCaBasedCellPopulation_TestRemoveDeadCellsAndUpdate;

static class TestDescription_TestCaBasedCellPopulation_TestAddCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestAddCell() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 513, "TestAddCell" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestAddCell(); }
} testDescription_TestCaBasedCellPopulation_TestAddCell;

static class TestDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsExceptions() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 608, "TestUpdateCellLocationsExceptions" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestUpdateCellLocationsExceptions(); }
} testDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsExceptions;

static class TestDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsWhenFull : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsWhenFull() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 646, "TestUpdateCellLocationsWhenFull" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestUpdateCellLocationsWhenFull(); }
} testDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsWhenFull;

static class TestDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsRandomlyExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsRandomlyExceptions() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 697, "TestUpdateCellLocationsRandomlyExceptions" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestUpdateCellLocationsRandomlyExceptions(); }
} testDescription_TestCaBasedCellPopulation_TestUpdateCellLocationsRandomlyExceptions;

static class TestDescription_TestCaBasedCellPopulation_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCaBasedCellPopulation_TestArchiving() : CxxTest::RealTestDescription( Tests_TestCaBasedCellPopulation, suiteDescription_TestCaBasedCellPopulation, 734, "TestArchiving" ) {}
 void runTest() { suite_TestCaBasedCellPopulation.TestArchiving(); }
} testDescription_TestCaBasedCellPopulation_TestArchiving;

#include <cxxtest/Root.cpp>
