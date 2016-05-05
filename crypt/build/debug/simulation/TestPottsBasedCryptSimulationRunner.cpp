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
#include "crypt/test/simulation/TestPottsBasedCryptSimulation.hpp"

static TestPottsBasedCryptSimulation suite_TestPottsBasedCryptSimulation;

static CxxTest::List Tests_TestPottsBasedCryptSimulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsBasedCryptSimulation( "crypt/test/simulation/TestPottsBasedCryptSimulation.hpp", 73, "TestPottsBasedCryptSimulation", suite_TestPottsBasedCryptSimulation, Tests_TestPottsBasedCryptSimulation );

static class TestDescription_TestPottsBasedCryptSimulation_TestPottsCryptWithSimpleWntCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCryptSimulation_TestPottsCryptWithSimpleWntCellCycleModel() : CxxTest::RealTestDescription( Tests_TestPottsBasedCryptSimulation, suiteDescription_TestPottsBasedCryptSimulation, 77, "TestPottsCryptWithSimpleWntCellCycleModel" ) {}
 void runTest() { suite_TestPottsBasedCryptSimulation.TestPottsCryptWithSimpleWntCellCycleModel(); }
} testDescription_TestPottsBasedCryptSimulation_TestPottsCryptWithSimpleWntCellCycleModel;

static class TestDescription_TestPottsBasedCryptSimulation_TestPottsCryptWithGenerationBasedCellCycleModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsBasedCryptSimulation_TestPottsCryptWithGenerationBasedCellCycleModel() : CxxTest::RealTestDescription( Tests_TestPottsBasedCryptSimulation, suiteDescription_TestPottsBasedCryptSimulation, 131, "TestPottsCryptWithGenerationBasedCellCycleModel" ) {}
 void runTest() { suite_TestPottsBasedCryptSimulation.TestPottsCryptWithGenerationBasedCellCycleModel(); }
} testDescription_TestPottsBasedCryptSimulation_TestPottsCryptWithGenerationBasedCellCycleModel;

#include <cxxtest/Root.cpp>
