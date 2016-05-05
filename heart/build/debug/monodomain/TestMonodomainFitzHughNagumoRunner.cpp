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
#include "heart/test/monodomain/TestMonodomainFitzHughNagumo.hpp"

static TestMonodomainFitzHughNagumo suite_TestMonodomainFitzHughNagumo;

static CxxTest::List Tests_TestMonodomainFitzHughNagumo = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainFitzHughNagumo( "heart/test/monodomain/TestMonodomainFitzHughNagumo.hpp", 74, "TestMonodomainFitzHughNagumo", suite_TestMonodomainFitzHughNagumo, Tests_TestMonodomainFitzHughNagumo );

static class TestDescription_TestMonodomainFitzHughNagumo_TestMonodomainFitzHughNagumoWithEdgeStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainFitzHughNagumo_TestMonodomainFitzHughNagumoWithEdgeStimulus() : CxxTest::RealTestDescription( Tests_TestMonodomainFitzHughNagumo, suiteDescription_TestMonodomainFitzHughNagumo, 85, "TestMonodomainFitzHughNagumoWithEdgeStimulus" ) {}
 void runTest() { suite_TestMonodomainFitzHughNagumo.TestMonodomainFitzHughNagumoWithEdgeStimulus(); }
} testDescription_TestMonodomainFitzHughNagumo_TestMonodomainFitzHughNagumoWithEdgeStimulus;

#include <cxxtest/Root.cpp>
