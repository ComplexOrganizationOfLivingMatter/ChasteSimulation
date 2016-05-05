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
#include "heart/test/monodomain/TestMonodomainMassLumping.hpp"

static TestMonodomainMassLumping suite_TestMonodomainMassLumping;

static CxxTest::List Tests_TestMonodomainMassLumping = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainMassLumping( "heart/test/monodomain/TestMonodomainMassLumping.hpp", 46, "TestMonodomainMassLumping", suite_TestMonodomainMassLumping, Tests_TestMonodomainMassLumping );

static class TestDescription_TestMonodomainMassLumping_TestCompareCubePlaneStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainMassLumping_TestCompareCubePlaneStimulus() : CxxTest::RealTestDescription( Tests_TestMonodomainMassLumping, suiteDescription_TestMonodomainMassLumping, 51, "TestCompareCubePlaneStimulus" ) {}
 void runTest() { suite_TestMonodomainMassLumping.TestCompareCubePlaneStimulus(); }
} testDescription_TestMonodomainMassLumping_TestCompareCubePlaneStimulus;

static class TestDescription_TestMonodomainMassLumping_TestCompareCubePlaneStimulusOnlyPrecondLumping : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainMassLumping_TestCompareCubePlaneStimulusOnlyPrecondLumping() : CxxTest::RealTestDescription( Tests_TestMonodomainMassLumping, suiteDescription_TestMonodomainMassLumping, 106, "TestCompareCubePlaneStimulusOnlyPrecondLumping" ) {}
 void runTest() { suite_TestMonodomainMassLumping.TestCompareCubePlaneStimulusOnlyPrecondLumping(); }
} testDescription_TestMonodomainMassLumping_TestCompareCubePlaneStimulusOnlyPrecondLumping;

#include <cxxtest/Root.cpp>
