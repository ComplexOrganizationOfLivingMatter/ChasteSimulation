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
#include "global/test/TestPetscEvents.hpp"

static TestPetscEvents suite_TestPetscEvents;

static CxxTest::List Tests_TestPetscEvents = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPetscEvents( "global/test/TestPetscEvents.hpp", 42, "TestPetscEvents", suite_TestPetscEvents, Tests_TestPetscEvents );

static class TestDescription_TestPetscEvents_TestEvents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscEvents_TestEvents() : CxxTest::RealTestDescription( Tests_TestPetscEvents, suiteDescription_TestPetscEvents, 45, "TestEvents" ) {}
 void runTest() { suite_TestPetscEvents.TestEvents(); }
} testDescription_TestPetscEvents_TestEvents;

#include <cxxtest/Root.cpp>
