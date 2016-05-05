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
#include "crypt/test/mechanics/TestCryptProjectionForce.hpp"

static TestCryptProjectionForce suite_TestCryptProjectionForce;

static CxxTest::List Tests_TestCryptProjectionForce = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCryptProjectionForce( "crypt/test/mechanics/TestCryptProjectionForce.hpp", 65, "TestCryptProjectionForce", suite_TestCryptProjectionForce, Tests_TestCryptProjectionForce );

static class TestDescription_TestCryptProjectionForce_TestCryptProjectionForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptProjectionForce_TestCryptProjectionForceMethods() : CxxTest::RealTestDescription( Tests_TestCryptProjectionForce, suiteDescription_TestCryptProjectionForce, 69, "TestCryptProjectionForceMethods" ) {}
 void runTest() { suite_TestCryptProjectionForce.TestCryptProjectionForceMethods(); }
} testDescription_TestCryptProjectionForce_TestCryptProjectionForceMethods;

static class TestDescription_TestCryptProjectionForce_TestCryptProjectionForceWithWntBasedChemotaxis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptProjectionForce_TestCryptProjectionForceWithWntBasedChemotaxis() : CxxTest::RealTestDescription( Tests_TestCryptProjectionForce, suiteDescription_TestCryptProjectionForce, 246, "TestCryptProjectionForceWithWntBasedChemotaxis" ) {}
 void runTest() { suite_TestCryptProjectionForce.TestCryptProjectionForceWithWntBasedChemotaxis(); }
} testDescription_TestCryptProjectionForce_TestCryptProjectionForceWithWntBasedChemotaxis;

static class TestDescription_TestCryptProjectionForce_TestCryptProjectionForceWithArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptProjectionForce_TestCryptProjectionForceWithArchiving() : CxxTest::RealTestDescription( Tests_TestCryptProjectionForce, suiteDescription_TestCryptProjectionForce, 335, "TestCryptProjectionForceWithArchiving" ) {}
 void runTest() { suite_TestCryptProjectionForce.TestCryptProjectionForceWithArchiving(); }
} testDescription_TestCryptProjectionForce_TestCryptProjectionForceWithArchiving;

static class TestDescription_TestCryptProjectionForce_TestForceCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptProjectionForce_TestForceCollection() : CxxTest::RealTestDescription( Tests_TestCryptProjectionForce, suiteDescription_TestCryptProjectionForce, 463, "TestForceCollection" ) {}
 void runTest() { suite_TestCryptProjectionForce.TestForceCollection(); }
} testDescription_TestCryptProjectionForce_TestForceCollection;

static class TestDescription_TestCryptProjectionForce_TestForceOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptProjectionForce_TestForceOutputParameters() : CxxTest::RealTestDescription( Tests_TestCryptProjectionForce, suiteDescription_TestCryptProjectionForce, 533, "TestForceOutputParameters" ) {}
 void runTest() { suite_TestCryptProjectionForce.TestForceOutputParameters(); }
} testDescription_TestCryptProjectionForce_TestForceOutputParameters;

static class TestDescription_TestCryptProjectionForce_TestCryptProjectionForceWithNodeBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptProjectionForce_TestCryptProjectionForceWithNodeBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestCryptProjectionForce, suiteDescription_TestCryptProjectionForce, 551, "TestCryptProjectionForceWithNodeBasedCellPopulation" ) {}
 void runTest() { suite_TestCryptProjectionForce.TestCryptProjectionForceWithNodeBasedCellPopulation(); }
} testDescription_TestCryptProjectionForce_TestCryptProjectionForceWithNodeBasedCellPopulation;

#include <cxxtest/Root.cpp>
