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
#include "ode/test/TestSolvingOdesTutorial.hpp"

static TestSolvingOdesTutorial suite_TestSolvingOdesTutorial;

static CxxTest::List Tests_TestSolvingOdesTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSolvingOdesTutorial( "ode/test/TestSolvingOdesTutorial.hpp", 221, "TestSolvingOdesTutorial", suite_TestSolvingOdesTutorial, Tests_TestSolvingOdesTutorial );

static class TestDescription_TestSolvingOdesTutorial_TestSolvingOdes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingOdesTutorial_TestSolvingOdes() : CxxTest::RealTestDescription( Tests_TestSolvingOdesTutorial, suiteDescription_TestSolvingOdesTutorial, 224, "TestSolvingOdes" ) {}
 void runTest() { suite_TestSolvingOdesTutorial.TestSolvingOdes(); }
} testDescription_TestSolvingOdesTutorial_TestSolvingOdes;

static class TestDescription_TestSolvingOdesTutorial_TestOdeSolvingUsingStateVariable : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingOdesTutorial_TestOdeSolvingUsingStateVariable() : CxxTest::RealTestDescription( Tests_TestSolvingOdesTutorial, suiteDescription_TestSolvingOdesTutorial, 287, "TestOdeSolvingUsingStateVariable" ) {}
 void runTest() { suite_TestSolvingOdesTutorial.TestOdeSolvingUsingStateVariable(); }
} testDescription_TestSolvingOdesTutorial_TestOdeSolvingUsingStateVariable;

static class TestDescription_TestSolvingOdesTutorial_TestWith2dOde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolvingOdesTutorial_TestWith2dOde() : CxxTest::RealTestDescription( Tests_TestSolvingOdesTutorial, suiteDescription_TestSolvingOdesTutorial, 311, "TestWith2dOde" ) {}
 void runTest() { suite_TestSolvingOdesTutorial.TestWith2dOde(); }
} testDescription_TestSolvingOdesTutorial_TestWith2dOde;

#include <cxxtest/Root.cpp>
