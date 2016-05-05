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
#include "cell_based/test/population/TestBuskeForces.hpp"

static TestBuskeForces suite_TestBuskeForces;

static CxxTest::List Tests_TestBuskeForces = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBuskeForces( "cell_based/test/population/TestBuskeForces.hpp", 57, "TestBuskeForces", suite_TestBuskeForces, Tests_TestBuskeForces );

static class TestDescription_TestBuskeForces_TestBuskeAdhesiveForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeAdhesiveForceMethods() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 61, "TestBuskeAdhesiveForceMethods" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeAdhesiveForceMethods(); }
} testDescription_TestBuskeForces_TestBuskeAdhesiveForceMethods;

static class TestDescription_TestBuskeForces_TestBuskeElasticForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeElasticForceMethods() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 134, "TestBuskeElasticForceMethods" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeElasticForceMethods(); }
} testDescription_TestBuskeForces_TestBuskeElasticForceMethods;

static class TestDescription_TestBuskeForces_TestBuskeMixedForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeMixedForceMethods() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 208, "TestBuskeMixedForceMethods" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeMixedForceMethods(); }
} testDescription_TestBuskeForces_TestBuskeMixedForceMethods;

static class TestDescription_TestBuskeForces_TestBuskeCompressionForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeCompressionForceMethods() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 270, "TestBuskeCompressionForceMethods" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeCompressionForceMethods(); }
} testDescription_TestBuskeForces_TestBuskeCompressionForceMethods;

static class TestDescription_TestBuskeForces_TestBuskeCompressionForceWithMultipleCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeCompressionForceWithMultipleCells() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 336, "TestBuskeCompressionForceWithMultipleCells" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeCompressionForceWithMultipleCells(); }
} testDescription_TestBuskeForces_TestBuskeCompressionForceWithMultipleCells;

static class TestDescription_TestBuskeForces_TestForceOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestForceOutputParameters() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 399, "TestForceOutputParameters" ) {}
 void runTest() { suite_TestBuskeForces.TestForceOutputParameters(); }
} testDescription_TestBuskeForces_TestForceOutputParameters;

static class TestDescription_TestBuskeForces_TestBuskeAdhesiveForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeAdhesiveForceArchiving() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 447, "TestBuskeAdhesiveForceArchiving" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeAdhesiveForceArchiving(); }
} testDescription_TestBuskeForces_TestBuskeAdhesiveForceArchiving;

static class TestDescription_TestBuskeForces_TestBuskeElasticForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeElasticForceArchiving() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 489, "TestBuskeElasticForceArchiving" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeElasticForceArchiving(); }
} testDescription_TestBuskeForces_TestBuskeElasticForceArchiving;

static class TestDescription_TestBuskeForces_TestBuskeCompressionForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBuskeForces_TestBuskeCompressionForceArchiving() : CxxTest::RealTestDescription( Tests_TestBuskeForces, suiteDescription_TestBuskeForces, 531, "TestBuskeCompressionForceArchiving" ) {}
 void runTest() { suite_TestBuskeForces.TestBuskeCompressionForceArchiving(); }
} testDescription_TestBuskeForces_TestBuskeCompressionForceArchiving;

#include <cxxtest/Root.cpp>
