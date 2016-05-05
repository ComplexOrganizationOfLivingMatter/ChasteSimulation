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
#include "io/test/TestHdf5DataWriter.hpp"

static TestHdf5DataWriter suite_TestHdf5DataWriter;

static CxxTest::List Tests_TestHdf5DataWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHdf5DataWriter( "io/test/TestHdf5DataWriter.hpp", 55, "TestHdf5DataWriter", suite_TestHdf5DataWriter, Tests_TestHdf5DataWriter );

static class TestDescription_TestHdf5DataWriter_TestSimpleParallelWriteDirectlyWithHdf5 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestSimpleParallelWriteDirectlyWithHdf5() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 63, "TestSimpleParallelWriteDirectlyWithHdf5" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestSimpleParallelWriteDirectlyWithHdf5(); }
} testDescription_TestHdf5DataWriter_TestSimpleParallelWriteDirectlyWithHdf5;

static class TestDescription_TestHdf5DataWriter_TestPetscWriteDirectlyWithHdf5 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestPetscWriteDirectlyWithHdf5() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 153, "TestPetscWriteDirectlyWithHdf5" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestPetscWriteDirectlyWithHdf5(); }
} testDescription_TestHdf5DataWriter_TestPetscWriteDirectlyWithHdf5;

static class TestDescription_TestHdf5DataWriter_TestReadAndChecksumHdf5 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestReadAndChecksumHdf5() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 226, "TestReadAndChecksumHdf5" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestReadAndChecksumHdf5(); }
} testDescription_TestHdf5DataWriter_TestReadAndChecksumHdf5;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterMultipleColumns : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterMultipleColumns() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 263, "TestHdf5DataWriterMultipleColumns" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterMultipleColumns(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterMultipleColumns;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterNonEvenRowDistribution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterNonEvenRowDistribution() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 332, "TestHdf5DataWriterNonEvenRowDistribution" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterNonEvenRowDistribution(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterNonEvenRowDistribution;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatIncomplete : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatIncomplete() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 403, "TestHdf5DataWriterFullFormatIncomplete" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterFullFormatIncomplete(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatIncomplete;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormat : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormat() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 488, "TestHdf5DataWriterFullFormat" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterFullFormat(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormat;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStriped : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStriped() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 562, "TestHdf5DataWriterFullFormatStriped" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterFullFormatStriped(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStriped;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedWith3Variables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedWith3Variables() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 649, "TestHdf5DataWriterFullFormatStripedWith3Variables" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterFullFormatStripedWith3Variables(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedWith3Variables;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedIncomplete : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedIncomplete() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 701, "TestHdf5DataWriterFullFormatStripedIncomplete" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterFullFormatStripedIncomplete(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedIncomplete;

static class TestDescription_TestHdf5DataWriter_TestNonImplementedFeatures : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestNonImplementedFeatures() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 801, "TestNonImplementedFeatures" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestNonImplementedFeatures(); }
} testDescription_TestHdf5DataWriter_TestNonImplementedFeatures;

static class TestDescription_TestHdf5DataWriter_TestDefineThings : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestDefineThings() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 866, "TestDefineThings" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestDefineThings(); }
} testDescription_TestHdf5DataWriter_TestDefineThings;

static class TestDescription_TestHdf5DataWriter_TestEndDefineMode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestEndDefineMode() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 929, "TestEndDefineMode" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestEndDefineMode(); }
} testDescription_TestHdf5DataWriter_TestEndDefineMode;

static class TestDescription_TestHdf5DataWriter_TestCantAddUnlimitedAfterEndDefine : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestCantAddUnlimitedAfterEndDefine() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 984, "TestCantAddUnlimitedAfterEndDefine" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestCantAddUnlimitedAfterEndDefine(); }
} testDescription_TestHdf5DataWriter_TestCantAddUnlimitedAfterEndDefine;

static class TestDescription_TestHdf5DataWriter_TestAdvanceAlongUnlimitedDimension : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestAdvanceAlongUnlimitedDimension() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1008, "TestAdvanceAlongUnlimitedDimension" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestAdvanceAlongUnlimitedDimension(); }
} testDescription_TestHdf5DataWriter_TestAdvanceAlongUnlimitedDimension;

static class TestDescription_TestHdf5DataWriter_TestCantWriteDataWhileInDefineMode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestCantWriteDataWhileInDefineMode() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1031, "TestCantWriteDataWhileInDefineMode" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestCantWriteDataWhileInDefineMode(); }
} testDescription_TestHdf5DataWriter_TestCantWriteDataWhileInDefineMode;

static class TestDescription_TestHdf5DataWriter_TestFailCreateFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestFailCreateFile() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1107, "TestFailCreateFile" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestFailCreateFile(); }
} testDescription_TestHdf5DataWriter_TestFailCreateFile;

static class TestDescription_TestHdf5DataWriter_TestWriteNewDatasetToExistingFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestWriteNewDatasetToExistingFile() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1145, "TestWriteNewDatasetToExistingFile" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestWriteNewDatasetToExistingFile(); }
} testDescription_TestHdf5DataWriter_TestWriteNewDatasetToExistingFile;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterAddNewVariable : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterAddNewVariable() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1191, "TestHdf5DataWriterAddNewVariable" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterAddNewVariable(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterAddNewVariable;

static class TestDescription_TestHdf5DataWriter_TestWriteToExistingFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestWriteToExistingFile() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1319, "TestWriteToExistingFile" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestWriteToExistingFile(); }
} testDescription_TestHdf5DataWriter_TestWriteToExistingFile;

static class TestDescription_TestHdf5DataWriter_TestPermutation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestPermutation() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1405, "TestPermutation" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestPermutation(); }
} testDescription_TestHdf5DataWriter_TestPermutation;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatIncompleteUsingMatrix : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatIncompleteUsingMatrix() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1513, "TestHdf5DataWriterFullFormatIncompleteUsingMatrix" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterFullFormatIncompleteUsingMatrix(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatIncompleteUsingMatrix;

static class TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedIncompleteUsingMatrix : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedIncompleteUsingMatrix() : CxxTest::RealTestDescription( Tests_TestHdf5DataWriter, suiteDescription_TestHdf5DataWriter, 1577, "TestHdf5DataWriterFullFormatStripedIncompleteUsingMatrix" ) {}
 void runTest() { suite_TestHdf5DataWriter.TestHdf5DataWriterFullFormatStripedIncompleteUsingMatrix(); }
} testDescription_TestHdf5DataWriter_TestHdf5DataWriterFullFormatStripedIncompleteUsingMatrix;

#include <cxxtest/Root.cpp>
