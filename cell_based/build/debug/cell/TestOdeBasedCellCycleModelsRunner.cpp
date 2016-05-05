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
#include "cell_based/test/cell/TestOdeBasedCellCycleModels.hpp"

static TestOdeBasedCellCycleModels suite_TestOdeBasedCellCycleModels;

static CxxTest::List Tests_TestOdeBasedCellCycleModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOdeBasedCellCycleModels( "cell_based/test/cell/TestOdeBasedCellCycleModels.hpp", 71, "TestOdeBasedCellCycleModels", suite_TestOdeBasedCellCycleModels, Tests_TestOdeBasedCellCycleModels );

static class TestDescription_TestOdeBasedCellCycleModels_TestTysonNovakCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedCellCycleModels_TestTysonNovakCellCycleModel() : CxxTest::RealTestDescription( Tests_TestOdeBasedCellCycleModels, suiteDescription_TestOdeBasedCellCycleModels, 75, "TestTysonNovakCellCycleModel" ) {}
 void runTest() { suite_TestOdeBasedCellCycleModels.TestTysonNovakCellCycleModel(); }
} testDescription_TestOdeBasedCellCycleModels_TestTysonNovakCellCycleModel;

static class TestDescription_TestOdeBasedCellCycleModels_TestTysonNovakCellCycleModelSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedCellCycleModels_TestTysonNovakCellCycleModelSolver() : CxxTest::RealTestDescription( Tests_TestOdeBasedCellCycleModels, suiteDescription_TestOdeBasedCellCycleModels, 209, "TestTysonNovakCellCycleModelSolver" ) {}
 void runTest() { suite_TestOdeBasedCellCycleModels.TestTysonNovakCellCycleModelSolver(); }
} testDescription_TestOdeBasedCellCycleModels_TestTysonNovakCellCycleModelSolver;

static class TestDescription_TestOdeBasedCellCycleModels_TestAlarcon2004OxygenBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedCellCycleModels_TestAlarcon2004OxygenBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestOdeBasedCellCycleModels, suiteDescription_TestOdeBasedCellCycleModels, 263, "TestAlarcon2004OxygenBasedCellCycleModel" ) {}
 void runTest() { suite_TestOdeBasedCellCycleModels.TestAlarcon2004OxygenBasedCellCycleModel(); }
} testDescription_TestOdeBasedCellCycleModels_TestAlarcon2004OxygenBasedCellCycleModel;

static class TestDescription_TestOdeBasedCellCycleModels_TestArchiveTysonNovakCellCycleModels : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedCellCycleModels_TestArchiveTysonNovakCellCycleModels() : CxxTest::RealTestDescription( Tests_TestOdeBasedCellCycleModels, suiteDescription_TestOdeBasedCellCycleModels, 366, "TestArchiveTysonNovakCellCycleModels" ) {}
 void runTest() { suite_TestOdeBasedCellCycleModels.TestArchiveTysonNovakCellCycleModels(); }
} testDescription_TestOdeBasedCellCycleModels_TestArchiveTysonNovakCellCycleModels;

static class TestDescription_TestOdeBasedCellCycleModels_TestArchiveAlarcon2004OxygenBasedCellCycleModels : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedCellCycleModels_TestArchiveAlarcon2004OxygenBasedCellCycleModels() : CxxTest::RealTestDescription( Tests_TestOdeBasedCellCycleModels, suiteDescription_TestOdeBasedCellCycleModels, 427, "TestArchiveAlarcon2004OxygenBasedCellCycleModels" ) {}
 void runTest() { suite_TestOdeBasedCellCycleModels.TestArchiveAlarcon2004OxygenBasedCellCycleModels(); }
} testDescription_TestOdeBasedCellCycleModels_TestArchiveAlarcon2004OxygenBasedCellCycleModels;

static class TestDescription_TestOdeBasedCellCycleModels_TestCellCycleModelOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedCellCycleModels_TestCellCycleModelOutputParameters() : CxxTest::RealTestDescription( Tests_TestOdeBasedCellCycleModels, suiteDescription_TestOdeBasedCellCycleModels, 492, "TestCellCycleModelOutputParameters" ) {}
 void runTest() { suite_TestOdeBasedCellCycleModels.TestCellCycleModelOutputParameters(); }
} testDescription_TestOdeBasedCellCycleModels_TestCellCycleModelOutputParameters;

#include <cxxtest/Root.cpp>
