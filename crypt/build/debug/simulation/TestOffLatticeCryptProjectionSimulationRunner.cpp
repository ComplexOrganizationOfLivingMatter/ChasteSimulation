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
#include "crypt/test/simulation/TestOffLatticeCryptProjectionSimulation.hpp"

static TestOffLatticeCryptProjectionSimulation suite_TestOffLatticeCryptProjectionSimulation;

static CxxTest::List Tests_TestOffLatticeCryptProjectionSimulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOffLatticeCryptProjectionSimulation( "crypt/test/simulation/TestOffLatticeCryptProjectionSimulation.hpp", 75, "TestOffLatticeCryptProjectionSimulation", suite_TestOffLatticeCryptProjectionSimulation, Tests_TestOffLatticeCryptProjectionSimulation );

static class TestDescription_TestOffLatticeCryptProjectionSimulation_TestOutputStatistics : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeCryptProjectionSimulation_TestOutputStatistics() : CxxTest::RealTestDescription( Tests_TestOffLatticeCryptProjectionSimulation, suiteDescription_TestOffLatticeCryptProjectionSimulation, 79, "TestOutputStatistics" ) {}
 void runTest() { suite_TestOffLatticeCryptProjectionSimulation.TestOutputStatistics(); }
} testDescription_TestOffLatticeCryptProjectionSimulation_TestOutputStatistics;

static class TestDescription_TestOffLatticeCryptProjectionSimulation_TestOffLatticeSimulationWithCryptProjectionSpringSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeCryptProjectionSimulation_TestOffLatticeSimulationWithCryptProjectionSpringSystem() : CxxTest::RealTestDescription( Tests_TestOffLatticeCryptProjectionSimulation, suiteDescription_TestOffLatticeCryptProjectionSimulation, 154, "TestOffLatticeSimulationWithCryptProjectionSpringSystem" ) {}
 void runTest() { suite_TestOffLatticeCryptProjectionSimulation.TestOffLatticeSimulationWithCryptProjectionSpringSystem(); }
} testDescription_TestOffLatticeCryptProjectionSimulation_TestOffLatticeSimulationWithCryptProjectionSpringSystem;

#include <cxxtest/Root.cpp>
