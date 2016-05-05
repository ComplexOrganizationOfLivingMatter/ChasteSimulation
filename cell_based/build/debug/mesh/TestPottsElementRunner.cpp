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
#include "cell_based/test/mesh/TestPottsElement.hpp"

static TestPottsElement suite_TestPottsElement;

static CxxTest::List Tests_TestPottsElement = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsElement( "cell_based/test/mesh/TestPottsElement.hpp", 45, "TestPottsElement", suite_TestPottsElement, Tests_TestPottsElement );

static class TestDescription_TestPottsElement_Test1dPottsElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsElement_Test1dPottsElement() : CxxTest::RealTestDescription( Tests_TestPottsElement, suiteDescription_TestPottsElement, 49, "Test1dPottsElement" ) {}
 void runTest() { suite_TestPottsElement.Test1dPottsElement(); }
} testDescription_TestPottsElement_Test1dPottsElement;

static class TestDescription_TestPottsElement_Test2dPottsElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsElement_Test2dPottsElement() : CxxTest::RealTestDescription( Tests_TestPottsElement, suiteDescription_TestPottsElement, 119, "Test2dPottsElement" ) {}
 void runTest() { suite_TestPottsElement.Test2dPottsElement(); }
} testDescription_TestPottsElement_Test2dPottsElement;

static class TestDescription_TestPottsElement_Test3dPottsElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsElement_Test3dPottsElement() : CxxTest::RealTestDescription( Tests_TestPottsElement, suiteDescription_TestPottsElement, 226, "Test3dPottsElement" ) {}
 void runTest() { suite_TestPottsElement.Test3dPottsElement(); }
} testDescription_TestPottsElement_Test3dPottsElement;

#include <cxxtest/Root.cpp>
