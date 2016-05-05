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
#include "pde/test/utilities/TestAbstractFeCableIntegralAssembler.hpp"

static TestAbstractFeCableIntegralAssembler suite_TestAbstractFeCableIntegralAssembler;

static CxxTest::List Tests_TestAbstractFeCableIntegralAssembler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractFeCableIntegralAssembler( "pde/test/utilities/TestAbstractFeCableIntegralAssembler.hpp", 130, "TestAbstractFeCableIntegralAssembler", suite_TestAbstractFeCableIntegralAssembler, Tests_TestAbstractFeCableIntegralAssembler );

static class TestDescription_TestAbstractFeCableIntegralAssembler_TestBasicCableAssemblers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeCableIntegralAssembler_TestBasicCableAssemblers() : CxxTest::RealTestDescription( Tests_TestAbstractFeCableIntegralAssembler, suiteDescription_TestAbstractFeCableIntegralAssembler, 133, "TestBasicCableAssemblers" ) {}
 void runTest() { suite_TestAbstractFeCableIntegralAssembler.TestBasicCableAssemblers(); }
} testDescription_TestAbstractFeCableIntegralAssembler_TestBasicCableAssemblers;

static class TestDescription_TestAbstractFeCableIntegralAssembler_TestExceptionsAndSetCurrentSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeCableIntegralAssembler_TestExceptionsAndSetCurrentSolution() : CxxTest::RealTestDescription( Tests_TestAbstractFeCableIntegralAssembler, suiteDescription_TestAbstractFeCableIntegralAssembler, 237, "TestExceptionsAndSetCurrentSolution" ) {}
 void runTest() { suite_TestAbstractFeCableIntegralAssembler.TestExceptionsAndSetCurrentSolution(); }
} testDescription_TestAbstractFeCableIntegralAssembler_TestExceptionsAndSetCurrentSolution;

#include <cxxtest/Root.cpp>
