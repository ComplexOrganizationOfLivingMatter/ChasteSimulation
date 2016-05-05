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
#include "heart/test/TestAbstractContractionCellFactory.hpp"

static TestAbstractContractionCellFactory suite_TestAbstractContractionCellFactory;

static CxxTest::List Tests_TestAbstractContractionCellFactory = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractContractionCellFactory( "heart/test/TestAbstractContractionCellFactory.hpp", 84, "TestAbstractContractionCellFactory", suite_TestAbstractContractionCellFactory, Tests_TestAbstractContractionCellFactory );

static class TestDescription_TestAbstractContractionCellFactory_TestContractionCellFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractContractionCellFactory_TestContractionCellFactory() : CxxTest::RealTestDescription( Tests_TestAbstractContractionCellFactory, suiteDescription_TestAbstractContractionCellFactory, 87, "TestContractionCellFactory" ) {}
 void runTest() { suite_TestAbstractContractionCellFactory.TestContractionCellFactory(); }
} testDescription_TestAbstractContractionCellFactory_TestContractionCellFactory;

static class TestDescription_TestAbstractContractionCellFactory_TestContractionCellFactoryOnSquare : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractContractionCellFactory_TestContractionCellFactoryOnSquare() : CxxTest::RealTestDescription( Tests_TestAbstractContractionCellFactory, suiteDescription_TestAbstractContractionCellFactory, 126, "TestContractionCellFactoryOnSquare" ) {}
 void runTest() { suite_TestAbstractContractionCellFactory.TestContractionCellFactoryOnSquare(); }
} testDescription_TestAbstractContractionCellFactory_TestContractionCellFactoryOnSquare;

#include <cxxtest/Root.cpp>
