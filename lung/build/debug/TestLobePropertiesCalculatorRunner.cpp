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
#include "lung/test/TestLobePropertiesCalculator.hpp"

static TestLobePropertiesCalculator suite_TestLobePropertiesCalculator;

static CxxTest::List Tests_TestLobePropertiesCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLobePropertiesCalculator( "lung/test/TestLobePropertiesCalculator.hpp", 59, "TestLobePropertiesCalculator", suite_TestLobePropertiesCalculator, Tests_TestLobePropertiesCalculator );

static class TestDescription_TestLobePropertiesCalculator_TestVolumes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLobePropertiesCalculator_TestVolumes() : CxxTest::RealTestDescription( Tests_TestLobePropertiesCalculator, suiteDescription_TestLobePropertiesCalculator, 62, "TestVolumes" ) {}
 void runTest() { suite_TestLobePropertiesCalculator.TestVolumes(); }
} testDescription_TestLobePropertiesCalculator_TestVolumes;

static class TestDescription_TestLobePropertiesCalculator_TestRealVolumeFractions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLobePropertiesCalculator_TestRealVolumeFractions() : CxxTest::RealTestDescription( Tests_TestLobePropertiesCalculator, suiteDescription_TestLobePropertiesCalculator, 90, "TestRealVolumeFractions" ) {}
 void runTest() { suite_TestLobePropertiesCalculator.TestRealVolumeFractions(); }
} testDescription_TestLobePropertiesCalculator_TestRealVolumeFractions;

#include <cxxtest/Root.cpp>
