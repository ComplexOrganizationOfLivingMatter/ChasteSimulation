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
#include "cell_based/test/population/TestCellBasedPdeHandler.hpp"

static TestCellBasedPdeHandler suite_TestCellBasedPdeHandler;

static CxxTest::List Tests_TestCellBasedPdeHandler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellBasedPdeHandler( "cell_based/test/population/TestCellBasedPdeHandler.hpp", 87, "TestCellBasedPdeHandler", suite_TestCellBasedPdeHandler, Tests_TestCellBasedPdeHandler );

static class TestDescription_TestCellBasedPdeHandler_TestConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestConstructor() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 90, "TestConstructor" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestConstructor(); }
} testDescription_TestCellBasedPdeHandler_TestConstructor;

static class TestDescription_TestCellBasedPdeHandler_TestSetMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestSetMethods() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 118, "TestSetMethods" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestSetMethods(); }
} testDescription_TestCellBasedPdeHandler_TestSetMethods;

static class TestDescription_TestCellBasedPdeHandler_TestCellBasedPdeHandlerOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestCellBasedPdeHandlerOutputParameters() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 183, "TestCellBasedPdeHandlerOutputParameters" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestCellBasedPdeHandlerOutputParameters(); }
} testDescription_TestCellBasedPdeHandler_TestCellBasedPdeHandlerOutputParameters;

static class TestDescription_TestCellBasedPdeHandler_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestArchiving() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 222, "TestArchiving" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestArchiving(); }
} testDescription_TestCellBasedPdeHandler_TestArchiving;

static class TestDescription_TestCellBasedPdeHandler_TestArchivingOfPdeHandlerOnCuboid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestArchivingOfPdeHandlerOnCuboid() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 310, "TestArchivingOfPdeHandlerOnCuboid" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestArchivingOfPdeHandlerOnCuboid(); }
} testDescription_TestCellBasedPdeHandler_TestArchivingOfPdeHandlerOnCuboid;

static class TestDescription_TestCellBasedPdeHandler_TestUseCoarsePdeMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestUseCoarsePdeMesh() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 398, "TestUseCoarsePdeMesh" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestUseCoarsePdeMesh(); }
} testDescription_TestCellBasedPdeHandler_TestUseCoarsePdeMesh;

static class TestDescription_TestCellBasedPdeHandler_TestUseCoarsePdeMeshNotCentredOnPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestUseCoarsePdeMeshNotCentredOnPopulation() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 532, "TestUseCoarsePdeMeshNotCentredOnPopulation" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestUseCoarsePdeMeshNotCentredOnPopulation(); }
} testDescription_TestCellBasedPdeHandler_TestUseCoarsePdeMeshNotCentredOnPopulation;

static class TestDescription_TestCellBasedPdeHandler_TestInitialiseCellPdeElementMapAndFindCoarseElementContainingCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestInitialiseCellPdeElementMapAndFindCoarseElementContainingCell() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 578, "TestInitialiseCellPdeElementMapAndFindCoarseElementContainingCell" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestInitialiseCellPdeElementMapAndFindCoarseElementContainingCell(); }
} testDescription_TestCellBasedPdeHandler_TestInitialiseCellPdeElementMapAndFindCoarseElementContainingCell;

static class TestDescription_TestCellBasedPdeHandler_TestWritingToFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestWritingToFile() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 630, "TestWritingToFile" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestWritingToFile(); }
} testDescription_TestCellBasedPdeHandler_TestWritingToFile;

static class TestDescription_TestCellBasedPdeHandler_TestWriteAverageRadialPdeSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestWriteAverageRadialPdeSolution() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 707, "TestWriteAverageRadialPdeSolution" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestWriteAverageRadialPdeSolution(); }
} testDescription_TestCellBasedPdeHandler_TestWriteAverageRadialPdeSolution;

static class TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileAndGetPDESolutionAtPointWithoutCoarsePdeMeshDirichlet : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileAndGetPDESolutionAtPointWithoutCoarsePdeMeshDirichlet() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 751, "TestSolvePdeAndWriteResultsToFileAndGetPDESolutionAtPointWithoutCoarsePdeMeshDirichlet" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestSolvePdeAndWriteResultsToFileAndGetPDESolutionAtPointWithoutCoarsePdeMeshDirichlet(); }
} testDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileAndGetPDESolutionAtPointWithoutCoarsePdeMeshDirichlet;

static class TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileWithoutCoarsePdeMeshNeumann : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileWithoutCoarsePdeMeshNeumann() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 860, "TestSolvePdeAndWriteResultsToFileWithoutCoarsePdeMeshNeumann" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestSolvePdeAndWriteResultsToFileWithoutCoarsePdeMeshNeumann(); }
} testDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileWithoutCoarsePdeMeshNeumann;

static class TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileCoarsePdeMeshDirichlet : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileCoarsePdeMeshDirichlet() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 923, "TestSolvePdeAndWriteResultsToFileCoarsePdeMeshDirichlet" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestSolvePdeAndWriteResultsToFileCoarsePdeMeshDirichlet(); }
} testDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileCoarsePdeMeshDirichlet;

static class TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileCoarsePdeMeshNeumann : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileCoarsePdeMeshNeumann() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 993, "TestSolvePdeAndWriteResultsToFileCoarsePdeMeshNeumann" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestSolvePdeAndWriteResultsToFileCoarsePdeMeshNeumann(); }
} testDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileCoarsePdeMeshNeumann;

static class TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileWithCoarsePdeMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileWithCoarsePdeMesh() : CxxTest::RealTestDescription( Tests_TestCellBasedPdeHandler, suiteDescription_TestCellBasedPdeHandler, 1063, "TestSolvePdeAndWriteResultsToFileWithCoarsePdeMesh" ) {}
 void runTest() { suite_TestCellBasedPdeHandler.TestSolvePdeAndWriteResultsToFileWithCoarsePdeMesh(); }
} testDescription_TestCellBasedPdeHandler_TestSolvePdeAndWriteResultsToFileWithCoarsePdeMesh;

#include <cxxtest/Root.cpp>
