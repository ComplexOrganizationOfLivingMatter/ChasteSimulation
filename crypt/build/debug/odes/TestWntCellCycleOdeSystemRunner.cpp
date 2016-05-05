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
#include "crypt/test/odes/TestWntCellCycleOdeSystem.hpp"

static TestWntCellCycleOdeSystem suite_TestWntCellCycleOdeSystem;

static CxxTest::List Tests_TestWntCellCycleOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestWntCellCycleOdeSystem( "crypt/test/odes/TestWntCellCycleOdeSystem.hpp", 61, "TestWntCellCycleOdeSystem", suite_TestWntCellCycleOdeSystem, Tests_TestWntCellCycleOdeSystem );

static class TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleEquations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleEquations() : CxxTest::RealTestDescription( Tests_TestWntCellCycleOdeSystem, suiteDescription_TestWntCellCycleOdeSystem, 65, "TestWntCellCycleEquations" ) {}
 void runTest() { suite_TestWntCellCycleOdeSystem.TestWntCellCycleEquations(); }
} testDescription_TestWntCellCycleOdeSystem_TestWntCellCycleEquations;

static class TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolver() : CxxTest::RealTestDescription( Tests_TestWntCellCycleOdeSystem, suiteDescription_TestWntCellCycleOdeSystem, 190, "TestWntCellCycleSolver" ) {}
 void runTest() { suite_TestWntCellCycleOdeSystem.TestWntCellCycleSolver(); }
} testDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolver;

static class TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithAPCSingleHit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithAPCSingleHit() : CxxTest::RealTestDescription( Tests_TestWntCellCycleOdeSystem, suiteDescription_TestWntCellCycleOdeSystem, 262, "TestWntCellCycleSolverWithAPCSingleHit" ) {}
 void runTest() { suite_TestWntCellCycleOdeSystem.TestWntCellCycleSolverWithAPCSingleHit(); }
} testDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithAPCSingleHit;

static class TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithBetaCateninHit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithBetaCateninHit() : CxxTest::RealTestDescription( Tests_TestWntCellCycleOdeSystem, suiteDescription_TestWntCellCycleOdeSystem, 298, "TestWntCellCycleSolverWithBetaCateninHit" ) {}
 void runTest() { suite_TestWntCellCycleOdeSystem.TestWntCellCycleSolverWithBetaCateninHit(); }
} testDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithBetaCateninHit;

static class TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithAPCDoubleHit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithAPCDoubleHit() : CxxTest::RealTestDescription( Tests_TestWntCellCycleOdeSystem, suiteDescription_TestWntCellCycleOdeSystem, 336, "TestWntCellCycleSolverWithAPCDoubleHit" ) {}
 void runTest() { suite_TestWntCellCycleOdeSystem.TestWntCellCycleSolverWithAPCDoubleHit(); }
} testDescription_TestWntCellCycleOdeSystem_TestWntCellCycleSolverWithAPCDoubleHit;

static class TestDescription_TestWntCellCycleOdeSystem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntCellCycleOdeSystem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestWntCellCycleOdeSystem, suiteDescription_TestWntCellCycleOdeSystem, 374, "TestArchiving" ) {}
 void runTest() { suite_TestWntCellCycleOdeSystem.TestArchiving(); }
} testDescription_TestWntCellCycleOdeSystem_TestArchiving;

#include <cxxtest/Root.cpp>
