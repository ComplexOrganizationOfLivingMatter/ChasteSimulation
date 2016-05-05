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
#include "heart/test/TestCardiacSimulationArchiver.hpp"

static TestCardiacSimulationArchiver suite_TestCardiacSimulationArchiver;

static CxxTest::List Tests_TestCardiacSimulationArchiver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCardiacSimulationArchiver( "heart/test/TestCardiacSimulationArchiver.hpp", 81, "TestCardiacSimulationArchiver", suite_TestCardiacSimulationArchiver, Tests_TestCardiacSimulationArchiver );

static class TestDescription_TestCardiacSimulationArchiver_TestSimpleBidomain1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestSimpleBidomain1D() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 97, "TestSimpleBidomain1D" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestSimpleBidomain1D(); }
} testDescription_TestCardiacSimulationArchiver_TestSimpleBidomain1D;

static class TestDescription_TestCardiacSimulationArchiver_TestArchivingWithHelperClass : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestArchivingWithHelperClass() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 138, "TestArchivingWithHelperClass" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestArchivingWithHelperClass(); }
} testDescription_TestCardiacSimulationArchiver_TestArchivingWithHelperClass;

static class TestDescription_TestCardiacSimulationArchiver_TestGenerateResultsForResumeBidomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestGenerateResultsForResumeBidomain() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 284, "TestGenerateResultsForResumeBidomain" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestGenerateResultsForResumeBidomain(); }
} testDescription_TestCardiacSimulationArchiver_TestGenerateResultsForResumeBidomain;

static class TestDescription_TestCardiacSimulationArchiver_TestGenerateResultsForResumeMonodomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestGenerateResultsForResumeMonodomain() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 350, "TestGenerateResultsForResumeMonodomain" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestGenerateResultsForResumeMonodomain(); }
} testDescription_TestCardiacSimulationArchiver_TestGenerateResultsForResumeMonodomain;

static class TestDescription_TestCardiacSimulationArchiver_TestMigrationExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestMigrationExceptions() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 588, "TestMigrationExceptions" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestMigrationExceptions(); }
} testDescription_TestCardiacSimulationArchiver_TestMigrationExceptions;

static class TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadAsSequential : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadAsSequential() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 611, "TestCreateArchiveForLoadAsSequential" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestCreateArchiveForLoadAsSequential(); }
} testDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadAsSequential;

static class TestDescription_TestCardiacSimulationArchiver_TestLoadAsSequential : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestLoadAsSequential() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 652, "TestLoadAsSequential" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestLoadAsSequential(); }
} testDescription_TestCardiacSimulationArchiver_TestLoadAsSequential;

static class TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadAsSequentialWithBath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadAsSequentialWithBath() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 702, "TestCreateArchiveForLoadAsSequentialWithBath" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestCreateArchiveForLoadAsSequentialWithBath(); }
} testDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadAsSequentialWithBath;

static class TestDescription_TestCardiacSimulationArchiver_TestLoadAsSequentialWithBath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestLoadAsSequentialWithBath() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 755, "TestLoadAsSequentialWithBath" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestLoadAsSequentialWithBath(); }
} testDescription_TestCardiacSimulationArchiver_TestLoadAsSequentialWithBath;

static class TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadFromSequential : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadFromSequential() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 956, "TestCreateArchiveForLoadFromSequential" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestCreateArchiveForLoadFromSequential(); }
} testDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadFromSequential;

static class TestDescription_TestCardiacSimulationArchiver_TestLoadFromSequential : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestLoadFromSequential() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 977, "TestLoadFromSequential" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestLoadFromSequential(); }
} testDescription_TestCardiacSimulationArchiver_TestLoadFromSequential;

static class TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadFromSequentialWithBath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadFromSequentialWithBath() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1027, "TestCreateArchiveForLoadFromSequentialWithBath" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestCreateArchiveForLoadFromSequentialWithBath(); }
} testDescription_TestCardiacSimulationArchiver_TestCreateArchiveForLoadFromSequentialWithBath;

static class TestDescription_TestCardiacSimulationArchiver_TestLoadFromSequentialWithBath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestLoadFromSequentialWithBath() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1063, "TestLoadFromSequentialWithBath" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestLoadFromSequentialWithBath(); }
} testDescription_TestCardiacSimulationArchiver_TestLoadFromSequentialWithBath;

static class TestDescription_TestCardiacSimulationArchiver_TestSolveAndResumeWithPostprocessing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestSolveAndResumeWithPostprocessing() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1154, "TestSolveAndResumeWithPostprocessing" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestSolveAndResumeWithPostprocessing(); }
} testDescription_TestCardiacSimulationArchiver_TestSolveAndResumeWithPostprocessing;

static class TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForBcsOnNonMasterOnly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForBcsOnNonMasterOnly() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1213, "TestCreateArchiveForBcsOnNonMasterOnly" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestCreateArchiveForBcsOnNonMasterOnly(); }
} testDescription_TestCardiacSimulationArchiver_TestCreateArchiveForBcsOnNonMasterOnly;

static class TestDescription_TestCardiacSimulationArchiver_TestBcsOnNonMasterOnly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestBcsOnNonMasterOnly() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1261, "TestBcsOnNonMasterOnly" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestBcsOnNonMasterOnly(); }
} testDescription_TestCardiacSimulationArchiver_TestBcsOnNonMasterOnly;

static class TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForMigrateAfterSolve : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestCreateArchiveForMigrateAfterSolve() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1309, "TestCreateArchiveForMigrateAfterSolve" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestCreateArchiveForMigrateAfterSolve(); }
} testDescription_TestCardiacSimulationArchiver_TestCreateArchiveForMigrateAfterSolve;

static class TestDescription_TestCardiacSimulationArchiver_TestMigrateAfterSolve : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestMigrateAfterSolve() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1345, "TestMigrateAfterSolve" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestMigrateAfterSolve(); }
} testDescription_TestCardiacSimulationArchiver_TestMigrateAfterSolve;

static class TestDescription_TestCardiacSimulationArchiver_TestPermutedBidomain1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulationArchiver_TestPermutedBidomain1D() : CxxTest::RealTestDescription( Tests_TestCardiacSimulationArchiver, suiteDescription_TestCardiacSimulationArchiver, 1392, "TestPermutedBidomain1D" ) {}
 void runTest() { suite_TestCardiacSimulationArchiver.TestPermutedBidomain1D(); }
} testDescription_TestCardiacSimulationArchiver_TestPermutedBidomain1D;

#include <cxxtest/Root.cpp>
