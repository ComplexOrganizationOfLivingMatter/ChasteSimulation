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
#include "cell_based/test/population/TestNodeBasedCellPopulationWithBuskeUpdate.hpp"

static TestNodeBasedCellPopulationWithBuskeUpdate suite_TestNodeBasedCellPopulationWithBuskeUpdate;

static CxxTest::List Tests_TestNodeBasedCellPopulationWithBuskeUpdate = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNodeBasedCellPopulationWithBuskeUpdate( "cell_based/test/population/TestNodeBasedCellPopulationWithBuskeUpdate.hpp", 57, "TestNodeBasedCellPopulationWithBuskeUpdate", suite_TestNodeBasedCellPopulationWithBuskeUpdate, Tests_TestNodeBasedCellPopulationWithBuskeUpdate );

static class TestDescription_TestNodeBasedCellPopulationWithBuskeUpdate_TestMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithBuskeUpdate_TestMethods() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithBuskeUpdate, suiteDescription_TestNodeBasedCellPopulationWithBuskeUpdate, 60, "TestMethods" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithBuskeUpdate.TestMethods(); }
} testDescription_TestNodeBasedCellPopulationWithBuskeUpdate_TestMethods;

static class TestDescription_TestNodeBasedCellPopulationWithBuskeUpdate_TestArchivingCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeBasedCellPopulationWithBuskeUpdate_TestArchivingCellPopulation() : CxxTest::RealTestDescription( Tests_TestNodeBasedCellPopulationWithBuskeUpdate, suiteDescription_TestNodeBasedCellPopulationWithBuskeUpdate, 140, "TestArchivingCellPopulation" ) {}
 void runTest() { suite_TestNodeBasedCellPopulationWithBuskeUpdate.TestArchivingCellPopulation(); }
} testDescription_TestNodeBasedCellPopulationWithBuskeUpdate_TestArchivingCellPopulation;

#include <cxxtest/Root.cpp>
