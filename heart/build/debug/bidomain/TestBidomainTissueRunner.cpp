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
#include "heart/test/bidomain/TestBidomainTissue.hpp"

static TestBidomainTissue suite_TestBidomainTissue;

static CxxTest::List Tests_TestBidomainTissue = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBidomainTissue( "heart/test/bidomain/TestBidomainTissue.hpp", 99, "TestBidomainTissue", suite_TestBidomainTissue, Tests_TestBidomainTissue );

static class TestDescription_TestBidomainTissue_TestBidomainTissueSolveCellSystems : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainTissue_TestBidomainTissueSolveCellSystems() : CxxTest::RealTestDescription( Tests_TestBidomainTissue, suiteDescription_TestBidomainTissue, 103, "TestBidomainTissueSolveCellSystems" ) {}
 void runTest() { suite_TestBidomainTissue.TestBidomainTissueSolveCellSystems(); }
} testDescription_TestBidomainTissue_TestBidomainTissueSolveCellSystems;

static class TestDescription_TestBidomainTissue_TestBidomainTissueWithHeterogeneousConductivitiesDistributed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainTissue_TestBidomainTissueWithHeterogeneousConductivitiesDistributed() : CxxTest::RealTestDescription( Tests_TestBidomainTissue, suiteDescription_TestBidomainTissue, 168, "TestBidomainTissueWithHeterogeneousConductivitiesDistributed" ) {}
 void runTest() { suite_TestBidomainTissue.TestBidomainTissueWithHeterogeneousConductivitiesDistributed(); }
} testDescription_TestBidomainTissue_TestBidomainTissueWithHeterogeneousConductivitiesDistributed;

static class TestDescription_TestBidomainTissue_TestBidomainTissueWithHeterogeneousConductivitiesEllipsoid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainTissue_TestBidomainTissueWithHeterogeneousConductivitiesEllipsoid() : CxxTest::RealTestDescription( Tests_TestBidomainTissue, suiteDescription_TestBidomainTissue, 258, "TestBidomainTissueWithHeterogeneousConductivitiesEllipsoid" ) {}
 void runTest() { suite_TestBidomainTissue.TestBidomainTissueWithHeterogeneousConductivitiesEllipsoid(); }
} testDescription_TestBidomainTissue_TestBidomainTissueWithHeterogeneousConductivitiesEllipsoid;

static class TestDescription_TestBidomainTissue_TestSaveAndLoadCardiacPDE : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainTissue_TestSaveAndLoadCardiacPDE() : CxxTest::RealTestDescription( Tests_TestBidomainTissue, suiteDescription_TestBidomainTissue, 325, "TestSaveAndLoadCardiacPDE" ) {}
 void runTest() { suite_TestBidomainTissue.TestSaveAndLoadCardiacPDE(); }
} testDescription_TestBidomainTissue_TestSaveAndLoadCardiacPDE;

#include <cxxtest/Root.cpp>
