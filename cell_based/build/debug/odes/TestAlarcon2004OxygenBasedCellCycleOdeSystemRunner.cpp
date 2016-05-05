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
#include "cell_based/test/odes/TestAlarcon2004OxygenBasedCellCycleOdeSystem.hpp"

static TestAlarcon2004OxygenBasedCellCycleOdeSystem suite_TestAlarcon2004OxygenBasedCellCycleOdeSystem;

static CxxTest::List Tests_TestAlarcon2004OxygenBasedCellCycleOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem( "cell_based/test/odes/TestAlarcon2004OxygenBasedCellCycleOdeSystem.hpp", 64, "TestAlarcon2004OxygenBasedCellCycleOdeSystem", suite_TestAlarcon2004OxygenBasedCellCycleOdeSystem, Tests_TestAlarcon2004OxygenBasedCellCycleOdeSystem );

static class TestDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestAlarcon2004Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestAlarcon2004Equations() : CxxTest::RealTestDescription( Tests_TestAlarcon2004OxygenBasedCellCycleOdeSystem, suiteDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem, 71, "TestAlarcon2004Equations" ) {}
 void runTest() { suite_TestAlarcon2004OxygenBasedCellCycleOdeSystem.TestAlarcon2004Equations(); }
} testDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestAlarcon2004Equations;

static class TestDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestAlarcon2004Solver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestAlarcon2004Solver() : CxxTest::RealTestDescription( Tests_TestAlarcon2004OxygenBasedCellCycleOdeSystem, suiteDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem, 151, "TestAlarcon2004Solver" ) {}
 void runTest() { suite_TestAlarcon2004OxygenBasedCellCycleOdeSystem.TestAlarcon2004Solver(); }
} testDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestAlarcon2004Solver;

static class TestDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestAlarcon2004OxygenBasedCellCycleOdeSystem, suiteDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem, 196, "TestArchiving" ) {}
 void runTest() { suite_TestAlarcon2004OxygenBasedCellCycleOdeSystem.TestArchiving(); }
} testDescription_TestAlarcon2004OxygenBasedCellCycleOdeSystem_TestArchiving;

#include <cxxtest/Root.cpp>
