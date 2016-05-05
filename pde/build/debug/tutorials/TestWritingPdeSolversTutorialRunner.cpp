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
#include "pde/test/tutorials/TestWritingPdeSolversTutorial.hpp"

static TestWritingPdeSolversTutorial suite_TestWritingPdeSolversTutorial;

static CxxTest::List Tests_TestWritingPdeSolversTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestWritingPdeSolversTutorial( "pde/test/tutorials/TestWritingPdeSolversTutorial.hpp", 406, "TestWritingPdeSolversTutorial", suite_TestWritingPdeSolversTutorial, Tests_TestWritingPdeSolversTutorial );

static class TestDescription_TestWritingPdeSolversTutorial_TestMyTwoVariablePdeSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWritingPdeSolversTutorial_TestMyTwoVariablePdeSolver() : CxxTest::RealTestDescription( Tests_TestWritingPdeSolversTutorial, suiteDescription_TestWritingPdeSolversTutorial, 412, "TestMyTwoVariablePdeSolver" ) {}
 void runTest() { suite_TestWritingPdeSolversTutorial.TestMyTwoVariablePdeSolver(); }
} testDescription_TestWritingPdeSolversTutorial_TestMyTwoVariablePdeSolver;

static class TestDescription_TestWritingPdeSolversTutorial_TestMyParaEllipticSetOfPdesSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWritingPdeSolversTutorial_TestMyParaEllipticSetOfPdesSolver() : CxxTest::RealTestDescription( Tests_TestWritingPdeSolversTutorial, suiteDescription_TestWritingPdeSolversTutorial, 450, "TestMyParaEllipticSetOfPdesSolver" ) {}
 void runTest() { suite_TestWritingPdeSolversTutorial.TestMyParaEllipticSetOfPdesSolver(); }
} testDescription_TestWritingPdeSolversTutorial_TestMyParaEllipticSetOfPdesSolver;

#include <cxxtest/Root.cpp>
