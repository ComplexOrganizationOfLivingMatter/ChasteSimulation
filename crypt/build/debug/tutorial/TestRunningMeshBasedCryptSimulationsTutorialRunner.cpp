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
#include "crypt/test/tutorial/TestRunningMeshBasedCryptSimulationsTutorial.hpp"

static TestRunningMeshBasedCryptSimulationsTutorial suite_TestRunningMeshBasedCryptSimulationsTutorial;

static CxxTest::List Tests_TestRunningMeshBasedCryptSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningMeshBasedCryptSimulationsTutorial( "crypt/test/tutorial/TestRunningMeshBasedCryptSimulationsTutorial.hpp", 117, "TestRunningMeshBasedCryptSimulationsTutorial", suite_TestRunningMeshBasedCryptSimulationsTutorial, Tests_TestRunningMeshBasedCryptSimulationsTutorial );

static class TestDescription_TestRunningMeshBasedCryptSimulationsTutorial_TestCryptWithFixedCellCycle : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningMeshBasedCryptSimulationsTutorial_TestCryptWithFixedCellCycle() : CxxTest::RealTestDescription( Tests_TestRunningMeshBasedCryptSimulationsTutorial, suiteDescription_TestRunningMeshBasedCryptSimulationsTutorial, 130, "TestCryptWithFixedCellCycle" ) {}
 void runTest() { suite_TestRunningMeshBasedCryptSimulationsTutorial.TestCryptWithFixedCellCycle(); }
} testDescription_TestRunningMeshBasedCryptSimulationsTutorial_TestCryptWithFixedCellCycle;

static class TestDescription_TestRunningMeshBasedCryptSimulationsTutorial_TestCryptWithWntCellCycle : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningMeshBasedCryptSimulationsTutorial_TestCryptWithWntCellCycle() : CxxTest::RealTestDescription( Tests_TestRunningMeshBasedCryptSimulationsTutorial, suiteDescription_TestRunningMeshBasedCryptSimulationsTutorial, 234, "TestCryptWithWntCellCycle" ) {}
 void runTest() { suite_TestRunningMeshBasedCryptSimulationsTutorial.TestCryptWithWntCellCycle(); }
} testDescription_TestRunningMeshBasedCryptSimulationsTutorial_TestCryptWithWntCellCycle;

#include <cxxtest/Root.cpp>
