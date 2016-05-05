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
#include "global/test/TestFileFinder.hpp"

static TestFileFinder suite_TestFileFinder;

static CxxTest::List Tests_TestFileFinder = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFileFinder( "global/test/TestFileFinder.hpp", 49, "TestFileFinder", suite_TestFileFinder, Tests_TestFileFinder );

static class TestDescription_TestFileFinder_TestFileFinderOpening : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestFileFinderOpening() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 53, "TestFileFinderOpening" ) {}
 void runTest() { suite_TestFileFinder.TestFileFinderOpening(); }
} testDescription_TestFileFinder_TestFileFinderOpening;

static class TestDescription_TestFileFinder_TestNewer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestNewer() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 148, "TestNewer" ) {}
 void runTest() { suite_TestFileFinder.TestNewer(); }
} testDescription_TestFileFinder_TestNewer;

static class TestDescription_TestFileFinder_TestIsAbsolutePath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestIsAbsolutePath() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 164, "TestIsAbsolutePath" ) {}
 void runTest() { suite_TestFileFinder.TestIsAbsolutePath(); }
} testDescription_TestFileFinder_TestIsAbsolutePath;

static class TestDescription_TestFileFinder_TestDirFinder : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestDirFinder() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 173, "TestDirFinder" ) {}
 void runTest() { suite_TestFileFinder.TestDirFinder(); }
} testDescription_TestFileFinder_TestDirFinder;

static class TestDescription_TestFileFinder_TestHandyFilenameOperations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestHandyFilenameOperations() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 233, "TestHandyFilenameOperations" ) {}
 void runTest() { suite_TestFileFinder.TestHandyFilenameOperations(); }
} testDescription_TestFileFinder_TestHandyFilenameOperations;

static class TestDescription_TestFileFinder_TestFaking : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestFaking() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 246, "TestFaking" ) {}
 void runTest() { suite_TestFileFinder.TestFaking(); }
} testDescription_TestFileFinder_TestFaking;

static class TestDescription_TestFileFinder_TestRemove : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestRemove() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 264, "TestRemove" ) {}
 void runTest() { suite_TestFileFinder.TestRemove(); }
} testDescription_TestFileFinder_TestRemove;

static class TestDescription_TestFileFinder_TestFindMatches : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestFindMatches() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 313, "TestFindMatches" ) {}
 void runTest() { suite_TestFileFinder.TestFindMatches(); }
} testDescription_TestFileFinder_TestFindMatches;

static class TestDescription_TestFileFinder_TestCopying : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestCopying() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 363, "TestCopying" ) {}
 void runTest() { suite_TestFileFinder.TestCopying(); }
} testDescription_TestFileFinder_TestCopying;

static class TestDescription_TestFileFinder_TestDefaultConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFileFinder_TestDefaultConstructor() : CxxTest::RealTestDescription( Tests_TestFileFinder, suiteDescription_TestFileFinder, 431, "TestDefaultConstructor" ) {}
 void runTest() { suite_TestFileFinder.TestDefaultConstructor(); }
} testDescription_TestFileFinder_TestDefaultConstructor;

#include <cxxtest/Root.cpp>
