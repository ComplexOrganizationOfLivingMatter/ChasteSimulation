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
#include "ode/test/TestAbstractCvodeSystem.hpp"

static TestAbstractCvodeSystem suite_TestAbstractCvodeSystem;

static CxxTest::List Tests_TestAbstractCvodeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractCvodeSystem( "ode/test/TestAbstractCvodeSystem.hpp", 57, "TestAbstractCvodeSystem", suite_TestAbstractCvodeSystem, Tests_TestAbstractCvodeSystem );

static class TestDescription_TestAbstractCvodeSystem_TestOdeSystemOne : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestOdeSystemOne() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 61, "TestOdeSystemOne" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestOdeSystemOne(); }
} testDescription_TestAbstractCvodeSystem_TestOdeSystemOne;

static class TestDescription_TestAbstractCvodeSystem_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestExceptions() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 81, "TestExceptions" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestExceptions(); }
} testDescription_TestAbstractCvodeSystem_TestExceptions;

static class TestDescription_TestAbstractCvodeSystem_TestParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestParameters() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 106, "TestParameters" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestParameters(); }
} testDescription_TestAbstractCvodeSystem_TestParameters;

static class TestDescription_TestAbstractCvodeSystem_TestAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestAttributes() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 216, "TestAttributes" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestAttributes(); }
} testDescription_TestAbstractCvodeSystem_TestAttributes;

static class TestDescription_TestAbstractCvodeSystem_TestDerivedQuantities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestDerivedQuantities() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 237, "TestDerivedQuantities" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestDerivedQuantities(); }
} testDescription_TestAbstractCvodeSystem_TestDerivedQuantities;

static class TestDescription_TestAbstractCvodeSystem_TestDumpState : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestDumpState() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 309, "TestDumpState" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestDumpState(); }
} testDescription_TestAbstractCvodeSystem_TestDumpState;

static class TestDescription_TestAbstractCvodeSystem_TestSimpleSolveUsingCvode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestSimpleSolveUsingCvode() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 353, "TestSimpleSolveUsingCvode" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestSimpleSolveUsingCvode(); }
} testDescription_TestAbstractCvodeSystem_TestSimpleSolveUsingCvode;

static class TestDescription_TestAbstractCvodeSystem_TestSequentialSolveCalls : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestSequentialSolveCalls() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 389, "TestSequentialSolveCalls" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestSequentialSolveCalls(); }
} testDescription_TestAbstractCvodeSystem_TestSequentialSolveCalls;

static class TestDescription_TestAbstractCvodeSystem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractCvodeSystem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestAbstractCvodeSystem, suiteDescription_TestAbstractCvodeSystem, 456, "TestArchiving" ) {}
 void runTest() { suite_TestAbstractCvodeSystem.TestArchiving(); }
} testDescription_TestAbstractCvodeSystem_TestArchiving;

#include <cxxtest/Root.cpp>
