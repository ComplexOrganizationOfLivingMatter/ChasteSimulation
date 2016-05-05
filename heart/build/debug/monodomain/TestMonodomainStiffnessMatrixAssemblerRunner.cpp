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
#include "heart/test/monodomain/TestMonodomainStiffnessMatrixAssembler.hpp"

static TestMonodomainStiffnessMatrixAssembler suite_TestMonodomainStiffnessMatrixAssembler;

static CxxTest::List Tests_TestMonodomainStiffnessMatrixAssembler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainStiffnessMatrixAssembler( "heart/test/monodomain/TestMonodomainStiffnessMatrixAssembler.hpp", 47, "TestMonodomainStiffnessMatrixAssembler", suite_TestMonodomainStiffnessMatrixAssembler, Tests_TestMonodomainStiffnessMatrixAssembler );

static class TestDescription_TestMonodomainStiffnessMatrixAssembler_TestMonodomainStiffnessMatrixAssembler1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainStiffnessMatrixAssembler_TestMonodomainStiffnessMatrixAssembler1d() : CxxTest::RealTestDescription( Tests_TestMonodomainStiffnessMatrixAssembler, suiteDescription_TestMonodomainStiffnessMatrixAssembler, 51, "TestMonodomainStiffnessMatrixAssembler1d" ) {}
 void runTest() { suite_TestMonodomainStiffnessMatrixAssembler.TestMonodomainStiffnessMatrixAssembler1d(); }
} testDescription_TestMonodomainStiffnessMatrixAssembler_TestMonodomainStiffnessMatrixAssembler1d;

#include <cxxtest/Root.cpp>
