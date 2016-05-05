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
#include "global/test/TestObjectCommunicator.hpp"

static TestObjectCommunicator suite_TestObjectCommunicator;

static CxxTest::List Tests_TestObjectCommunicator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestObjectCommunicator( "global/test/TestObjectCommunicator.hpp", 51, "TestObjectCommunicator", suite_TestObjectCommunicator, Tests_TestObjectCommunicator );

static class TestDescription_TestObjectCommunicator_TestSendingClass : public CxxTest::RealTestDescription {
public:
 TestDescription_TestObjectCommunicator_TestSendingClass() : CxxTest::RealTestDescription( Tests_TestObjectCommunicator, suiteDescription_TestObjectCommunicator, 56, "TestSendingClass" ) {}
 void runTest() { suite_TestObjectCommunicator.TestSendingClass(); }
} testDescription_TestObjectCommunicator_TestSendingClass;

static class TestDescription_TestObjectCommunicator_TestNonBlockingSendingClass : public CxxTest::RealTestDescription {
public:
 TestDescription_TestObjectCommunicator_TestNonBlockingSendingClass() : CxxTest::RealTestDescription( Tests_TestObjectCommunicator, suiteDescription_TestObjectCommunicator, 106, "TestNonBlockingSendingClass" ) {}
 void runTest() { suite_TestObjectCommunicator.TestNonBlockingSendingClass(); }
} testDescription_TestObjectCommunicator_TestNonBlockingSendingClass;

static class TestDescription_TestObjectCommunicator_TestNonBlockingRecvClass : public CxxTest::RealTestDescription {
public:
 TestDescription_TestObjectCommunicator_TestNonBlockingRecvClass() : CxxTest::RealTestDescription( Tests_TestObjectCommunicator, suiteDescription_TestObjectCommunicator, 164, "TestNonBlockingRecvClass" ) {}
 void runTest() { suite_TestObjectCommunicator.TestNonBlockingRecvClass(); }
} testDescription_TestObjectCommunicator_TestNonBlockingRecvClass;

static class TestDescription_TestObjectCommunicator_TestSendRecv : public CxxTest::RealTestDescription {
public:
 TestDescription_TestObjectCommunicator_TestSendRecv() : CxxTest::RealTestDescription( Tests_TestObjectCommunicator, suiteDescription_TestObjectCommunicator, 218, "TestSendRecv" ) {}
 void runTest() { suite_TestObjectCommunicator.TestSendRecv(); }
} testDescription_TestObjectCommunicator_TestSendRecv;

#include <cxxtest/Root.cpp>
