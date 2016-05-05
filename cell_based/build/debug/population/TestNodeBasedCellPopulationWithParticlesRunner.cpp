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
#include "cell_based/test/population/TestNodeBasedCellPopulationWithParticles.hpp"

static TestNodeBasedCellPopulationWithParticles suite_TestNodeBasedCellPopulationWithParticles;

static CxxTest::List Tests_TestNodeBasedCellPopulationWithParticles = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNodeBasedCellPopulationWithParticles( "cell_based/test/population/TestNodeBasedCellPopulationWithParticles.hpp", 73, "TestNodeBasedCellPopulationWithParticles", suite_TestNodeBasedCellPopulationWithParticles, Tests_TestNodeBasedCellPopulationWithParticles );

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestValidateNodeBasedCellPopulationWithParticles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestValidateNodeBasedCellPopulationWithParticles() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 81, "TestValidateNodeBasedCellPopulationWithParticles" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestValidateNodeBasedCellPopulationWithParticles(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestValidateNodeBasedCellPopulationWithParticles;

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestNodeBasedCellPopulationWithParticlesSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestNodeBasedCellPopulationWithParticlesSetup() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 136, "TestNodeBasedCellPopulationWithParticlesSetup" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestNodeBasedCellPopulationWithParticlesSetup(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestNodeBasedCellPopulationWithParticlesSetup;

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestCellPopulationIteratorWithNoCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestCellPopulationIteratorWithNoCells() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 206, "TestCellPopulationIteratorWithNoCells" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestCellPopulationIteratorWithNoCells(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestCellPopulationIteratorWithNoCells;

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestRemoveDeadCellsAndReMeshWithParticles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestRemoveDeadCellsAndReMeshWithParticles() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 266, "TestRemoveDeadCellsAndReMeshWithParticles" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestRemoveDeadCellsAndReMeshWithParticles(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestRemoveDeadCellsAndReMeshWithParticles;

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestAddAndRemoveAndAddWithOutUpdate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestAddAndRemoveAndAddWithOutUpdate() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 366, "TestAddAndRemoveAndAddWithOutUpdate" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestAddAndRemoveAndAddWithOutUpdate(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestAddAndRemoveAndAddWithOutUpdate;

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestUpdateNodeLocations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestUpdateNodeLocations() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 442, "TestUpdateNodeLocations" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestUpdateNodeLocations(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestUpdateNodeLocations;

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestCellPopulationWritersIn3dWithParticles : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestCellPopulationWritersIn3dWithParticles() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 594, "TestCellPopulationWritersIn3dWithParticles" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestCellPopulationWritersIn3dWithParticles(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestCellPopulationWritersIn3dWithParticles;

static class TestDescription_TestNodeBasedCellPopulationWithParticles_TestArchivingCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithParticles_TestArchivingCellPopulation() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithParticles, suiteDescription_TestNodeBasedCellPopulationWithParticles, 714, "TestArchivingCellPopulation" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithParticles.TestArchivingCellPopulation(); }
} testDescription_TestNodeBasedCellPopulationWithParticles_TestArchivingCellPopulation;

#include <cxxtest/Root.cpp>
