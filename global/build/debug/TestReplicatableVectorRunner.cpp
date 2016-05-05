/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "global/test/TestReplicatableVector.hpp"

static TestReplicatableVector suite_TestReplicatableVector;

static CxxTest::List Tests_TestReplicatableVector = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestReplicatableVector( "global/test/TestReplicatableVector.hpp", 48, "TestReplicatableVector", suite_TestReplicatableVector, Tests_TestReplicatableVector );

static class TestDescription_TestReplicatableVector_TestBasics : public CxxTest::RealTestDescription {
public:
 TestDescription_TestReplicatableVector_TestBasics() : CxxTest::RealTestDescription( Tests_TestReplicatableVector, suiteDescription_TestReplicatableVector, 52, "TestBasics" ) {}
 void runTest() { suite_TestReplicatableVector.TestBasics(); }
} testDescription_TestReplicatableVector_TestBasics;

static class TestDescription_TestReplicatableVector_TestReplication : public CxxTest::RealTestDescription {
public:
 TestDescription_TestReplicatableVector_TestReplication() : CxxTest::RealTestDescription( Tests_TestReplicatableVector, suiteDescription_TestReplicatableVector, 66, "TestReplication" ) {}
 void runTest() { suite_TestReplicatableVector.TestReplication(); }
} testDescription_TestReplicatableVector_TestReplication;

static class TestDescription_TestReplicatableVector_TestPetscReplication : public CxxTest::RealTestDescription {
public:
 TestDescription_TestReplicatableVector_TestPetscReplication() : CxxTest::RealTestDescription( Tests_TestReplicatableVector, suiteDescription_TestReplicatableVector, 97, "TestPetscReplication" ) {}
 void runTest() { suite_TestReplicatableVector.TestPetscReplication(); }
} testDescription_TestReplicatableVector_TestPetscReplication;

static class TestDescription_TestReplicatableVector_TestPetscReplicationUsingAlternativeConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestReplicatableVector_TestPetscReplicationUsingAlternativeConstructor() : CxxTest::RealTestDescription( Tests_TestReplicatableVector, suiteDescription_TestReplicatableVector, 133, "TestPetscReplicationUsingAlternativeConstructor" ) {}
 void runTest() { suite_TestReplicatableVector.TestPetscReplicationUsingAlternativeConstructor(); }
} testDescription_TestReplicatableVector_TestPetscReplicationUsingAlternativeConstructor;

#include <cxxtest/Root.cpp>
