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
#include "crypt/test/cell/TestCellForCrypt.hpp"

static TestCell suite_TestCell;

static CxxTest::List Tests_TestCell = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCell( "crypt/test/cell/TestCellForCrypt.hpp", 56, "TestCell", suite_TestCell, Tests_TestCell );

static class TestDescription_TestCell_TestUpdateCellProliferativeTypes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestUpdateCellProliferativeTypes() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 64, "TestUpdateCellProliferativeTypes" ) {}
 void runTest() { suite_TestCell.TestUpdateCellProliferativeTypes(); }
} testDescription_TestCell_TestUpdateCellProliferativeTypes;

static class TestDescription_TestCell_TestWithWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestWithWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 127, "TestWithWntCellCycleModel" ) {}
 void runTest() { suite_TestCell.TestWithWntCellCycleModel(); }
} testDescription_TestCell_TestWithWntCellCycleModel;

static class TestDescription_TestCell_TestWithStochasticWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestWithStochasticWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 210, "TestWithStochasticWntCellCycleModel" ) {}
 void runTest() { suite_TestCell.TestWithStochasticWntCellCycleModel(); }
} testDescription_TestCell_TestWithStochasticWntCellCycleModel;

static class TestDescription_TestCell_TestWntMutantVariantsAndLabelling : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCell_TestWntMutantVariantsAndLabelling() : CxxTest::RealTestDescription( Tests_TestCell, suiteDescription_TestCell, 304, "TestWntMutantVariantsAndLabelling" ) {}
 void runTest() { suite_TestCell.TestWntMutantVariantsAndLabelling(); }
} testDescription_TestCell_TestWntMutantVariantsAndLabelling;

#include <cxxtest/Root.cpp>
