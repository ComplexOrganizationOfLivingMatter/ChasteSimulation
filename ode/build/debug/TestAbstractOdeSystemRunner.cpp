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
#include "ode/test/TestAbstractOdeSystem.hpp"

static TestAbstractOdeSystem suite_TestAbstractOdeSystem;

static CxxTest::List Tests_TestAbstractOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractOdeSystem( "ode/test/TestAbstractOdeSystem.hpp", 61, "TestAbstractOdeSystem", suite_TestAbstractOdeSystem, Tests_TestAbstractOdeSystem );

static class TestDescription_TestAbstractOdeSystem_TestOdeSystemOne : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestOdeSystemOne() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 65, "TestOdeSystemOne" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestOdeSystemOne(); }
} testDescription_TestAbstractOdeSystem_TestOdeSystemOne;

static class TestDescription_TestAbstractOdeSystem_TestOdeSystemTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestOdeSystemTwo() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 85, "TestOdeSystemTwo" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestOdeSystemTwo(); }
} testDescription_TestAbstractOdeSystem_TestOdeSystemTwo;

static class TestDescription_TestAbstractOdeSystem_TestOdeSystemThree : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestOdeSystemThree() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 93, "TestOdeSystemThree" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestOdeSystemThree(); }
} testDescription_TestAbstractOdeSystem_TestOdeSystemThree;

static class TestDescription_TestAbstractOdeSystem_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestExceptions() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 102, "TestExceptions" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestExceptions(); }
} testDescription_TestAbstractOdeSystem_TestExceptions;

static class TestDescription_TestAbstractOdeSystem_TestParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestParameters() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 117, "TestParameters" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestParameters(); }
} testDescription_TestAbstractOdeSystem_TestParameters;

static class TestDescription_TestAbstractOdeSystem_TestAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestAttributes() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 225, "TestAttributes" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestAttributes(); }
} testDescription_TestAbstractOdeSystem_TestAttributes;

static class TestDescription_TestAbstractOdeSystem_TestArchivingOfParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestArchivingOfParameters() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 243, "TestArchivingOfParameters" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestArchivingOfParameters(); }
} testDescription_TestAbstractOdeSystem_TestArchivingOfParameters;

static class TestDescription_TestAbstractOdeSystem_TestDerivedQuantities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestDerivedQuantities() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 333, "TestDerivedQuantities" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestDerivedQuantities(); }
} testDescription_TestAbstractOdeSystem_TestDerivedQuantities;

static class TestDescription_TestAbstractOdeSystem_TestSetGetFunctionsInAbstractOdeSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestSetGetFunctionsInAbstractOdeSystem() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 392, "TestSetGetFunctionsInAbstractOdeSystem" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestSetGetFunctionsInAbstractOdeSystem(); }
} testDescription_TestAbstractOdeSystem_TestSetGetFunctionsInAbstractOdeSystem;

static class TestDescription_TestAbstractOdeSystem_TestLoadAbstractOdeSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestLoadAbstractOdeSystem() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 448, "TestLoadAbstractOdeSystem" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestLoadAbstractOdeSystem(); }
} testDescription_TestAbstractOdeSystem_TestLoadAbstractOdeSystem;

static class TestDescription_TestAbstractOdeSystem_TestReadSpecificStateVariable : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestReadSpecificStateVariable() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 472, "TestReadSpecificStateVariable" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestReadSpecificStateVariable(); }
} testDescription_TestAbstractOdeSystem_TestReadSpecificStateVariable;

static class TestDescription_TestAbstractOdeSystem_TestDumpState : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestDumpState() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 490, "TestDumpState" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestDumpState(); }
} testDescription_TestAbstractOdeSystem_TestDumpState;

static class TestDescription_TestAbstractOdeSystem_TestAbstractOdeSystemForCoupledPdeSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractOdeSystem_TestAbstractOdeSystemForCoupledPdeSystem() : CxxTest::RealTestDescription( Tests_TestAbstractOdeSystem, suiteDescription_TestAbstractOdeSystem, 510, "TestAbstractOdeSystemForCoupledPdeSystem" ) {}
 void runTest() { suite_TestAbstractOdeSystem.TestAbstractOdeSystemForCoupledPdeSystem(); }
} testDescription_TestAbstractOdeSystem_TestAbstractOdeSystemForCoupledPdeSystem;

#include <cxxtest/Root.cpp>
