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
#include "mesh/test/reader/TestMemfemMeshReader.hpp"

static TestMemfemMeshReaders suite_TestMemfemMeshReaders;

static CxxTest::List Tests_TestMemfemMeshReaders = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMemfemMeshReaders( "mesh/test/reader/TestMemfemMeshReader.hpp", 49, "TestMemfemMeshReaders", suite_TestMemfemMeshReaders, Tests_TestMemfemMeshReaders );

static class TestDescription_TestMemfemMeshReaders_TestFilesOpen : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMemfemMeshReaders_TestFilesOpen() : CxxTest::RealTestDescription( Tests_TestMemfemMeshReaders, suiteDescription_TestMemfemMeshReaders, 57, "TestFilesOpen" ) {}
 void runTest() { suite_TestMemfemMeshReaders.TestFilesOpen(); }
} testDescription_TestMemfemMeshReaders_TestFilesOpen;

static class TestDescription_TestMemfemMeshReaders_TestGenericReader : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMemfemMeshReaders_TestGenericReader() : CxxTest::RealTestDescription( Tests_TestMemfemMeshReaders, suiteDescription_TestMemfemMeshReaders, 85, "TestGenericReader" ) {}
 void runTest() { suite_TestMemfemMeshReaders.TestGenericReader(); }
} testDescription_TestMemfemMeshReaders_TestGenericReader;

static class TestDescription_TestMemfemMeshReaders_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMemfemMeshReaders_TestExceptions() : CxxTest::RealTestDescription( Tests_TestMemfemMeshReaders, suiteDescription_TestMemfemMeshReaders, 100, "TestExceptions" ) {}
 void runTest() { suite_TestMemfemMeshReaders.TestExceptions(); }
} testDescription_TestMemfemMeshReaders_TestExceptions;

#include <cxxtest/Root.cpp>
