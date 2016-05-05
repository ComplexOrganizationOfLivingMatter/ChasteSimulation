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
#include "cell_based/test/population/TestDiscreteSystemForceCalculator.hpp"

static TestDiscreteSystemForceCalculator suite_TestDiscreteSystemForceCalculator;

static CxxTest::List Tests_TestDiscreteSystemForceCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDiscreteSystemForceCalculator( "cell_based/test/population/TestDiscreteSystemForceCalculator.hpp", 55, "TestDiscreteSystemForceCalculator", suite_TestDiscreteSystemForceCalculator, Tests_TestDiscreteSystemForceCalculator );

static class TestDescription_TestDiscreteSystemForceCalculator_TestPrivateMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDiscreteSystemForceCalculator_TestPrivateMethods() : CxxTest::RealTestDescription( Tests_TestDiscreteSystemForceCalculator, suiteDescription_TestDiscreteSystemForceCalculator, 59, "TestPrivateMethods" ) {}
 void runTest() { suite_TestDiscreteSystemForceCalculator.TestPrivateMethods(); }
} testDescription_TestDiscreteSystemForceCalculator_TestPrivateMethods;

static class TestDescription_TestDiscreteSystemForceCalculator_TestCalculateExtremalNormalForces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDiscreteSystemForceCalculator_TestCalculateExtremalNormalForces() : CxxTest::RealTestDescription( Tests_TestDiscreteSystemForceCalculator, suiteDescription_TestDiscreteSystemForceCalculator, 149, "TestCalculateExtremalNormalForces" ) {}
 void runTest() { suite_TestDiscreteSystemForceCalculator.TestCalculateExtremalNormalForces(); }
} testDescription_TestDiscreteSystemForceCalculator_TestCalculateExtremalNormalForces;

static class TestDescription_TestDiscreteSystemForceCalculator_TestCalculateWriteResultsToFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDiscreteSystemForceCalculator_TestCalculateWriteResultsToFile() : CxxTest::RealTestDescription( Tests_TestDiscreteSystemForceCalculator, suiteDescription_TestDiscreteSystemForceCalculator, 215, "TestCalculateWriteResultsToFile" ) {}
 void runTest() { suite_TestDiscreteSystemForceCalculator.TestCalculateWriteResultsToFile(); }
} testDescription_TestDiscreteSystemForceCalculator_TestCalculateWriteResultsToFile;

#include <cxxtest/Root.cpp>
