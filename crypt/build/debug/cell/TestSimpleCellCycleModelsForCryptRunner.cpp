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
#include "crypt/test/cell/TestSimpleCellCycleModelsForCrypt.hpp"

static TestSimpleCellCycleModelsForCrypt suite_TestSimpleCellCycleModelsForCrypt;

static CxxTest::List Tests_TestSimpleCellCycleModelsForCrypt = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimpleCellCycleModelsForCrypt( "crypt/test/cell/TestSimpleCellCycleModelsForCrypt.hpp", 60, "TestSimpleCellCycleModelsForCrypt", suite_TestSimpleCellCycleModelsForCrypt, Tests_TestSimpleCellCycleModelsForCrypt );

static class TestDescription_TestSimpleCellCycleModelsForCrypt_TestSimpleWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleCellCycleModelsForCrypt_TestSimpleWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestSimpleCellCycleModelsForCrypt, suiteDescription_TestSimpleCellCycleModelsForCrypt, 83, "TestSimpleWntCellCycleModel" ) {}
 void runTest() { suite_TestSimpleCellCycleModelsForCrypt.TestSimpleWntCellCycleModel(); }
} testDescription_TestSimpleCellCycleModelsForCrypt_TestSimpleWntCellCycleModel;

static class TestDescription_TestSimpleCellCycleModelsForCrypt_TestArchiveSimpleWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleCellCycleModelsForCrypt_TestArchiveSimpleWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestSimpleCellCycleModelsForCrypt, suiteDescription_TestSimpleCellCycleModelsForCrypt, 333, "TestArchiveSimpleWntCellCycleModel" ) {}
 void runTest() { suite_TestSimpleCellCycleModelsForCrypt.TestArchiveSimpleWntCellCycleModel(); }
} testDescription_TestSimpleCellCycleModelsForCrypt_TestArchiveSimpleWntCellCycleModel;

static class TestDescription_TestSimpleCellCycleModelsForCrypt_TestCellCycleModelOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleCellCycleModelsForCrypt_TestCellCycleModelOutputParameters() : CxxTest::RealTestDescription( Tests_TestSimpleCellCycleModelsForCrypt, suiteDescription_TestSimpleCellCycleModelsForCrypt, 557, "TestCellCycleModelOutputParameters" ) {}
 void runTest() { suite_TestSimpleCellCycleModelsForCrypt.TestCellCycleModelOutputParameters(); }
} testDescription_TestSimpleCellCycleModelsForCrypt_TestCellCycleModelOutputParameters;

#include <cxxtest/Root.cpp>
