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
#include "ode/test/TestSolvingStiffOdeSystems.hpp"

static TestSolvingStiffOdeSystems suite_TestSolvingStiffOdeSystems;

static CxxTest::List Tests_TestSolvingStiffOdeSystems = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSolvingStiffOdeSystems( "ode/test/TestSolvingStiffOdeSystems.hpp", 51, "TestSolvingStiffOdeSystems", suite_TestSolvingStiffOdeSystems, Tests_TestSolvingStiffOdeSystems );

static class TestDescription_TestSolvingStiffOdeSystems_TestFieldNoyesReactionSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingStiffOdeSystems_TestFieldNoyesReactionSystem() : CxxTest::RealTestDescription( Tests_TestSolvingStiffOdeSystems, suiteDescription_TestSolvingStiffOdeSystems, 61, "TestFieldNoyesReactionSystem" ) {}
 void runTest() { suite_TestSolvingStiffOdeSystems.TestFieldNoyesReactionSystem(); }
} testDescription_TestSolvingStiffOdeSystems_TestFieldNoyesReactionSystem;

#include <cxxtest/Root.cpp>
