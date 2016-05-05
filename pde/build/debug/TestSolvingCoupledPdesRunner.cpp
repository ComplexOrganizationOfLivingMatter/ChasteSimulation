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
#include "pde/test/TestSolvingCoupledPdes.hpp"

static TestSolvingCoupledPdes suite_TestSolvingCoupledPdes;

static CxxTest::List Tests_TestSolvingCoupledPdes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSolvingCoupledPdes( "pde/test/TestSolvingCoupledPdes.hpp", 267, "TestSolvingCoupledPdes", suite_TestSolvingCoupledPdes, Tests_TestSolvingCoupledPdes );

static class TestDescription_TestSolvingCoupledPdes_TestSimpleCoupledPde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingCoupledPdes_TestSimpleCoupledPde() : CxxTest::RealTestDescription( Tests_TestSolvingCoupledPdes, suiteDescription_TestSolvingCoupledPdes, 280, "TestSimpleCoupledPde" ) {}
 void runTest() { suite_TestSolvingCoupledPdes.TestSimpleCoupledPde(); }
} testDescription_TestSolvingCoupledPdes_TestSimpleCoupledPde;

static class TestDescription_TestSolvingCoupledPdes_TestSimpleCoupledPdeWithNeumannBoundaryConditions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingCoupledPdes_TestSimpleCoupledPdeWithNeumannBoundaryConditions() : CxxTest::RealTestDescription( Tests_TestSolvingCoupledPdes, suiteDescription_TestSolvingCoupledPdes, 342, "TestSimpleCoupledPdeWithNeumannBoundaryConditions" ) {}
 void runTest() { suite_TestSolvingCoupledPdes.TestSimpleCoupledPdeWithNeumannBoundaryConditions(); }
} testDescription_TestSolvingCoupledPdes_TestSimpleCoupledPdeWithNeumannBoundaryConditions;

static class TestDescription_TestSolvingCoupledPdes_TestRealCoupledPde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingCoupledPdes_TestRealCoupledPde() : CxxTest::RealTestDescription( Tests_TestSolvingCoupledPdes, suiteDescription_TestSolvingCoupledPdes, 432, "TestRealCoupledPde" ) {}
 void runTest() { suite_TestSolvingCoupledPdes.TestRealCoupledPde(); }
} testDescription_TestSolvingCoupledPdes_TestRealCoupledPde;

#include <cxxtest/Root.cpp>
