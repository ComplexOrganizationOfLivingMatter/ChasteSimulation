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
#include "heart/test/monodomain/TestMonodomainTissue.hpp"

static TestMonodomainTissue suite_TestMonodomainTissue;

static CxxTest::List Tests_TestMonodomainTissue = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainTissue( "heart/test/monodomain/TestMonodomainTissue.hpp", 130, "TestMonodomainTissue", suite_TestMonodomainTissue, Tests_TestMonodomainTissue );

static class TestDescription_TestMonodomainTissue_TestMonodomainTissueBasic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestMonodomainTissueBasic() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 133, "TestMonodomainTissueBasic" ) {}
 void runTest() { suite_TestMonodomainTissue.TestMonodomainTissueBasic(); }
} testDescription_TestMonodomainTissue_TestMonodomainTissueBasic;

static class TestDescription_TestMonodomainTissue_TestMonodomainTissueGetCardiacCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestMonodomainTissueGetCardiacCell() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 233, "TestMonodomainTissueGetCardiacCell" ) {}
 void runTest() { suite_TestMonodomainTissue.TestMonodomainTissueGetCardiacCell(); }
} testDescription_TestMonodomainTissue_TestMonodomainTissueGetCardiacCell;

static class TestDescription_TestMonodomainTissue_TestSolveCellSystemsInclUpdateVoltage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestSolveCellSystemsInclUpdateVoltage() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 263, "TestSolveCellSystemsInclUpdateVoltage" ) {}
 void runTest() { suite_TestMonodomainTissue.TestSolveCellSystemsInclUpdateVoltage(); }
} testDescription_TestMonodomainTissue_TestSolveCellSystemsInclUpdateVoltage;

static class TestDescription_TestMonodomainTissue_TestNodeExchange : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestNodeExchange() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 319, "TestNodeExchange" ) {}
 void runTest() { suite_TestMonodomainTissue.TestNodeExchange(); }
} testDescription_TestMonodomainTissue_TestNodeExchange;

static class TestDescription_TestMonodomainTissue_TestSolveCellSystemsInclUpdateVoltageWithNodeExchange : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestSolveCellSystemsInclUpdateVoltageWithNodeExchange() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 371, "TestSolveCellSystemsInclUpdateVoltageWithNodeExchange" ) {}
 void runTest() { suite_TestMonodomainTissue.TestSolveCellSystemsInclUpdateVoltageWithNodeExchange(); }
} testDescription_TestMonodomainTissue_TestSolveCellSystemsInclUpdateVoltageWithNodeExchange;

static class TestDescription_TestMonodomainTissue_TestSaveAndLoadCardiacTissue : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestSaveAndLoadCardiacTissue() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 445, "TestSaveAndLoadCardiacTissue" ) {}
 void runTest() { suite_TestMonodomainTissue.TestSaveAndLoadCardiacTissue(); }
} testDescription_TestMonodomainTissue_TestSaveAndLoadCardiacTissue;

static class TestDescription_TestMonodomainTissue_TestMonodomainTissueUsingPurkinjeCellFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestMonodomainTissueUsingPurkinjeCellFactory() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 528, "TestMonodomainTissueUsingPurkinjeCellFactory" ) {}
 void runTest() { suite_TestMonodomainTissue.TestMonodomainTissueUsingPurkinjeCellFactory(); }
} testDescription_TestMonodomainTissue_TestMonodomainTissueUsingPurkinjeCellFactory;

static class TestDescription_TestMonodomainTissue_TestArchiveMigration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainTissue_TestArchiveMigration() : CxxTest::RealTestDescription( Tests_TestMonodomainTissue, suiteDescription_TestMonodomainTissue, 647, "TestArchiveMigration" ) {}
 void runTest() { suite_TestMonodomainTissue.TestArchiveMigration(); }
} testDescription_TestMonodomainTissue_TestArchiveMigration;

#include <cxxtest/Root.cpp>
