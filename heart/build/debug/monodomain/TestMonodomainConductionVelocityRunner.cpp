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
#include "heart/test/monodomain/TestMonodomainConductionVelocity.hpp"

static TestMonodomainConductionVelocity suite_TestMonodomainConductionVelocity;

static CxxTest::List Tests_TestMonodomainConductionVelocity = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainConductionVelocity( "heart/test/monodomain/TestMonodomainConductionVelocity.hpp", 55, "TestMonodomainConductionVelocity", suite_TestMonodomainConductionVelocity, Tests_TestMonodomainConductionVelocity );

static class TestDescription_TestMonodomainConductionVelocity_TestMonodomainDg01DWith100elements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainConductionVelocity_TestMonodomainDg01DWith100elements() : CxxTest::RealTestDescription( Tests_TestMonodomainConductionVelocity, suiteDescription_TestMonodomainConductionVelocity, 69, "TestMonodomainDg01DWith100elements" ) {}
 void runTest() { suite_TestMonodomainConductionVelocity.TestMonodomainDg01DWith100elements(); }
} testDescription_TestMonodomainConductionVelocity_TestMonodomainDg01DWith100elements;

static class TestDescription_TestMonodomainConductionVelocity_TestMonodomainDg01DWith20elements : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainConductionVelocity_TestMonodomainDg01DWith20elements() : CxxTest::RealTestDescription( Tests_TestMonodomainConductionVelocity, suiteDescription_TestMonodomainConductionVelocity, 137, "TestMonodomainDg01DWith20elements" ) {}
 void runTest() { suite_TestMonodomainConductionVelocity.TestMonodomainDg01DWith20elements(); }
} testDescription_TestMonodomainConductionVelocity_TestMonodomainDg01DWith20elements;

#include <cxxtest/Root.cpp>
