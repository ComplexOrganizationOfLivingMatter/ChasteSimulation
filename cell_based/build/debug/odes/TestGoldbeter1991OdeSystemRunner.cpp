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
#include "cell_based/test/odes/TestGoldbeter1991OdeSystem.hpp"

static TestGoldbeter1991OdeSystem suite_TestGoldbeter1991OdeSystem;

static CxxTest::List Tests_TestGoldbeter1991OdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGoldbeter1991OdeSystem( "cell_based/test/odes/TestGoldbeter1991OdeSystem.hpp", 70, "TestGoldbeter1991OdeSystem", suite_TestGoldbeter1991OdeSystem, Tests_TestGoldbeter1991OdeSystem );

static class TestDescription_TestGoldbeter1991OdeSystem_TestGoldbeter1991Equation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGoldbeter1991OdeSystem_TestGoldbeter1991Equation() : CxxTest::RealTestDescription( Tests_TestGoldbeter1991OdeSystem, suiteDescription_TestGoldbeter1991OdeSystem, 74, "TestGoldbeter1991Equation" ) {}
 void runTest() { suite_TestGoldbeter1991OdeSystem.TestGoldbeter1991Equation(); }
} testDescription_TestGoldbeter1991OdeSystem_TestGoldbeter1991Equation;

static class TestDescription_TestGoldbeter1991OdeSystem_TestGoldbeter1991OSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGoldbeter1991OdeSystem_TestGoldbeter1991OSolver() : CxxTest::RealTestDescription( Tests_TestGoldbeter1991OdeSystem, suiteDescription_TestGoldbeter1991OdeSystem, 94, "TestGoldbeter1991OSolver" ) {}
 void runTest() { suite_TestGoldbeter1991OdeSystem.TestGoldbeter1991OSolver(); }
} testDescription_TestGoldbeter1991OdeSystem_TestGoldbeter1991OSolver;

static class TestDescription_TestGoldbeter1991OdeSystem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGoldbeter1991OdeSystem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestGoldbeter1991OdeSystem, suiteDescription_TestGoldbeter1991OdeSystem, 129, "TestArchiving" ) {}
 void runTest() { suite_TestGoldbeter1991OdeSystem.TestArchiving(); }
} testDescription_TestGoldbeter1991OdeSystem_TestArchiving;

#include <cxxtest/Root.cpp>
