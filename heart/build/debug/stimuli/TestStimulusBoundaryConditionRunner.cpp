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
#include "heart/test/stimuli/TestStimulusBoundaryCondition.hpp"

static TestStimulusBoundaryCondition suite_TestStimulusBoundaryCondition;

static CxxTest::List Tests_TestStimulusBoundaryCondition = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStimulusBoundaryCondition( "heart/test/stimuli/TestStimulusBoundaryCondition.hpp", 46, "TestStimulusBoundaryCondition", suite_TestStimulusBoundaryCondition, Tests_TestStimulusBoundaryCondition );

static class TestDescription_TestStimulusBoundaryCondition_TestStimulusBoundaryConditionMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusBoundaryCondition_TestStimulusBoundaryConditionMethod() : CxxTest::RealTestDescription( Tests_TestStimulusBoundaryCondition, suiteDescription_TestStimulusBoundaryCondition, 49, "TestStimulusBoundaryConditionMethod" ) {}
 void runTest() { suite_TestStimulusBoundaryCondition.TestStimulusBoundaryConditionMethod(); }
} testDescription_TestStimulusBoundaryCondition_TestStimulusBoundaryConditionMethod;

#include <cxxtest/Root.cpp>
