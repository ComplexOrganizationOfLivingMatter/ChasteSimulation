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
#include "heart/test/mechanics/TestElectroMechanicsProblemDefinition.hpp"

static TestElectroMechanicsProblemDefinition suite_TestElectroMechanicsProblemDefinition;

static CxxTest::List Tests_TestElectroMechanicsProblemDefinition = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestElectroMechanicsProblemDefinition( "heart/test/mechanics/TestElectroMechanicsProblemDefinition.hpp", 44, "TestElectroMechanicsProblemDefinition", suite_TestElectroMechanicsProblemDefinition, Tests_TestElectroMechanicsProblemDefinition );

static class TestDescription_TestElectroMechanicsProblemDefinition_TestInterface : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElectroMechanicsProblemDefinition_TestInterface() : CxxTest::RealTestDescription( Tests_TestElectroMechanicsProblemDefinition, suiteDescription_TestElectroMechanicsProblemDefinition, 47, "TestInterface" ) {}
 void runTest() { suite_TestElectroMechanicsProblemDefinition.TestInterface(); }
} testDescription_TestElectroMechanicsProblemDefinition_TestInterface;

#include <cxxtest/Root.cpp>
