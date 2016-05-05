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
#include "cell_based/test/population/TestPottsUpdateRules.hpp"

static TestPottsUpdateRules suite_TestPottsUpdateRules;

static CxxTest::List Tests_TestPottsUpdateRules = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsUpdateRules( "cell_based/test/population/TestPottsUpdateRules.hpp", 64, "TestPottsUpdateRules", suite_TestPottsUpdateRules, Tests_TestPottsUpdateRules );

static class TestDescription_TestPottsUpdateRules_TestVolumeConstraintPottsUpdateRuleIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestVolumeConstraintPottsUpdateRuleIn2d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 68, "TestVolumeConstraintPottsUpdateRuleIn2d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestVolumeConstraintPottsUpdateRuleIn2d(); }
} testDescription_TestPottsUpdateRules_TestVolumeConstraintPottsUpdateRuleIn2d;

static class TestDescription_TestPottsUpdateRules_TestVolumeConstraintPottsUpdateRuleIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestVolumeConstraintPottsUpdateRuleIn3d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 127, "TestVolumeConstraintPottsUpdateRuleIn3d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestVolumeConstraintPottsUpdateRuleIn3d(); }
} testDescription_TestPottsUpdateRules_TestVolumeConstraintPottsUpdateRuleIn3d;

static class TestDescription_TestPottsUpdateRules_TestArchiveVolumeConstraintPottsUpdateRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestArchiveVolumeConstraintPottsUpdateRule() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 178, "TestArchiveVolumeConstraintPottsUpdateRule" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestArchiveVolumeConstraintPottsUpdateRule(); }
} testDescription_TestPottsUpdateRules_TestArchiveVolumeConstraintPottsUpdateRule;

static class TestDescription_TestPottsUpdateRules_TestSurfaceAreaConstraintPottsUpdateRuleIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestSurfaceAreaConstraintPottsUpdateRuleIn2d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 217, "TestSurfaceAreaConstraintPottsUpdateRuleIn2d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestSurfaceAreaConstraintPottsUpdateRuleIn2d(); }
} testDescription_TestPottsUpdateRules_TestSurfaceAreaConstraintPottsUpdateRuleIn2d;

static class TestDescription_TestPottsUpdateRules_TestSurfaceAreaConstraintPottsUpdateRuleIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestSurfaceAreaConstraintPottsUpdateRuleIn3d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 283, "TestSurfaceAreaConstraintPottsUpdateRuleIn3d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestSurfaceAreaConstraintPottsUpdateRuleIn3d(); }
} testDescription_TestPottsUpdateRules_TestSurfaceAreaConstraintPottsUpdateRuleIn3d;

static class TestDescription_TestPottsUpdateRules_TestArchiveSurfaceAreaConstraintPottsUpdateRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestArchiveSurfaceAreaConstraintPottsUpdateRule() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 342, "TestArchiveSurfaceAreaConstraintPottsUpdateRule" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestArchiveSurfaceAreaConstraintPottsUpdateRule(); }
} testDescription_TestPottsUpdateRules_TestArchiveSurfaceAreaConstraintPottsUpdateRule;

static class TestDescription_TestPottsUpdateRules_TestAdhesionPottsUpdateRuleIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestAdhesionPottsUpdateRuleIn2d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 381, "TestAdhesionPottsUpdateRuleIn2d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestAdhesionPottsUpdateRuleIn2d(); }
} testDescription_TestPottsUpdateRules_TestAdhesionPottsUpdateRuleIn2d;

static class TestDescription_TestPottsUpdateRules_TestAdhesionPottsUpdateRuleIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestAdhesionPottsUpdateRuleIn3d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 447, "TestAdhesionPottsUpdateRuleIn3d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestAdhesionPottsUpdateRuleIn3d(); }
} testDescription_TestPottsUpdateRules_TestAdhesionPottsUpdateRuleIn3d;

static class TestDescription_TestPottsUpdateRules_TestArchiveAdhesionPottsUpdateRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestArchiveAdhesionPottsUpdateRule() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 506, "TestArchiveAdhesionPottsUpdateRule" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestArchiveAdhesionPottsUpdateRule(); }
} testDescription_TestPottsUpdateRules_TestArchiveAdhesionPottsUpdateRule;

static class TestDescription_TestPottsUpdateRules_TestDifferentialAdhesionPottsUpdateRuleIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestDifferentialAdhesionPottsUpdateRuleIn2d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 545, "TestDifferentialAdhesionPottsUpdateRuleIn2d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestDifferentialAdhesionPottsUpdateRuleIn2d(); }
} testDescription_TestPottsUpdateRules_TestDifferentialAdhesionPottsUpdateRuleIn2d;

static class TestDescription_TestPottsUpdateRules_TestDifferentialAdhesionPottsUpdateRuleIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestDifferentialAdhesionPottsUpdateRuleIn3d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 635, "TestDifferentialAdhesionPottsUpdateRuleIn3d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestDifferentialAdhesionPottsUpdateRuleIn3d(); }
} testDescription_TestPottsUpdateRules_TestDifferentialAdhesionPottsUpdateRuleIn3d;

static class TestDescription_TestPottsUpdateRules_TestArchiveDifferentialAdhesionPottsUpdateRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestArchiveDifferentialAdhesionPottsUpdateRule() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 704, "TestArchiveDifferentialAdhesionPottsUpdateRule" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestArchiveDifferentialAdhesionPottsUpdateRule(); }
} testDescription_TestPottsUpdateRules_TestArchiveDifferentialAdhesionPottsUpdateRule;

static class TestDescription_TestPottsUpdateRules_TestChemotaxisPottsUpdateRuleIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestChemotaxisPottsUpdateRuleIn2d() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 749, "TestChemotaxisPottsUpdateRuleIn2d" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestChemotaxisPottsUpdateRuleIn2d(); }
} testDescription_TestPottsUpdateRules_TestChemotaxisPottsUpdateRuleIn2d;

static class TestDescription_TestPottsUpdateRules_TestArchiveChemotaxisPottsUpdateRule : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestArchiveChemotaxisPottsUpdateRule() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 785, "TestArchiveChemotaxisPottsUpdateRule" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestArchiveChemotaxisPottsUpdateRule(); }
} testDescription_TestPottsUpdateRules_TestArchiveChemotaxisPottsUpdateRule;

static class TestDescription_TestPottsUpdateRules_TestUpdateRuleOutputUpdateRuleInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsUpdateRules_TestUpdateRuleOutputUpdateRuleInfo() : CxxTest::RealTestDescription( Tests_TestPottsUpdateRules, suiteDescription_TestPottsUpdateRules, 822, "TestUpdateRuleOutputUpdateRuleInfo" ) {}
 void runTest() { suite_TestPottsUpdateRules.TestUpdateRuleOutputUpdateRuleInfo(); }
} testDescription_TestPottsUpdateRules_TestUpdateRuleOutputUpdateRuleInfo;

#include <cxxtest/Root.cpp>
