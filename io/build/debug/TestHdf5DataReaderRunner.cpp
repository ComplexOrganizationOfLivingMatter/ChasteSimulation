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
#include "io/test/TestHdf5DataReader.hpp"

static TestHdf5DataReader suite_TestHdf5DataReader;

static CxxTest::List Tests_TestHdf5DataReader = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHdf5DataReader( "io/test/TestHdf5DataReader.hpp", 60, "TestHdf5DataReader", suite_TestHdf5DataReader, Tests_TestHdf5DataReader );

static class TestDescription_TestHdf5DataReader_TestSimpleReadDirectlyWithHdf5 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataReader_TestSimpleReadDirectlyWithHdf5() : CxxTest::RealTestDescription( Tests_TestHdf5DataReader, suiteDescription_TestHdf5DataReader, 144, "TestSimpleReadDirectlyWithHdf5" ) {}
 void runTest() { suite_TestHdf5DataReader.TestSimpleReadDirectlyWithHdf5(); }
} testDescription_TestHdf5DataReader_TestSimpleReadDirectlyWithHdf5;

static class TestDescription_TestHdf5DataReader_TestMultiStepReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataReader_TestMultiStepReader() : CxxTest::RealTestDescription( Tests_TestHdf5DataReader, suiteDescription_TestHdf5DataReader, 338, "TestMultiStepReader" ) {}
 void runTest() { suite_TestHdf5DataReader.TestMultiStepReader(); }
} testDescription_TestHdf5DataReader_TestMultiStepReader;

static class TestDescription_TestHdf5DataReader_TestNonMultiStepExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataReader_TestNonMultiStepExceptions() : CxxTest::RealTestDescription( Tests_TestHdf5DataReader, suiteDescription_TestHdf5DataReader, 434, "TestNonMultiStepExceptions" ) {}
 void runTest() { suite_TestHdf5DataReader.TestNonMultiStepExceptions(); }
} testDescription_TestHdf5DataReader_TestNonMultiStepExceptions;

static class TestDescription_TestHdf5DataReader_TestMultiStepExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataReader_TestMultiStepExceptions() : CxxTest::RealTestDescription( Tests_TestHdf5DataReader, suiteDescription_TestHdf5DataReader, 480, "TestMultiStepExceptions" ) {}
 void runTest() { suite_TestHdf5DataReader.TestMultiStepExceptions(); }
} testDescription_TestHdf5DataReader_TestMultiStepExceptions;

static class TestDescription_TestHdf5DataReader_TestIncompleteData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataReader_TestIncompleteData() : CxxTest::RealTestDescription( Tests_TestHdf5DataReader, suiteDescription_TestHdf5DataReader, 544, "TestIncompleteData" ) {}
 void runTest() { suite_TestHdf5DataReader.TestIncompleteData(); }
} testDescription_TestHdf5DataReader_TestIncompleteData;

static class TestDescription_TestHdf5DataReader_TestReadingExtraData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataReader_TestReadingExtraData() : CxxTest::RealTestDescription( Tests_TestHdf5DataReader, suiteDescription_TestHdf5DataReader, 595, "TestReadingExtraData" ) {}
 void runTest() { suite_TestHdf5DataReader.TestReadingExtraData(); }
} testDescription_TestHdf5DataReader_TestReadingExtraData;

static class TestDescription_TestHdf5DataReader_TestListingDatasetsInAnHdf5File : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5DataReader_TestListingDatasetsInAnHdf5File() : CxxTest::RealTestDescription( Tests_TestHdf5DataReader, suiteDescription_TestHdf5DataReader, 633, "TestListingDatasetsInAnHdf5File" ) {}
 void runTest() { suite_TestHdf5DataReader.TestListingDatasetsInAnHdf5File(); }
} testDescription_TestHdf5DataReader_TestListingDatasetsInAnHdf5File;

#include <cxxtest/Root.cpp>
