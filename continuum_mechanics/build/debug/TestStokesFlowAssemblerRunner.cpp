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
#include "continuum_mechanics/test/TestStokesFlowAssembler.hpp"

static TestStokesFlowAssembler suite_TestStokesFlowAssembler;

static CxxTest::List Tests_TestStokesFlowAssembler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStokesFlowAssembler( "continuum_mechanics/test/TestStokesFlowAssembler.hpp", 60, "TestStokesFlowAssembler", suite_TestStokesFlowAssembler, Tests_TestStokesFlowAssembler );

static class TestDescription_TestStokesFlowAssembler_TestAssembler : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStokesFlowAssembler_TestAssembler() : CxxTest::RealTestDescription( Tests_TestStokesFlowAssembler, suiteDescription_TestStokesFlowAssembler, 67, "TestAssembler" ) {}
 void runTest() { suite_TestStokesFlowAssembler.TestAssembler(); }
} testDescription_TestStokesFlowAssembler_TestAssembler;

#include <cxxtest/Root.cpp>
