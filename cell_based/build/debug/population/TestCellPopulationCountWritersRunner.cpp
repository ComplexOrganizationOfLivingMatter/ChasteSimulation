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
#include "cell_based/test/population/TestCellPopulationCountWriters.hpp"

static TestCellPopulationCountWriters suite_TestCellPopulationCountWriters;

static CxxTest::List Tests_TestCellPopulationCountWriters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellPopulationCountWriters( "cell_based/test/population/TestCellPopulationCountWriters.hpp", 71, "TestCellPopulationCountWriters", suite_TestCellPopulationCountWriters, Tests_TestCellPopulationCountWriters );

static class TestDescription_TestCellPopulationCountWriters_TestCellMutationStatesCountWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationCountWriters_TestCellMutationStatesCountWriter() : CxxTest::RealTestDescription( Tests_TestCellPopulationCountWriters, suiteDescription_TestCellPopulationCountWriters, 75, "TestCellMutationStatesCountWriter" ) {}
 void runTest() { suite_TestCellPopulationCountWriters.TestCellMutationStatesCountWriter(); }
} testDescription_TestCellPopulationCountWriters_TestCellMutationStatesCountWriter;

static class TestDescription_TestCellPopulationCountWriters_TestCellMutationStatesCountWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationCountWriters_TestCellMutationStatesCountWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationCountWriters, suiteDescription_TestCellPopulationCountWriters, 121, "TestCellMutationStatesCountWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationCountWriters.TestCellMutationStatesCountWriterArchiving(); }
} testDescription_TestCellPopulationCountWriters_TestCellMutationStatesCountWriterArchiving;

static class TestDescription_TestCellPopulationCountWriters_TestCellProliferativePhasesCountWriters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationCountWriters_TestCellProliferativePhasesCountWriters() : CxxTest::RealTestDescription( Tests_TestCellPopulationCountWriters, suiteDescription_TestCellPopulationCountWriters, 144, "TestCellProliferativePhasesCountWriters" ) {}
 void runTest() { suite_TestCellPopulationCountWriters.TestCellProliferativePhasesCountWriters(); }
} testDescription_TestCellPopulationCountWriters_TestCellProliferativePhasesCountWriters;

static class TestDescription_TestCellPopulationCountWriters_TestCellProliferativePhasesCountWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationCountWriters_TestCellProliferativePhasesCountWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationCountWriters, suiteDescription_TestCellPopulationCountWriters, 188, "TestCellProliferativePhasesCountWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationCountWriters.TestCellProliferativePhasesCountWriterArchiving(); }
} testDescription_TestCellPopulationCountWriters_TestCellProliferativePhasesCountWriterArchiving;

static class TestDescription_TestCellPopulationCountWriters_TestCellProliferativeTypesCountWriters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationCountWriters_TestCellProliferativeTypesCountWriters() : CxxTest::RealTestDescription( Tests_TestCellPopulationCountWriters, suiteDescription_TestCellPopulationCountWriters, 211, "TestCellProliferativeTypesCountWriters" ) {}
 void runTest() { suite_TestCellPopulationCountWriters.TestCellProliferativeTypesCountWriters(); }
} testDescription_TestCellPopulationCountWriters_TestCellProliferativeTypesCountWriters;

static class TestDescription_TestCellPopulationCountWriters_TestCellProliferativeTypesCountWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPopulationCountWriters_TestCellProliferativeTypesCountWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellPopulationCountWriters, suiteDescription_TestCellPopulationCountWriters, 258, "TestCellProliferativeTypesCountWriterArchiving" ) {}
 void runTest() { suite_TestCellPopulationCountWriters.TestCellProliferativeTypesCountWriterArchiving(); }
} testDescription_TestCellPopulationCountWriters_TestCellProliferativeTypesCountWriterArchiving;

#include <cxxtest/Root.cpp>
