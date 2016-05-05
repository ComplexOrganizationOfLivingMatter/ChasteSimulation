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
#include "global/test/TestPetscTools2.hpp"

static TestPetscTools2 suite_TestPetscTools2;

static CxxTest::List Tests_TestPetscTools2 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPetscTools2( "global/test/TestPetscTools2.hpp", 49, "TestPetscTools2", suite_TestPetscTools2, Tests_TestPetscTools2 );

static class TestDescription_TestPetscTools2_TestSequentialBehaviour : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools2_TestSequentialBehaviour() : CxxTest::RealTestDescription( Tests_TestPetscTools2, suiteDescription_TestPetscTools2, 52, "TestSequentialBehaviour" ) {}
 void runTest() { suite_TestPetscTools2.TestSequentialBehaviour(); }
} testDescription_TestPetscTools2_TestSequentialBehaviour;

#include <cxxtest/Root.cpp>
