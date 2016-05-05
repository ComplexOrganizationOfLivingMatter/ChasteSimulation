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
#include "cell_based/test/odes/TestTysonNovak2001OdeSystem.hpp"

static TestTysonNovak2001OdeSystem suite_TestTysonNovak2001OdeSystem;

static CxxTest::List Tests_TestTysonNovak2001OdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTysonNovak2001OdeSystem( "cell_based/test/odes/TestTysonNovak2001OdeSystem.hpp", 57, "TestTysonNovak2001OdeSystem", suite_TestTysonNovak2001OdeSystem, Tests_TestTysonNovak2001OdeSystem );

static class TestDescription_TestTysonNovak2001OdeSystem_TestTysonNovakEquation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTysonNovak2001OdeSystem_TestTysonNovakEquation() : CxxTest::RealTestDescription( Tests_TestTysonNovak2001OdeSystem, suiteDescription_TestTysonNovak2001OdeSystem, 61, "TestTysonNovakEquation" ) {}
 void runTest() { suite_TestTysonNovak2001OdeSystem.TestTysonNovakEquation(); }
} testDescription_TestTysonNovak2001OdeSystem_TestTysonNovakEquation;

static class TestDescription_TestTysonNovak2001OdeSystem_TestTysonNovakSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTysonNovak2001OdeSystem_TestTysonNovakSolver() : CxxTest::RealTestDescription( Tests_TestTysonNovak2001OdeSystem, suiteDescription_TestTysonNovak2001OdeSystem, 87, "TestTysonNovakSolver" ) {}
 void runTest() { suite_TestTysonNovak2001OdeSystem.TestTysonNovakSolver(); }
} testDescription_TestTysonNovak2001OdeSystem_TestTysonNovakSolver;

static class TestDescription_TestTysonNovak2001OdeSystem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTysonNovak2001OdeSystem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestTysonNovak2001OdeSystem, suiteDescription_TestTysonNovak2001OdeSystem, 163, "TestArchiving" ) {}
 void runTest() { suite_TestTysonNovak2001OdeSystem.TestArchiving(); }
} testDescription_TestTysonNovak2001OdeSystem_TestArchiving;

#include <cxxtest/Root.cpp>
