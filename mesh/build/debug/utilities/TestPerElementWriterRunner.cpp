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
#include "mesh/test/utilities/TestPerElementWriter.hpp"

static TestPerElementWriter suite_TestPerElementWriter;

static CxxTest::List Tests_TestPerElementWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPerElementWriter( "mesh/test/utilities/TestPerElementWriter.hpp", 102, "TestPerElementWriter", suite_TestPerElementWriter, Tests_TestPerElementWriter );

static class TestDescription_TestPerElementWriter_TestPerElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPerElementWriter_TestPerElement() : CxxTest::RealTestDescription( Tests_TestPerElementWriter, suiteDescription_TestPerElementWriter, 107, "TestPerElement" ) {}
 void runTest() { suite_TestPerElementWriter.TestPerElement(); }
} testDescription_TestPerElementWriter_TestPerElement;

#include <cxxtest/Root.cpp>
