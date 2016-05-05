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
#include "heart/test/mechanics/TestElectroMechanicsExactSolution.hpp"

static TestElectroMechanicsExactSolution suite_TestElectroMechanicsExactSolution;

static CxxTest::List Tests_TestElectroMechanicsExactSolution = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestElectroMechanicsExactSolution( "heart/test/mechanics/TestElectroMechanicsExactSolution.hpp", 136, "TestElectroMechanicsExactSolution", suite_TestElectroMechanicsExactSolution, Tests_TestElectroMechanicsExactSolution );

static class TestDescription_TestElectroMechanicsExactSolution_TestIncompressibleSolveWithExactSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElectroMechanicsExactSolution_TestIncompressibleSolveWithExactSolution() : CxxTest::RealTestDescription( Tests_TestElectroMechanicsExactSolution, suiteDescription_TestElectroMechanicsExactSolution, 139, "TestIncompressibleSolveWithExactSolution" ) {}
 void runTest() { suite_TestElectroMechanicsExactSolution.TestIncompressibleSolveWithExactSolution(); }
} testDescription_TestElectroMechanicsExactSolution_TestIncompressibleSolveWithExactSolution;

#include <cxxtest/Root.cpp>
