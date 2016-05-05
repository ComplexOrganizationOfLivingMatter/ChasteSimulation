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
#include "cell_based/test/population/TestPdeAndBoundaryConditions.hpp"

static TestPdeAndBoundaryConditions suite_TestPdeAndBoundaryConditions;

static CxxTest::List Tests_TestPdeAndBoundaryConditions = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPdeAndBoundaryConditions( "cell_based/test/population/TestPdeAndBoundaryConditions.hpp", 119, "TestPdeAndBoundaryConditions", suite_TestPdeAndBoundaryConditions, Tests_TestPdeAndBoundaryConditions );

static class TestDescription_TestPdeAndBoundaryConditions_TestMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestMethods() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 123, "TestMethods" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestMethods(); }
} testDescription_TestPdeAndBoundaryConditions_TestMethods;

static class TestDescription_TestPdeAndBoundaryConditions_TestMethodsNeumann : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestMethodsNeumann() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 179, "TestMethodsNeumann" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestMethodsNeumann(); }
} testDescription_TestPdeAndBoundaryConditions_TestMethodsNeumann;

static class TestDescription_TestPdeAndBoundaryConditions_TestWithBoundaryConditionVaryingInSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestWithBoundaryConditionVaryingInSpace() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 229, "TestWithBoundaryConditionVaryingInSpace" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestWithBoundaryConditionVaryingInSpace(); }
} testDescription_TestPdeAndBoundaryConditions_TestWithBoundaryConditionVaryingInSpace;

static class TestDescription_TestPdeAndBoundaryConditions_TestWithBoundaryConditionVaryingInTime : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestWithBoundaryConditionVaryingInTime() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 257, "TestWithBoundaryConditionVaryingInTime" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestWithBoundaryConditionVaryingInTime(); }
} testDescription_TestPdeAndBoundaryConditions_TestWithBoundaryConditionVaryingInTime;

static class TestDescription_TestPdeAndBoundaryConditions_TestIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestIn3d() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 286, "TestIn3d" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestIn3d(); }
} testDescription_TestPdeAndBoundaryConditions_TestIn3d;

static class TestDescription_TestPdeAndBoundaryConditions_TestWithAveragedSourcePde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestWithAveragedSourcePde() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 302, "TestWithAveragedSourcePde" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestWithAveragedSourcePde(); }
} testDescription_TestPdeAndBoundaryConditions_TestWithAveragedSourcePde;

static class TestDescription_TestPdeAndBoundaryConditions_TestWithVolumeDependentAveragedSourcePdeSetupSourceTermsWithoutMap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestWithVolumeDependentAveragedSourcePdeSetupSourceTermsWithoutMap() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 389, "TestWithVolumeDependentAveragedSourcePdeSetupSourceTermsWithoutMap" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestWithVolumeDependentAveragedSourcePdeSetupSourceTermsWithoutMap(); }
} testDescription_TestPdeAndBoundaryConditions_TestWithVolumeDependentAveragedSourcePdeSetupSourceTermsWithoutMap;

static class TestDescription_TestPdeAndBoundaryConditions_TestArchivingWithoutSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestArchivingWithoutSolution() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 474, "TestArchivingWithoutSolution" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestArchivingWithoutSolution(); }
} testDescription_TestPdeAndBoundaryConditions_TestArchivingWithoutSolution;

static class TestDescription_TestPdeAndBoundaryConditions_TestArchivingWithSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeAndBoundaryConditions_TestArchivingWithSolution() : CxxTest::RealTestDescription( Tests_TestPdeAndBoundaryConditions, suiteDescription_TestPdeAndBoundaryConditions, 523, "TestArchivingWithSolution" ) {}
 void runTest() { suite_TestPdeAndBoundaryConditions.TestArchivingWithSolution(); }
} testDescription_TestPdeAndBoundaryConditions_TestArchivingWithSolution;

#include <cxxtest/Root.cpp>
