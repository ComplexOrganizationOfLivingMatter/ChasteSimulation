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
#include "lung/test/TestImpedancePostProcessor.hpp"

static TestImpedancePostProcessor suite_TestImpedancePostProcessor;

static CxxTest::List Tests_TestImpedancePostProcessor = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestImpedancePostProcessor( "lung/test/TestImpedancePostProcessor.hpp", 44, "TestImpedancePostProcessor", suite_TestImpedancePostProcessor, Tests_TestImpedancePostProcessor );

static class TestDescription_TestImpedancePostProcessor_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImpedancePostProcessor_TestExceptions() : CxxTest::RealTestDescription( Tests_TestImpedancePostProcessor, suiteDescription_TestImpedancePostProcessor, 49, "TestExceptions" ) {}
 void runTest() { suite_TestImpedancePostProcessor.TestExceptions(); }
} testDescription_TestImpedancePostProcessor_TestExceptions;

static class TestDescription_TestImpedancePostProcessor_TestCalculatePropertiesWithNiceData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImpedancePostProcessor_TestCalculatePropertiesWithNiceData() : CxxTest::RealTestDescription( Tests_TestImpedancePostProcessor, suiteDescription_TestImpedancePostProcessor, 64, "TestCalculatePropertiesWithNiceData" ) {}
 void runTest() { suite_TestImpedancePostProcessor.TestCalculatePropertiesWithNiceData(); }
} testDescription_TestImpedancePostProcessor_TestCalculatePropertiesWithNiceData;

static class TestDescription_TestImpedancePostProcessor_TestCalculatePropertiesWithHorridData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImpedancePostProcessor_TestCalculatePropertiesWithHorridData() : CxxTest::RealTestDescription( Tests_TestImpedancePostProcessor, suiteDescription_TestImpedancePostProcessor, 92, "TestCalculatePropertiesWithHorridData" ) {}
 void runTest() { suite_TestImpedancePostProcessor.TestCalculatePropertiesWithHorridData(); }
} testDescription_TestImpedancePostProcessor_TestCalculatePropertiesWithHorridData;

#include <cxxtest/Root.cpp>
