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
#include "heart/test/bidomain/TestBidomainWithSvi.hpp"

static TestBidomainWithSvi suite_TestBidomainWithSvi;

static CxxTest::List Tests_TestBidomainWithSvi = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBidomainWithSvi( "heart/test/bidomain/TestBidomainWithSvi.hpp", 121, "TestBidomainWithSvi", suite_TestBidomainWithSvi, Tests_TestBidomainWithSvi );

static class TestDescription_TestBidomainWithSvi_TestConductionVelocityConvergesFasterWithSvi1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithSvi_TestConductionVelocityConvergesFasterWithSvi1d() : CxxTest::RealTestDescription( Tests_TestBidomainWithSvi, suiteDescription_TestBidomainWithSvi, 124, "TestConductionVelocityConvergesFasterWithSvi1d" ) {}
 void runTest() { suite_TestBidomainWithSvi.TestConductionVelocityConvergesFasterWithSvi1d(); }
} testDescription_TestBidomainWithSvi_TestConductionVelocityConvergesFasterWithSvi1d;

static class TestDescription_TestBidomainWithSvi_TestConductionVelocityInCrossFibreDirection2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithSvi_TestConductionVelocityInCrossFibreDirection2d() : CxxTest::RealTestDescription( Tests_TestBidomainWithSvi, suiteDescription_TestBidomainWithSvi, 249, "TestConductionVelocityInCrossFibreDirection2d" ) {}
 void runTest() { suite_TestBidomainWithSvi.TestConductionVelocityInCrossFibreDirection2d(); }
} testDescription_TestBidomainWithSvi_TestConductionVelocityInCrossFibreDirection2d;

static class TestDescription_TestBidomainWithSvi_TestBidomainWithBathWithSvi : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainWithSvi_TestBidomainWithBathWithSvi() : CxxTest::RealTestDescription( Tests_TestBidomainWithSvi, suiteDescription_TestBidomainWithSvi, 312, "TestBidomainWithBathWithSvi" ) {}
 void runTest() { suite_TestBidomainWithSvi.TestBidomainWithBathWithSvi(); }
} testDescription_TestBidomainWithSvi_TestBidomainWithBathWithSvi;

#include <cxxtest/Root.cpp>
