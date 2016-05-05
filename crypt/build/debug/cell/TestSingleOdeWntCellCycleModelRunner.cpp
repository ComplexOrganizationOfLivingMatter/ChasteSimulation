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
#include "crypt/test/cell/TestSingleOdeWntCellCycleModel.hpp"

static TestSingleOdeWntCellCycleModel suite_TestSingleOdeWntCellCycleModel;

static CxxTest::List Tests_TestSingleOdeWntCellCycleModel = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSingleOdeWntCellCycleModel( "crypt/test/cell/TestSingleOdeWntCellCycleModel.hpp", 59, "TestSingleOdeWntCellCycleModel", suite_TestSingleOdeWntCellCycleModel, Tests_TestSingleOdeWntCellCycleModel );

static class TestDescription_TestSingleOdeWntCellCycleModel_TestCorrectBehaviour : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSingleOdeWntCellCycleModel_TestCorrectBehaviour() : CxxTest::RealTestDescription( Tests_TestSingleOdeWntCellCycleModel, suiteDescription_TestSingleOdeWntCellCycleModel, 84, "TestCorrectBehaviour" ) {}
 void runTest() { suite_TestSingleOdeWntCellCycleModel.TestCorrectBehaviour(); }
} testDescription_TestSingleOdeWntCellCycleModel_TestCorrectBehaviour;

static class TestDescription_TestSingleOdeWntCellCycleModel_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSingleOdeWntCellCycleModel_TestArchiving() : CxxTest::RealTestDescription( Tests_TestSingleOdeWntCellCycleModel, suiteDescription_TestSingleOdeWntCellCycleModel, 279, "TestArchiving" ) {}
 void runTest() { suite_TestSingleOdeWntCellCycleModel.TestArchiving(); }
} testDescription_TestSingleOdeWntCellCycleModel_TestArchiving;

static class TestDescription_TestSingleOdeWntCellCycleModel_TestCellCycleModelOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSingleOdeWntCellCycleModel_TestCellCycleModelOutputParameters() : CxxTest::RealTestDescription( Tests_TestSingleOdeWntCellCycleModel, suiteDescription_TestSingleOdeWntCellCycleModel, 386, "TestCellCycleModelOutputParameters" ) {}
 void runTest() { suite_TestSingleOdeWntCellCycleModel.TestCellCycleModelOutputParameters(); }
} testDescription_TestSingleOdeWntCellCycleModel_TestCellCycleModelOutputParameters;

#include <cxxtest/Root.cpp>
