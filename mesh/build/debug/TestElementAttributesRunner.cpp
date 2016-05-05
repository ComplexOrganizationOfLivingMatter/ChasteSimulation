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
#include "mesh/test/TestElementAttributes.hpp"

static TestElementAttributes suite_TestElementAttributes;

static CxxTest::List Tests_TestElementAttributes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestElementAttributes( "mesh/test/TestElementAttributes.hpp", 52, "TestElementAttributes", suite_TestElementAttributes, Tests_TestElementAttributes );

static class TestDescription_TestElementAttributes_TestAttributesContainer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElementAttributes_TestAttributesContainer() : CxxTest::RealTestDescription( Tests_TestElementAttributes, suiteDescription_TestElementAttributes, 56, "TestAttributesContainer" ) {}
 void runTest() { suite_TestElementAttributes.TestAttributesContainer(); }
} testDescription_TestElementAttributes_TestAttributesContainer;

static class TestDescription_TestElementAttributes_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElementAttributes_TestArchiving() : CxxTest::RealTestDescription( Tests_TestElementAttributes, suiteDescription_TestElementAttributes, 82, "TestArchiving" ) {}
 void runTest() { suite_TestElementAttributes.TestArchiving(); }
} testDescription_TestElementAttributes_TestArchiving;

static class TestDescription_TestElementAttributes_TestArchivingNullPointer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElementAttributes_TestArchivingNullPointer() : CxxTest::RealTestDescription( Tests_TestElementAttributes, suiteDescription_TestElementAttributes, 120, "TestArchivingNullPointer" ) {}
 void runTest() { suite_TestElementAttributes.TestArchivingNullPointer(); }
} testDescription_TestElementAttributes_TestArchivingNullPointer;

static class TestDescription_TestElementAttributes_TestElementWithAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElementAttributes_TestElementWithAttributes() : CxxTest::RealTestDescription( Tests_TestElementAttributes, suiteDescription_TestElementAttributes, 151, "TestElementWithAttributes" ) {}
 void runTest() { suite_TestElementAttributes.TestElementWithAttributes(); }
} testDescription_TestElementAttributes_TestElementWithAttributes;

#include <cxxtest/Root.cpp>
