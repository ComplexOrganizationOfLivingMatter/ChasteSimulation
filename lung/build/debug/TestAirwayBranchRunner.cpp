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
#include "lung/test/TestAirwayBranch.hpp"

static TestAirwayBranch suite_TestAirwayBranch;

static CxxTest::List Tests_TestAirwayBranch = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAirwayBranch( "lung/test/TestAirwayBranch.hpp", 43, "TestAirwayBranch", suite_TestAirwayBranch, Tests_TestAirwayBranch );

static class TestDescription_TestAirwayBranch_TestMakeBranch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayBranch_TestMakeBranch() : CxxTest::RealTestDescription( Tests_TestAirwayBranch, suiteDescription_TestAirwayBranch, 46, "TestMakeBranch" ) {}
 void runTest() { suite_TestAirwayBranch.TestMakeBranch(); }
} testDescription_TestAirwayBranch_TestMakeBranch;

static class TestDescription_TestAirwayBranch_TestAngleCalculations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayBranch_TestAngleCalculations() : CxxTest::RealTestDescription( Tests_TestAirwayBranch, suiteDescription_TestAirwayBranch, 100, "TestAngleCalculations" ) {}
 void runTest() { suite_TestAirwayBranch.TestAngleCalculations(); }
} testDescription_TestAirwayBranch_TestAngleCalculations;

static class TestDescription_TestAirwayBranch_TestBranchIndexing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayBranch_TestBranchIndexing() : CxxTest::RealTestDescription( Tests_TestAirwayBranch, suiteDescription_TestAirwayBranch, 136, "TestBranchIndexing" ) {}
 void runTest() { suite_TestAirwayBranch.TestBranchIndexing(); }
} testDescription_TestAirwayBranch_TestBranchIndexing;

static class TestDescription_TestAirwayBranch_TestGetProximalAndDistalNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayBranch_TestGetProximalAndDistalNodes() : CxxTest::RealTestDescription( Tests_TestAirwayBranch, suiteDescription_TestAirwayBranch, 148, "TestGetProximalAndDistalNodes" ) {}
 void runTest() { suite_TestAirwayBranch.TestGetProximalAndDistalNodes(); }
} testDescription_TestAirwayBranch_TestGetProximalAndDistalNodes;

static class TestDescription_TestAirwayBranch_TestBranchProperties : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAirwayBranch_TestBranchProperties() : CxxTest::RealTestDescription( Tests_TestAirwayBranch, suiteDescription_TestAirwayBranch, 229, "TestBranchProperties" ) {}
 void runTest() { suite_TestAirwayBranch.TestBranchProperties(); }
} testDescription_TestAirwayBranch_TestBranchProperties;

#include <cxxtest/Root.cpp>
