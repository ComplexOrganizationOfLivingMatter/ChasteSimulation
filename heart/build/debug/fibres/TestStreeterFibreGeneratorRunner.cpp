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
#include "heart/test/fibres/TestStreeterFibreGenerator.hpp"

static TestStreeterFibreGenerator suite_TestStreeterFibreGenerator;

static CxxTest::List Tests_TestStreeterFibreGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStreeterFibreGenerator( "heart/test/fibres/TestStreeterFibreGenerator.hpp", 52, "TestStreeterFibreGenerator", suite_TestStreeterFibreGenerator, Tests_TestStreeterFibreGenerator );

static class TestDescription_TestStreeterFibreGenerator_TestSimpleOrthotropic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStreeterFibreGenerator_TestSimpleOrthotropic() : CxxTest::RealTestDescription( Tests_TestStreeterFibreGenerator, suiteDescription_TestStreeterFibreGenerator, 113, "TestSimpleOrthotropic" ) {}
 void runTest() { suite_TestStreeterFibreGenerator.TestSimpleOrthotropic(); }
} testDescription_TestStreeterFibreGenerator_TestSimpleOrthotropic;

static class TestDescription_TestStreeterFibreGenerator_TestSimpleOrthotropicNotDistributed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStreeterFibreGenerator_TestSimpleOrthotropicNotDistributed() : CxxTest::RealTestDescription( Tests_TestStreeterFibreGenerator, suiteDescription_TestStreeterFibreGenerator, 143, "TestSimpleOrthotropicNotDistributed" ) {}
 void runTest() { suite_TestStreeterFibreGenerator.TestSimpleOrthotropicNotDistributed(); }
} testDescription_TestStreeterFibreGenerator_TestSimpleOrthotropicNotDistributed;

static class TestDescription_TestStreeterFibreGenerator_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStreeterFibreGenerator_TestExceptions() : CxxTest::RealTestDescription( Tests_TestStreeterFibreGenerator, suiteDescription_TestStreeterFibreGenerator, 166, "TestExceptions" ) {}
 void runTest() { suite_TestStreeterFibreGenerator.TestExceptions(); }
} testDescription_TestStreeterFibreGenerator_TestExceptions;

static class TestDescription_TestStreeterFibreGenerator_TestConstructStreeterOnLeftWedge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStreeterFibreGenerator_TestConstructStreeterOnLeftWedge() : CxxTest::RealTestDescription( Tests_TestStreeterFibreGenerator, suiteDescription_TestStreeterFibreGenerator, 206, "TestConstructStreeterOnLeftWedge" ) {}
 void runTest() { suite_TestStreeterFibreGenerator.TestConstructStreeterOnLeftWedge(); }
} testDescription_TestStreeterFibreGenerator_TestConstructStreeterOnLeftWedge;

static class TestDescription_TestStreeterFibreGenerator_TestConstructStreeterOnRightWedge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStreeterFibreGenerator_TestConstructStreeterOnRightWedge() : CxxTest::RealTestDescription( Tests_TestStreeterFibreGenerator, suiteDescription_TestStreeterFibreGenerator, 233, "TestConstructStreeterOnRightWedge" ) {}
 void runTest() { suite_TestStreeterFibreGenerator.TestConstructStreeterOnRightWedge(); }
} testDescription_TestStreeterFibreGenerator_TestConstructStreeterOnRightWedge;

static class TestDescription_TestStreeterFibreGenerator_TestSetLogInfo : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStreeterFibreGenerator_TestSetLogInfo() : CxxTest::RealTestDescription( Tests_TestStreeterFibreGenerator, suiteDescription_TestStreeterFibreGenerator, 260, "TestSetLogInfo" ) {}
 void runTest() { suite_TestStreeterFibreGenerator.TestSetLogInfo(); }
} testDescription_TestStreeterFibreGenerator_TestSetLogInfo;

#include <cxxtest/Root.cpp>
