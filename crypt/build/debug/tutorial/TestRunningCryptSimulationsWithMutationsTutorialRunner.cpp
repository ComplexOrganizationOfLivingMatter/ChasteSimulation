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
#include "crypt/test/tutorial/TestRunningCryptSimulationsWithMutationsTutorial.hpp"

static TestRunningCryptSimulationsWithMutationsTutorial suite_TestRunningCryptSimulationsWithMutationsTutorial;

static CxxTest::List Tests_TestRunningCryptSimulationsWithMutationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningCryptSimulationsWithMutationsTutorial( "crypt/test/tutorial/TestRunningCryptSimulationsWithMutationsTutorial.hpp", 113, "TestRunningCryptSimulationsWithMutationsTutorial", suite_TestRunningCryptSimulationsWithMutationsTutorial, Tests_TestRunningCryptSimulationsWithMutationsTutorial );

static class TestDescription_TestRunningCryptSimulationsWithMutationsTutorial_TestMeshBasedCryptWithMutations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningCryptSimulationsWithMutationsTutorial_TestMeshBasedCryptWithMutations() : CxxTest::RealTestDescription( Tests_TestRunningCryptSimulationsWithMutationsTutorial, suiteDescription_TestRunningCryptSimulationsWithMutationsTutorial, 124, "TestMeshBasedCryptWithMutations" ) {}
 void runTest() { suite_TestRunningCryptSimulationsWithMutationsTutorial.TestMeshBasedCryptWithMutations(); }
} testDescription_TestRunningCryptSimulationsWithMutationsTutorial_TestMeshBasedCryptWithMutations;

#include <cxxtest/Root.cpp>
