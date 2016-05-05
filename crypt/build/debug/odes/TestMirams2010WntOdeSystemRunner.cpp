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
#include "crypt/test/odes/TestMirams2010WntOdeSystem.hpp"

static TestMirams2010WntOdeSystem suite_TestMirams2010WntOdeSystem;

static CxxTest::List Tests_TestMirams2010WntOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMirams2010WntOdeSystem( "crypt/test/odes/TestMirams2010WntOdeSystem.hpp", 58, "TestMirams2010WntOdeSystem", suite_TestMirams2010WntOdeSystem, Tests_TestMirams2010WntOdeSystem );

static class TestDescription_TestMirams2010WntOdeSystem_TestMirams2010WntOdeSystemSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMirams2010WntOdeSystem_TestMirams2010WntOdeSystemSetup() : CxxTest::RealTestDescription( Tests_TestMirams2010WntOdeSystem, suiteDescription_TestMirams2010WntOdeSystem, 62, "TestMirams2010WntOdeSystemSetup" ) {}
 void runTest() { suite_TestMirams2010WntOdeSystem.TestMirams2010WntOdeSystemSetup(); }
} testDescription_TestMirams2010WntOdeSystem_TestMirams2010WntOdeSystemSetup;

static class TestDescription_TestMirams2010WntOdeSystem_TestGarysWntOdeSystemApc2Hit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMirams2010WntOdeSystem_TestGarysWntOdeSystemApc2Hit() : CxxTest::RealTestDescription( Tests_TestMirams2010WntOdeSystem, suiteDescription_TestMirams2010WntOdeSystem, 98, "TestGarysWntOdeSystemApc2Hit" ) {}
 void runTest() { suite_TestMirams2010WntOdeSystem.TestGarysWntOdeSystemApc2Hit(); }
} testDescription_TestMirams2010WntOdeSystem_TestGarysWntOdeSystemApc2Hit;

static class TestDescription_TestMirams2010WntOdeSystem_TestGarysWntOdeSystemBetaCatenin1Hit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMirams2010WntOdeSystem_TestGarysWntOdeSystemBetaCatenin1Hit() : CxxTest::RealTestDescription( Tests_TestMirams2010WntOdeSystem, suiteDescription_TestMirams2010WntOdeSystem, 132, "TestGarysWntOdeSystemBetaCatenin1Hit" ) {}
 void runTest() { suite_TestMirams2010WntOdeSystem.TestGarysWntOdeSystemBetaCatenin1Hit(); }
} testDescription_TestMirams2010WntOdeSystem_TestGarysWntOdeSystemBetaCatenin1Hit;

static class TestDescription_TestMirams2010WntOdeSystem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMirams2010WntOdeSystem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestMirams2010WntOdeSystem, suiteDescription_TestMirams2010WntOdeSystem, 166, "TestArchiving" ) {}
 void runTest() { suite_TestMirams2010WntOdeSystem.TestArchiving(); }
} testDescription_TestMirams2010WntOdeSystem_TestArchiving;

#include <cxxtest/Root.cpp>
