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
#include "global/test/TestDistributedVector.hpp"

static TestDistributedVector suite_TestDistributedVector;

static CxxTest::List Tests_TestDistributedVector = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDistributedVector( "global/test/TestDistributedVector.hpp", 57, "TestDistributedVector", suite_TestDistributedVector, Tests_TestDistributedVector );

static class TestDescription_TestDistributedVector_TestDistributedVectorFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestDistributedVectorFactory() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 61, "TestDistributedVectorFactory" ) {}
 void runTest() { suite_TestDistributedVector.TestDistributedVectorFactory(); }
} testDescription_TestDistributedVector_TestDistributedVectorFactory;

static class TestDescription_TestDistributedVector_TestFactorySetFromFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestFactorySetFromFactory() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 130, "TestFactorySetFromFactory" ) {}
 void runTest() { suite_TestDistributedVector.TestFactorySetFromFactory(); }
} testDescription_TestDistributedVector_TestFactorySetFromFactory;

static class TestDescription_TestDistributedVector_TestRead : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestRead() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 162, "TestRead" ) {}
 void runTest() { suite_TestDistributedVector.TestRead(); }
} testDescription_TestDistributedVector_TestRead;

static class TestDescription_TestDistributedVector_TestWrite : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestWrite() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 245, "TestWrite" ) {}
 void runTest() { suite_TestDistributedVector.TestWrite(); }
} testDescription_TestDistributedVector_TestWrite;

static class TestDescription_TestDistributedVector_TestException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestException() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 332, "TestException" ) {}
 void runTest() { suite_TestDistributedVector.TestException(); }
} testDescription_TestDistributedVector_TestException;

static class TestDescription_TestDistributedVector_TestUnevenDistribution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestUnevenDistribution() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 337, "TestUnevenDistribution" ) {}
 void runTest() { suite_TestDistributedVector.TestUnevenDistribution(); }
} testDescription_TestDistributedVector_TestUnevenDistribution;

static class TestDescription_TestDistributedVector_TestReadOnlyDistributedVector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestReadOnlyDistributedVector() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 367, "TestReadOnlyDistributedVector" ) {}
 void runTest() { suite_TestDistributedVector.TestReadOnlyDistributedVector(); }
} testDescription_TestDistributedVector_TestReadOnlyDistributedVector;

static class TestDescription_TestDistributedVector_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDistributedVector_TestArchiving() : CxxTest::RealTestDescription( Tests_TestDistributedVector, suiteDescription_TestDistributedVector, 405, "TestArchiving" ) {}
 void runTest() { suite_TestDistributedVector.TestArchiving(); }
} testDescription_TestDistributedVector_TestArchiving;

#include <cxxtest/Root.cpp>
