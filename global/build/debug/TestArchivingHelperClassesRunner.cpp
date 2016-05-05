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
#include "global/test/TestArchivingHelperClasses.hpp"

static TestArchivingHelperClasses suite_TestArchivingHelperClasses;

static CxxTest::List Tests_TestArchivingHelperClasses = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestArchivingHelperClasses( "global/test/TestArchivingHelperClasses.hpp", 62, "TestArchivingHelperClasses", suite_TestArchivingHelperClasses, Tests_TestArchivingHelperClasses );

static class TestDescription_TestArchivingHelperClasses_TestArchiveLocationInfoMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingHelperClasses_TestArchiveLocationInfoMethods() : CxxTest::RealTestDescription( Tests_TestArchivingHelperClasses, suiteDescription_TestArchivingHelperClasses, 66, "TestArchiveLocationInfoMethods" ) {}
 void runTest() { suite_TestArchivingHelperClasses.TestArchiveLocationInfoMethods(); }
} testDescription_TestArchivingHelperClasses_TestArchiveLocationInfoMethods;

static class TestDescription_TestArchivingHelperClasses_TestArchiveLocationInfoProcessUniqueNaming : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingHelperClasses_TestArchiveLocationInfoProcessUniqueNaming() : CxxTest::RealTestDescription( Tests_TestArchivingHelperClasses, suiteDescription_TestArchivingHelperClasses, 106, "TestArchiveLocationInfoProcessUniqueNaming" ) {}
 void runTest() { suite_TestArchivingHelperClasses.TestArchiveLocationInfoProcessUniqueNaming(); }
} testDescription_TestArchivingHelperClasses_TestArchiveLocationInfoProcessUniqueNaming;

static class TestDescription_TestArchivingHelperClasses_TestProcessSpecificArchive : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingHelperClasses_TestProcessSpecificArchive() : CxxTest::RealTestDescription( Tests_TestArchivingHelperClasses, suiteDescription_TestArchivingHelperClasses, 121, "TestProcessSpecificArchive" ) {}
 void runTest() { suite_TestArchivingHelperClasses.TestProcessSpecificArchive(); }
} testDescription_TestArchivingHelperClasses_TestProcessSpecificArchive;

static class TestDescription_TestArchivingHelperClasses_TestArchiveOpenerReadAndWrite : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingHelperClasses_TestArchiveOpenerReadAndWrite() : CxxTest::RealTestDescription( Tests_TestArchivingHelperClasses, suiteDescription_TestArchivingHelperClasses, 156, "TestArchiveOpenerReadAndWrite" ) {}
 void runTest() { suite_TestArchivingHelperClasses.TestArchiveOpenerReadAndWrite(); }
} testDescription_TestArchivingHelperClasses_TestArchiveOpenerReadAndWrite;

static class TestDescription_TestArchivingHelperClasses_TestArchiveOpenerExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingHelperClasses_TestArchiveOpenerExceptions() : CxxTest::RealTestDescription( Tests_TestArchivingHelperClasses, suiteDescription_TestArchivingHelperClasses, 209, "TestArchiveOpenerExceptions" ) {}
 void runTest() { suite_TestArchivingHelperClasses.TestArchiveOpenerExceptions(); }
} testDescription_TestArchivingHelperClasses_TestArchiveOpenerExceptions;

static class TestDescription_TestArchivingHelperClasses_TestSpecifyingSecondaryArchive : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingHelperClasses_TestSpecifyingSecondaryArchive() : CxxTest::RealTestDescription( Tests_TestArchivingHelperClasses, suiteDescription_TestArchivingHelperClasses, 269, "TestSpecifyingSecondaryArchive" ) {}
 void runTest() { suite_TestArchivingHelperClasses.TestSpecifyingSecondaryArchive(); }
} testDescription_TestArchivingHelperClasses_TestSpecifyingSecondaryArchive;

static class TestDescription_TestArchivingHelperClasses_TestOpenFutureBoostArchive : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingHelperClasses_TestOpenFutureBoostArchive() : CxxTest::RealTestDescription( Tests_TestArchivingHelperClasses, suiteDescription_TestArchivingHelperClasses, 314, "TestOpenFutureBoostArchive" ) {}
 void runTest() { suite_TestArchivingHelperClasses.TestOpenFutureBoostArchive(); }
} testDescription_TestArchivingHelperClasses_TestOpenFutureBoostArchive;

#include <cxxtest/Root.cpp>
