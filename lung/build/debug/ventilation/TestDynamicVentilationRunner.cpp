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
#include "lung/test/ventilation/TestDynamicVentilation.hpp"

static TestDynamicVentilation suite_TestDynamicVentilation;

static CxxTest::List Tests_TestDynamicVentilation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDynamicVentilation( "lung/test/ventilation/TestDynamicVentilation.hpp", 93, "TestDynamicVentilation", suite_TestDynamicVentilation, Tests_TestDynamicVentilation );

static class TestDescription_TestDynamicVentilation_TestColemanDynamicVentilationSingleAirway : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicVentilation_TestColemanDynamicVentilationSingleAirway() : CxxTest::RealTestDescription( Tests_TestDynamicVentilation, suiteDescription_TestDynamicVentilation, 97, "TestColemanDynamicVentilationSingleAirway" ) {}
 void runTest() { suite_TestDynamicVentilation.TestColemanDynamicVentilationSingleAirway(); }
} testDescription_TestDynamicVentilation_TestColemanDynamicVentilationSingleAirway;

static class TestDescription_TestDynamicVentilation_TestColemanDynamicVentilationThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicVentilation_TestColemanDynamicVentilationThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestDynamicVentilation, suiteDescription_TestDynamicVentilation, 142, "TestColemanDynamicVentilationThreeBifurcations" ) {}
 void runTest() { suite_TestDynamicVentilation.TestColemanDynamicVentilationThreeBifurcations(); }
} testDescription_TestDynamicVentilation_TestColemanDynamicVentilationThreeBifurcations;

static class TestDescription_TestDynamicVentilation_TestColemanDynamicVentilationOtisBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicVentilation_TestColemanDynamicVentilationOtisBifurcations() : CxxTest::RealTestDescription( Tests_TestDynamicVentilation, suiteDescription_TestDynamicVentilation, 207, "TestColemanDynamicVentilationOtisBifurcations" ) {}
 void runTest() { suite_TestDynamicVentilation.TestColemanDynamicVentilationOtisBifurcations(); }
} testDescription_TestDynamicVentilation_TestColemanDynamicVentilationOtisBifurcations;

static class TestDescription_TestDynamicVentilation_TestColemanVsExplicitWithPedley : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicVentilation_TestColemanVsExplicitWithPedley() : CxxTest::RealTestDescription( Tests_TestDynamicVentilation, suiteDescription_TestDynamicVentilation, 291, "TestColemanVsExplicitWithPedley" ) {}
 void runTest() { suite_TestDynamicVentilation.TestColemanVsExplicitWithPedley(); }
} testDescription_TestDynamicVentilation_TestColemanVsExplicitWithPedley;

#include <cxxtest/Root.cpp>
