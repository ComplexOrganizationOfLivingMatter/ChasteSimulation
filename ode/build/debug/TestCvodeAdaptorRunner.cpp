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
#include "ode/test/TestCvodeAdaptor.hpp"

static TestCvodeAdaptor suite_TestCvodeAdaptor;

static CxxTest::List Tests_TestCvodeAdaptor = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCvodeAdaptor( "ode/test/TestCvodeAdaptor.hpp", 106, "TestCvodeAdaptor", suite_TestCvodeAdaptor, Tests_TestCvodeAdaptor );

static class TestDescription_TestCvodeAdaptor_TestBasics : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestBasics() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 153, "TestBasics" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestBasics(); }
} testDescription_TestCvodeAdaptor_TestBasics;

static class TestDescription_TestCvodeAdaptor_TestOnOde1 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestOnOde1() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 172, "TestOnOde1" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestOnOde1(); }
} testDescription_TestCvodeAdaptor_TestOnOde1;

static class TestDescription_TestCvodeAdaptor_TestGlobalError : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestGlobalError() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 185, "TestGlobalError" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestGlobalError(); }
} testDescription_TestCvodeAdaptor_TestGlobalError;

static class TestDescription_TestCvodeAdaptor_TestMultipleCalls : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestMultipleCalls() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 214, "TestMultipleCalls" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestMultipleCalls(); }
} testDescription_TestCvodeAdaptor_TestMultipleCalls;

static class TestDescription_TestCvodeAdaptor_TestGlobalErrorSystemOf2Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestGlobalErrorSystemOf2Equations() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 283, "TestGlobalErrorSystemOf2Equations" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestGlobalErrorSystemOf2Equations(); }
} testDescription_TestCvodeAdaptor_TestGlobalErrorSystemOf2Equations;

static class TestDescription_TestCvodeAdaptor_TestWithStoppingEvent : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestWithStoppingEvent() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 314, "TestWithStoppingEvent" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestWithStoppingEvent(); }
} testDescription_TestCvodeAdaptor_TestWithStoppingEvent;

static class TestDescription_TestCvodeAdaptor_TestWithRootFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestWithRootFunction() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 369, "TestWithRootFunction" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestWithRootFunction(); }
} testDescription_TestCvodeAdaptor_TestWithRootFunction;

static class TestDescription_TestCvodeAdaptor_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestExceptions() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 416, "TestExceptions" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestExceptions(); }
} testDescription_TestCvodeAdaptor_TestExceptions;

static class TestDescription_TestCvodeAdaptor_TestArchivingCvodeAdaptorSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeAdaptor_TestArchivingCvodeAdaptorSolver() : CxxTest::RealTestDescription( Tests_TestCvodeAdaptor, suiteDescription_TestCvodeAdaptor, 450, "TestArchivingCvodeAdaptorSolver" ) {}
 void runTest() { suite_TestCvodeAdaptor.TestArchivingCvodeAdaptorSolver(); }
} testDescription_TestCvodeAdaptor_TestArchivingCvodeAdaptorSolver;

#include <cxxtest/Root.cpp>
