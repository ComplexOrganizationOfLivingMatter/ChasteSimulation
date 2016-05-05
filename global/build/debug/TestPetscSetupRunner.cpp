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
#include "global/test/TestPetscSetup.hpp"

static TestPetscSetup suite_TestPetscSetup;

static CxxTest::List Tests_TestPetscSetup = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPetscSetup( "global/test/TestPetscSetup.hpp", 49, "TestPetscSetup", suite_TestPetscSetup, Tests_TestPetscSetup );

static class TestDescription_TestPetscSetup_TestPetscIsThere : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscSetup_TestPetscIsThere() : CxxTest::RealTestDescription( Tests_TestPetscSetup, suiteDescription_TestPetscSetup, 53, "TestPetscIsThere" ) {}
 void runTest() { suite_TestPetscSetup.TestPetscIsThere(); }
} testDescription_TestPetscSetup_TestPetscIsThere;

static class TestDescription_TestPetscSetup_TestPetscExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscSetup_TestPetscExceptions() : CxxTest::RealTestDescription( Tests_TestPetscSetup, suiteDescription_TestPetscSetup, 60, "TestPetscExceptions" ) {}
 void runTest() { suite_TestPetscSetup.TestPetscExceptions(); }
} testDescription_TestPetscSetup_TestPetscExceptions;

static class TestDescription_TestPetscSetup_TestKspExceptionsForCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscSetup_TestKspExceptionsForCoverage() : CxxTest::RealTestDescription( Tests_TestPetscSetup, suiteDescription_TestPetscSetup, 91, "TestKspExceptionsForCoverage" ) {}
 void runTest() { suite_TestPetscSetup.TestKspExceptionsForCoverage(); }
} testDescription_TestPetscSetup_TestKspExceptionsForCoverage;

static class TestDescription_TestPetscSetup_TestDivideOneByZero : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscSetup_TestDivideOneByZero() : CxxTest::RealTestDescription( Tests_TestPetscSetup, suiteDescription_TestPetscSetup, 115, "TestDivideOneByZero" ) {}
 void runTest() { suite_TestPetscSetup.TestDivideOneByZero(); }
} testDescription_TestPetscSetup_TestDivideOneByZero;

static class TestDescription_TestPetscSetup_TestDivideZeroByZero : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscSetup_TestDivideZeroByZero() : CxxTest::RealTestDescription( Tests_TestPetscSetup, suiteDescription_TestPetscSetup, 134, "TestDivideZeroByZero" ) {}
 void runTest() { suite_TestPetscSetup.TestDivideZeroByZero(); }
} testDescription_TestPetscSetup_TestDivideZeroByZero;

#include <cxxtest/Root.cpp>
