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
#include "cell_based/test/population/TestCellWriters.hpp"

static TestCellWriters suite_TestCellWriters;

static CxxTest::List Tests_TestCellWriters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellWriters( "cell_based/test/population/TestCellWriters.hpp", 86, "TestCellWriters", suite_TestCellWriters, Tests_TestCellWriters );

static class TestDescription_TestCellWriters_TestCellAgesWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellAgesWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 90, "TestCellAgesWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellAgesWriter(); }
} testDescription_TestCellWriters_TestCellAgesWriter;

static class TestDescription_TestCellWriters_TestCellAgesWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellAgesWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 167, "TestCellAgesWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellAgesWriterArchiving(); }
} testDescription_TestCellWriters_TestCellAgesWriterArchiving;

static class TestDescription_TestCellWriters_TestCellAncestorWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellAncestorWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 196, "TestCellAncestorWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellAncestorWriter(); }
} testDescription_TestCellWriters_TestCellAncestorWriter;

static class TestDescription_TestCellWriters_TestCellAncestorWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellAncestorWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 263, "TestCellAncestorWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellAncestorWriterArchiving(); }
} testDescription_TestCellWriters_TestCellAncestorWriterArchiving;

static class TestDescription_TestCellWriters_TestCellDeltaNotchWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellDeltaNotchWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 292, "TestCellDeltaNotchWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellDeltaNotchWriter(); }
} testDescription_TestCellWriters_TestCellDeltaNotchWriter;

static class TestDescription_TestCellWriters_TestCellDeltaNotchWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellDeltaNotchWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 357, "TestCellDeltaNotchWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellDeltaNotchWriterArchiving(); }
} testDescription_TestCellWriters_TestCellDeltaNotchWriterArchiving;

static class TestDescription_TestCellWriters_TestCellIdWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellIdWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 386, "TestCellIdWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellIdWriter(); }
} testDescription_TestCellWriters_TestCellIdWriter;

static class TestDescription_TestCellWriters_TestCellIdWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellIdWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 458, "TestCellIdWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellIdWriterArchiving(); }
} testDescription_TestCellWriters_TestCellIdWriterArchiving;

static class TestDescription_TestCellWriters_TestCellLabelWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellLabelWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 487, "TestCellLabelWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellLabelWriter(); }
} testDescription_TestCellWriters_TestCellLabelWriter;

static class TestDescription_TestCellWriters_TestCellLabelWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellLabelWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 552, "TestCellLabelWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellLabelWriterArchiving(); }
} testDescription_TestCellWriters_TestCellLabelWriterArchiving;

static class TestDescription_TestCellWriters_TestCellLocationIndexWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellLocationIndexWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 581, "TestCellLocationIndexWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellLocationIndexWriter(); }
} testDescription_TestCellWriters_TestCellLocationIndexWriter;

static class TestDescription_TestCellWriters_TestCellLocationIndexWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellLocationIndexWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 631, "TestCellLocationIndexWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellLocationIndexWriterArchiving(); }
} testDescription_TestCellWriters_TestCellLocationIndexWriterArchiving;

static class TestDescription_TestCellWriters_TestCellMutationStatesWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellMutationStatesWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 660, "TestCellMutationStatesWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellMutationStatesWriter(); }
} testDescription_TestCellWriters_TestCellMutationStatesWriter;

static class TestDescription_TestCellWriters_TestCellMutationStatesWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellMutationStatesWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 730, "TestCellMutationStatesWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellMutationStatesWriterArchiving(); }
} testDescription_TestCellWriters_TestCellMutationStatesWriterArchiving;

static class TestDescription_TestCellWriters_TestCellProliferativePhasesWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellProliferativePhasesWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 759, "TestCellProliferativePhasesWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellProliferativePhasesWriter(); }
} testDescription_TestCellWriters_TestCellProliferativePhasesWriter;

static class TestDescription_TestCellWriters_TestCellProliferativePhasesWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellProliferativePhasesWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 823, "TestCellProliferativePhasesWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellProliferativePhasesWriterArchiving(); }
} testDescription_TestCellWriters_TestCellProliferativePhasesWriterArchiving;

static class TestDescription_TestCellWriters_TestCellProliferativeTypesWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellProliferativeTypesWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 852, "TestCellProliferativeTypesWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellProliferativeTypesWriter(); }
} testDescription_TestCellWriters_TestCellProliferativeTypesWriter;

static class TestDescription_TestCellWriters_TestCellProliferativeTypesWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellProliferativeTypesWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 931, "TestCellProliferativeTypesWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellProliferativeTypesWriterArchiving(); }
} testDescription_TestCellWriters_TestCellProliferativeTypesWriterArchiving;

static class TestDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 960, "TestCellCycleModelProteinConcentrationsWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellCycleModelProteinConcentrationsWriter(); }
} testDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriter;

static class TestDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriterException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriterException() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1029, "TestCellCycleModelProteinConcentrationsWriterException" ) {}
 void runTest() { suite_TestCellWriters.TestCellCycleModelProteinConcentrationsWriterException(); }
} testDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriterException;

static class TestDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1079, "TestCellCycleModelProteinConcentrationsWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellCycleModelProteinConcentrationsWriterArchiving(); }
} testDescription_TestCellWriters_TestCellCycleModelProteinConcentrationsWriterArchiving;

static class TestDescription_TestCellWriters_TestCellVolumesWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellVolumesWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1108, "TestCellVolumesWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellVolumesWriter(); }
} testDescription_TestCellWriters_TestCellVolumesWriter;

static class TestDescription_TestCellWriters_TestCellVolumesWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellVolumesWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1154, "TestCellVolumesWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellVolumesWriterArchiving(); }
} testDescription_TestCellWriters_TestCellVolumesWriterArchiving;

static class TestDescription_TestCellWriters_TestCellRosetteRankWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellRosetteRankWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1183, "TestCellRosetteRankWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellRosetteRankWriter(); }
} testDescription_TestCellWriters_TestCellRosetteRankWriter;

static class TestDescription_TestCellWriters_TestCellRosetteRankWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellRosetteRankWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1276, "TestCellRosetteRankWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellRosetteRankWriterArchiving(); }
} testDescription_TestCellWriters_TestCellRosetteRankWriterArchiving;

static class TestDescription_TestCellWriters_TestCellRadiusWriter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellRadiusWriter() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1305, "TestCellRadiusWriter" ) {}
 void runTest() { suite_TestCellWriters.TestCellRadiusWriter(); }
} testDescription_TestCellWriters_TestCellRadiusWriter;

static class TestDescription_TestCellWriters_TestCellRadiusWriterArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellWriters_TestCellRadiusWriterArchiving() : CxxTest::RealTestDescription( Tests_TestCellWriters, suiteDescription_TestCellWriters, 1369, "TestCellRadiusWriterArchiving" ) {}
 void runTest() { suite_TestCellWriters.TestCellRadiusWriterArchiving(); }
} testDescription_TestCellWriters_TestCellRadiusWriterArchiving;

#include <cxxtest/Root.cpp>
