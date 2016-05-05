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
#include "heart/test/extended_bidomain/TestExtendedBidomainTissue.hpp"

static TestExtendedBidomainTissue suite_TestExtendedBidomainTissue;

static CxxTest::List Tests_TestExtendedBidomainTissue = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestExtendedBidomainTissue( "heart/test/extended_bidomain/TestExtendedBidomainTissue.hpp", 184, "TestExtendedBidomainTissue", suite_TestExtendedBidomainTissue, Tests_TestExtendedBidomainTissue );

static class TestDescription_TestExtendedBidomainTissue_TestExtendedBidomainTissueSolveCellSystems : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainTissue_TestExtendedBidomainTissueSolveCellSystems() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainTissue, suiteDescription_TestExtendedBidomainTissue, 188, "TestExtendedBidomainTissueSolveCellSystems" ) {}
 void runTest() { suite_TestExtendedBidomainTissue.TestExtendedBidomainTissueSolveCellSystems(); }
} testDescription_TestExtendedBidomainTissue_TestExtendedBidomainTissueSolveCellSystems;

static class TestDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneous3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneous3D() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainTissue, suiteDescription_TestExtendedBidomainTissue, 251, "TestExtendedTissueHeterogeneous3D" ) {}
 void runTest() { suite_TestExtendedBidomainTissue.TestExtendedTissueHeterogeneous3D(); }
} testDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneous3D;

static class TestDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneousConductivities2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneousConductivities2D() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainTissue, suiteDescription_TestExtendedBidomainTissue, 326, "TestExtendedTissueHeterogeneousConductivities2D" ) {}
 void runTest() { suite_TestExtendedBidomainTissue.TestExtendedTissueHeterogeneousConductivities2D(); }
} testDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneousConductivities2D;

static class TestDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneousGgap3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneousGgap3D() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainTissue, suiteDescription_TestExtendedBidomainTissue, 405, "TestExtendedTissueHeterogeneousGgap3D" ) {}
 void runTest() { suite_TestExtendedBidomainTissue.TestExtendedTissueHeterogeneousGgap3D(); }
} testDescription_TestExtendedBidomainTissue_TestExtendedTissueHeterogeneousGgap3D;

static class TestDescription_TestExtendedBidomainTissue_TestExtendedBidomainTissueParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainTissue_TestExtendedBidomainTissueParameters() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainTissue, suiteDescription_TestExtendedBidomainTissue, 481, "TestExtendedBidomainTissueParameters" ) {}
 void runTest() { suite_TestExtendedBidomainTissue.TestExtendedBidomainTissueParameters(); }
} testDescription_TestExtendedBidomainTissue_TestExtendedBidomainTissueParameters;

static class TestDescription_TestExtendedBidomainTissue_TestSaveAndLoadExtendedBidomainTissue : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedBidomainTissue_TestSaveAndLoadExtendedBidomainTissue() : CxxTest::RealTestDescription( Tests_TestExtendedBidomainTissue, suiteDescription_TestExtendedBidomainTissue, 525, "TestSaveAndLoadExtendedBidomainTissue" ) {}
 void runTest() { suite_TestExtendedBidomainTissue.TestSaveAndLoadExtendedBidomainTissue(); }
} testDescription_TestExtendedBidomainTissue_TestSaveAndLoadExtendedBidomainTissue;

#include <cxxtest/Root.cpp>
