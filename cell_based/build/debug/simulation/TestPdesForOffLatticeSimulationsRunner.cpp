/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "cell_based/test/simulation/TestPdesForOffLatticeSimulations.hpp"

static TestPdesForOffLatticeSimulations suite_TestPdesForOffLatticeSimulations;

static CxxTest::List Tests_TestPdesForOffLatticeSimulations = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPdesForOffLatticeSimulations( "cell_based/test/simulation/TestPdesForOffLatticeSimulations.hpp", 53, "TestPdesForOffLatticeSimulations", suite_TestPdesForOffLatticeSimulations, Tests_TestPdesForOffLatticeSimulations );

static class TestDescription_TestPdesForOffLatticeSimulations_TestSimpleUniformSourcePde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdesForOffLatticeSimulations_TestSimpleUniformSourcePde() : CxxTest::RealTestDescription( Tests_TestPdesForOffLatticeSimulations, suiteDescription_TestPdesForOffLatticeSimulations, 57, "TestSimpleUniformSourcePde" ) {}
 void runTest() { suite_TestPdesForOffLatticeSimulations.TestSimpleUniformSourcePde(); }
} testDescription_TestPdesForOffLatticeSimulations_TestSimpleUniformSourcePde;

static class TestDescription_TestPdesForOffLatticeSimulations_TestCellwiseSourcePde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdesForOffLatticeSimulations_TestCellwiseSourcePde() : CxxTest::RealTestDescription( Tests_TestPdesForOffLatticeSimulations, suiteDescription_TestPdesForOffLatticeSimulations, 75, "TestCellwiseSourcePde" ) {}
 void runTest() { suite_TestPdesForOffLatticeSimulations.TestCellwiseSourcePde(); }
} testDescription_TestPdesForOffLatticeSimulations_TestCellwiseSourcePde;

static class TestDescription_TestPdesForOffLatticeSimulations_TestAveragedSourcePde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdesForOffLatticeSimulations_TestAveragedSourcePde() : CxxTest::RealTestDescription( Tests_TestPdesForOffLatticeSimulations, suiteDescription_TestPdesForOffLatticeSimulations, 112, "TestAveragedSourcePde" ) {}
 void runTest() { suite_TestPdesForOffLatticeSimulations.TestAveragedSourcePde(); }
} testDescription_TestPdesForOffLatticeSimulations_TestAveragedSourcePde;

#include <cxxtest/Root.cpp>
