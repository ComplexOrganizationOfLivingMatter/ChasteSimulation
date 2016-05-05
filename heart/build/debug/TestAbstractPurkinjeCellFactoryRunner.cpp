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
#include "heart/test/TestAbstractPurkinjeCellFactory.hpp"

static TestAbstractPurkinjeCellFactory suite_TestAbstractPurkinjeCellFactory;

static CxxTest::List Tests_TestAbstractPurkinjeCellFactory = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractPurkinjeCellFactory( "heart/test/TestAbstractPurkinjeCellFactory.hpp", 84, "TestAbstractPurkinjeCellFactory", suite_TestAbstractPurkinjeCellFactory, Tests_TestAbstractPurkinjeCellFactory );

static class TestDescription_TestAbstractPurkinjeCellFactory_TestPurkinjeCellFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractPurkinjeCellFactory_TestPurkinjeCellFactory() : CxxTest::RealTestDescription( Tests_TestAbstractPurkinjeCellFactory, suiteDescription_TestAbstractPurkinjeCellFactory, 87, "TestPurkinjeCellFactory" ) {}
 void runTest() { suite_TestAbstractPurkinjeCellFactory.TestPurkinjeCellFactory(); }
} testDescription_TestAbstractPurkinjeCellFactory_TestPurkinjeCellFactory;

#include <cxxtest/Root.cpp>
