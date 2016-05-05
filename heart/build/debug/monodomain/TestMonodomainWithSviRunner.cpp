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
#include "heart/test/monodomain/TestMonodomainWithSvi.hpp"

static TestMonodomainWithSvi suite_TestMonodomainWithSvi;

static CxxTest::List Tests_TestMonodomainWithSvi = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainWithSvi( "heart/test/monodomain/TestMonodomainWithSvi.hpp", 171, "TestMonodomainWithSvi", suite_TestMonodomainWithSvi, Tests_TestMonodomainWithSvi );

static class TestDescription_TestMonodomainWithSvi_TestConductionVelocityConvergesFasterWithSvi1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithSvi_TestConductionVelocityConvergesFasterWithSvi1d() : CxxTest::RealTestDescription( Tests_TestMonodomainWithSvi, suiteDescription_TestMonodomainWithSvi, 179, "TestConductionVelocityConvergesFasterWithSvi1d" ) {}
 void runTest() { suite_TestMonodomainWithSvi.TestConductionVelocityConvergesFasterWithSvi1d(); }
} testDescription_TestMonodomainWithSvi_TestConductionVelocityConvergesFasterWithSvi1d;

static class TestDescription_TestMonodomainWithSvi_TestConductionVelocityInCrossFibreDirection2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithSvi_TestConductionVelocityInCrossFibreDirection2d() : CxxTest::RealTestDescription( Tests_TestMonodomainWithSvi, suiteDescription_TestMonodomainWithSvi, 314, "TestConductionVelocityInCrossFibreDirection2d" ) {}
 void runTest() { suite_TestMonodomainWithSvi.TestConductionVelocityInCrossFibreDirection2d(); }
} testDescription_TestMonodomainWithSvi_TestConductionVelocityInCrossFibreDirection2d;

static class TestDescription_TestMonodomainWithSvi_TestCoverage3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithSvi_TestCoverage3d() : CxxTest::RealTestDescription( Tests_TestMonodomainWithSvi, suiteDescription_TestMonodomainWithSvi, 437, "TestCoverage3d" ) {}
 void runTest() { suite_TestMonodomainWithSvi.TestCoverage3d(); }
} testDescription_TestMonodomainWithSvi_TestCoverage3d;

static class TestDescription_TestMonodomainWithSvi_TestWithHeterogeneousCellModels : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithSvi_TestWithHeterogeneousCellModels() : CxxTest::RealTestDescription( Tests_TestMonodomainWithSvi, suiteDescription_TestMonodomainWithSvi, 453, "TestWithHeterogeneousCellModels" ) {}
 void runTest() { suite_TestMonodomainWithSvi.TestWithHeterogeneousCellModels(); }
} testDescription_TestMonodomainWithSvi_TestWithHeterogeneousCellModels;

static class TestDescription_TestMonodomainWithSvi_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithSvi_TestArchiving() : CxxTest::RealTestDescription( Tests_TestMonodomainWithSvi, suiteDescription_TestMonodomainWithSvi, 484, "TestArchiving" ) {}
 void runTest() { suite_TestMonodomainWithSvi.TestArchiving(); }
} testDescription_TestMonodomainWithSvi_TestArchiving;

static class TestDescription_TestMonodomainWithSvi_TestMonodomainFailing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainWithSvi_TestMonodomainFailing() : CxxTest::RealTestDescription( Tests_TestMonodomainWithSvi, suiteDescription_TestMonodomainWithSvi, 534, "TestMonodomainFailing" ) {}
 void runTest() { suite_TestMonodomainWithSvi.TestMonodomainFailing(); }
} testDescription_TestMonodomainWithSvi_TestMonodomainFailing;

#include <cxxtest/Root.cpp>
