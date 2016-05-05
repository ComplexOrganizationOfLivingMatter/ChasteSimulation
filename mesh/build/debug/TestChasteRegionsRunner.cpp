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
#include "mesh/test/TestChasteRegions.hpp"

static TestRegions suite_TestRegions;

static CxxTest::List Tests_TestRegions = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRegions( "mesh/test/TestChasteRegions.hpp", 56, "TestRegions", suite_TestRegions, Tests_TestRegions );

static class TestDescription_TestRegions_TestCuboidCreationAndContained : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRegions_TestCuboidCreationAndContained() : CxxTest::RealTestDescription( Tests_TestRegions, suiteDescription_TestRegions, 60, "TestCuboidCreationAndContained" ) {}
 void runTest() { suite_TestRegions.TestCuboidCreationAndContained(); }
} testDescription_TestRegions_TestCuboidCreationAndContained;

static class TestDescription_TestRegions_TestNodesList : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRegions_TestNodesList() : CxxTest::RealTestDescription( Tests_TestRegions, suiteDescription_TestRegions, 136, "TestNodesList" ) {}
 void runTest() { suite_TestRegions.TestNodesList(); }
} testDescription_TestRegions_TestNodesList;

static class TestDescription_TestRegions_TestEllipsoidCreationAndContained : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRegions_TestEllipsoidCreationAndContained() : CxxTest::RealTestDescription( Tests_TestRegions, suiteDescription_TestRegions, 165, "TestEllipsoidCreationAndContained" ) {}
 void runTest() { suite_TestRegions.TestEllipsoidCreationAndContained(); }
} testDescription_TestRegions_TestEllipsoidCreationAndContained;

static class TestDescription_TestRegions_TestArchivingRegions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRegions_TestArchivingRegions() : CxxTest::RealTestDescription( Tests_TestRegions, suiteDescription_TestRegions, 225, "TestArchivingRegions" ) {}
 void runTest() { suite_TestRegions.TestArchivingRegions(); }
} testDescription_TestRegions_TestArchivingRegions;

#include <cxxtest/Root.cpp>
