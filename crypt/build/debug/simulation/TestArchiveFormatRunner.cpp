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
#include "crypt/test/simulation/TestArchiveFormat.hpp"

static TestArchiveFormat suite_TestArchiveFormat;

static CxxTest::List Tests_TestArchiveFormat = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestArchiveFormat( "crypt/test/simulation/TestArchiveFormat.hpp", 60, "TestArchiveFormat", suite_TestArchiveFormat, Tests_TestArchiveFormat );

static class TestDescription_TestArchiveFormat_TestLoadArchive : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiveFormat_TestLoadArchive() : CxxTest::RealTestDescription( Tests_TestArchiveFormat, suiteDescription_TestArchiveFormat, 87, "TestLoadArchive" ) {}
 void runTest() { suite_TestArchiveFormat.TestLoadArchive(); }
} testDescription_TestArchiveFormat_TestLoadArchive;

#include <cxxtest/Root.cpp>
