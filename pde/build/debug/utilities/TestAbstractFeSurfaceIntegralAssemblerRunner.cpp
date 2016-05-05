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
#include "pde/test/utilities/TestAbstractFeSurfaceIntegralAssembler.hpp"

static TestAbstractFeSurfaceIntegralAssembler suite_TestAbstractFeSurfaceIntegralAssembler;

static CxxTest::List Tests_TestAbstractFeSurfaceIntegralAssembler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractFeSurfaceIntegralAssembler( "pde/test/utilities/TestAbstractFeSurfaceIntegralAssembler.hpp", 72, "TestAbstractFeSurfaceIntegralAssembler", suite_TestAbstractFeSurfaceIntegralAssembler, Tests_TestAbstractFeSurfaceIntegralAssembler );

static class TestDescription_TestAbstractFeSurfaceIntegralAssembler_TestSurfaceElementContributions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeSurfaceIntegralAssembler_TestSurfaceElementContributions() : CxxTest::RealTestDescription( Tests_TestAbstractFeSurfaceIntegralAssembler, suiteDescription_TestAbstractFeSurfaceIntegralAssembler, 76, "TestSurfaceElementContributions" ) {}
 void runTest() { suite_TestAbstractFeSurfaceIntegralAssembler.TestSurfaceElementContributions(); }
} testDescription_TestAbstractFeSurfaceIntegralAssembler_TestSurfaceElementContributions;

static class TestDescription_TestAbstractFeSurfaceIntegralAssembler_TestSurfaceElementContributions2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeSurfaceIntegralAssembler_TestSurfaceElementContributions2d() : CxxTest::RealTestDescription( Tests_TestAbstractFeSurfaceIntegralAssembler, suiteDescription_TestAbstractFeSurfaceIntegralAssembler, 120, "TestSurfaceElementContributions2d" ) {}
 void runTest() { suite_TestAbstractFeSurfaceIntegralAssembler.TestSurfaceElementContributions2d(); }
} testDescription_TestAbstractFeSurfaceIntegralAssembler_TestSurfaceElementContributions2d;

#include <cxxtest/Root.cpp>
