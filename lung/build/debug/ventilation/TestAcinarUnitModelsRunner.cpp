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
#include "lung/test/ventilation/TestAcinarUnitModels.hpp"

static TestAcinarUnitModels suite_TestAcinarUnitModels;

static CxxTest::List Tests_TestAcinarUnitModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAcinarUnitModels( "lung/test/ventilation/TestAcinarUnitModels.hpp", 94, "TestAcinarUnitModels", suite_TestAcinarUnitModels, Tests_TestAcinarUnitModels );

static class TestDescription_TestAcinarUnitModels_TestSimpleBalloonAcinarUnitInspiration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAcinarUnitModels_TestSimpleBalloonAcinarUnitInspiration() : CxxTest::RealTestDescription( Tests_TestAcinarUnitModels, suiteDescription_TestAcinarUnitModels, 98, "TestSimpleBalloonAcinarUnitInspiration" ) {}
 void runTest() { suite_TestAcinarUnitModels.TestSimpleBalloonAcinarUnitInspiration(); }
} testDescription_TestAcinarUnitModels_TestSimpleBalloonAcinarUnitInspiration;

static class TestDescription_TestAcinarUnitModels_TestSimpleBalloonExplicitAcinarUnitInspiration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAcinarUnitModels_TestSimpleBalloonExplicitAcinarUnitInspiration() : CxxTest::RealTestDescription( Tests_TestAcinarUnitModels, suiteDescription_TestAcinarUnitModels, 160, "TestSimpleBalloonExplicitAcinarUnitInspiration" ) {}
 void runTest() { suite_TestAcinarUnitModels.TestSimpleBalloonExplicitAcinarUnitInspiration(); }
} testDescription_TestAcinarUnitModels_TestSimpleBalloonExplicitAcinarUnitInspiration;

static class TestDescription_TestAcinarUnitModels_TestSigmoidalAcinarUnitInspiration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAcinarUnitModels_TestSigmoidalAcinarUnitInspiration() : CxxTest::RealTestDescription( Tests_TestAcinarUnitModels, suiteDescription_TestAcinarUnitModels, 223, "TestSigmoidalAcinarUnitInspiration" ) {}
 void runTest() { suite_TestAcinarUnitModels.TestSigmoidalAcinarUnitInspiration(); }
} testDescription_TestAcinarUnitModels_TestSigmoidalAcinarUnitInspiration;

static class TestDescription_TestAcinarUnitModels_TestSwan2012AcinarUnitCalculateMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAcinarUnitModels_TestSwan2012AcinarUnitCalculateMethods() : CxxTest::RealTestDescription( Tests_TestAcinarUnitModels, suiteDescription_TestAcinarUnitModels, 282, "TestSwan2012AcinarUnitCalculateMethods" ) {}
 void runTest() { suite_TestAcinarUnitModels.TestSwan2012AcinarUnitCalculateMethods(); }
} testDescription_TestAcinarUnitModels_TestSwan2012AcinarUnitCalculateMethods;

static class TestDescription_TestAcinarUnitModels_TestSwan2012AcinarUnitInspiration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAcinarUnitModels_TestSwan2012AcinarUnitInspiration() : CxxTest::RealTestDescription( Tests_TestAcinarUnitModels, suiteDescription_TestAcinarUnitModels, 323, "TestSwan2012AcinarUnitInspiration" ) {}
 void runTest() { suite_TestAcinarUnitModels.TestSwan2012AcinarUnitInspiration(); }
} testDescription_TestAcinarUnitModels_TestSwan2012AcinarUnitInspiration;

#include <cxxtest/Root.cpp>
