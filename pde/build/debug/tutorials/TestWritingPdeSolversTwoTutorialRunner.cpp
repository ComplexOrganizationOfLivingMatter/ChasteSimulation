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
#include "pde/test/tutorials/TestWritingPdeSolversTwoTutorial.hpp"

static TestWritingPdeSolversTwoTutorial suite_TestWritingPdeSolversTwoTutorial;

static CxxTest::List Tests_TestWritingPdeSolversTwoTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestWritingPdeSolversTwoTutorial( "pde/test/tutorials/TestWritingPdeSolversTwoTutorial.hpp", 272, "TestWritingPdeSolversTwoTutorial", suite_TestWritingPdeSolversTwoTutorial, Tests_TestWritingPdeSolversTwoTutorial );

static class TestDescription_TestWritingPdeSolversTwoTutorial_TestExplicitSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWritingPdeSolversTwoTutorial_TestExplicitSolver() : CxxTest::RealTestDescription( Tests_TestWritingPdeSolversTwoTutorial, suiteDescription_TestWritingPdeSolversTwoTutorial, 275, "TestExplicitSolver" ) {}
 void runTest() { suite_TestWritingPdeSolversTwoTutorial.TestExplicitSolver(); }
} testDescription_TestWritingPdeSolversTwoTutorial_TestExplicitSolver;

#include <cxxtest/Root.cpp>
