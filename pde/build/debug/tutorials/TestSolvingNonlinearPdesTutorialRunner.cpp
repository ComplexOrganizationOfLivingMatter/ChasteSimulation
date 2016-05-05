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
#include "pde/test/tutorials/TestSolvingNonlinearPdesTutorial.hpp"

static TestSolvingNonlinearPdesTutorial suite_TestSolvingNonlinearPdesTutorial;

static CxxTest::List Tests_TestSolvingNonlinearPdesTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSolvingNonlinearPdesTutorial( "pde/test/tutorials/TestSolvingNonlinearPdesTutorial.hpp", 146, "TestSolvingNonlinearPdesTutorial", suite_TestSolvingNonlinearPdesTutorial, Tests_TestSolvingNonlinearPdesTutorial );

static class TestDescription_TestSolvingNonlinearPdesTutorial_TestSolvingNonlinearEllipticPde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingNonlinearPdesTutorial_TestSolvingNonlinearEllipticPde() : CxxTest::RealTestDescription( Tests_TestSolvingNonlinearPdesTutorial, suiteDescription_TestSolvingNonlinearPdesTutorial, 153, "TestSolvingNonlinearEllipticPde" ) {}
 void runTest() { suite_TestSolvingNonlinearPdesTutorial.TestSolvingNonlinearEllipticPde(); }
} testDescription_TestSolvingNonlinearPdesTutorial_TestSolvingNonlinearEllipticPde;

#include <cxxtest/Root.cpp>
