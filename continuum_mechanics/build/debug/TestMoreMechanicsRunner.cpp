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
#include "continuum_mechanics/test/TestMoreMechanics.hpp"

static TestMoreMechanics suite_TestMoreMechanics;

static CxxTest::List Tests_TestMoreMechanics = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMoreMechanics( "continuum_mechanics/test/TestMoreMechanics.hpp", 338, "TestMoreMechanics", suite_TestMoreMechanics, Tests_TestMoreMechanics );

static class TestDescription_TestMoreMechanics_TestBarPressureOnUnderside : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMoreMechanics_TestBarPressureOnUnderside() : CxxTest::RealTestDescription( Tests_TestMoreMechanics, suiteDescription_TestMoreMechanics, 341, "TestBarPressureOnUnderside" ) {}
 void runTest() { suite_TestMoreMechanics.TestBarPressureOnUnderside(); }
} testDescription_TestMoreMechanics_TestBarPressureOnUnderside;

static class TestDescription_TestMoreMechanics_TestBarPressureOnUndersideCompressible : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMoreMechanics_TestBarPressureOnUndersideCompressible() : CxxTest::RealTestDescription( Tests_TestMoreMechanics, suiteDescription_TestMoreMechanics, 382, "TestBarPressureOnUndersideCompressible" ) {}
 void runTest() { suite_TestMoreMechanics.TestBarPressureOnUndersideCompressible(); }
} testDescription_TestMoreMechanics_TestBarPressureOnUndersideCompressible;

#include <cxxtest/Root.cpp>
