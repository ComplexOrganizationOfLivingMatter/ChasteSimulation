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
#include "crypt/test/tutorial/TestRunningVertexBasedCryptSimulationsTutorial.hpp"

static TestRunningVertexBasedCryptSimulationsTutorial suite_TestRunningVertexBasedCryptSimulationsTutorial;

static CxxTest::List Tests_TestRunningVertexBasedCryptSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningVertexBasedCryptSimulationsTutorial( "crypt/test/tutorial/TestRunningVertexBasedCryptSimulationsTutorial.hpp", 108, "TestRunningVertexBasedCryptSimulationsTutorial", suite_TestRunningVertexBasedCryptSimulationsTutorial, Tests_TestRunningVertexBasedCryptSimulationsTutorial );

static class TestDescription_TestRunningVertexBasedCryptSimulationsTutorial_TestVertexBasedCrypt : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningVertexBasedCryptSimulationsTutorial_TestVertexBasedCrypt() : CxxTest::RealTestDescription( Tests_TestRunningVertexBasedCryptSimulationsTutorial, suiteDescription_TestRunningVertexBasedCryptSimulationsTutorial, 123, "TestVertexBasedCrypt" ) {}
 void runTest() { suite_TestRunningVertexBasedCryptSimulationsTutorial.TestVertexBasedCrypt(); }
} testDescription_TestRunningVertexBasedCryptSimulationsTutorial_TestVertexBasedCrypt;

static class TestDescription_TestRunningVertexBasedCryptSimulationsTutorial_TestVertexBasedCryptWithSimpleWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningVertexBasedCryptSimulationsTutorial_TestVertexBasedCryptWithSimpleWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestRunningVertexBasedCryptSimulationsTutorial, suiteDescription_TestRunningVertexBasedCryptSimulationsTutorial, 206, "TestVertexBasedCryptWithSimpleWntCellCycleModel" ) {}
 void runTest() { suite_TestRunningVertexBasedCryptSimulationsTutorial.TestVertexBasedCryptWithSimpleWntCellCycleModel(); }
} testDescription_TestRunningVertexBasedCryptSimulationsTutorial_TestVertexBasedCryptWithSimpleWntCellCycleModel;

#include <cxxtest/Root.cpp>
