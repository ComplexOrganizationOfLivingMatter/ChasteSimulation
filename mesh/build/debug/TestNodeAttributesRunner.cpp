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
#include "mesh/test/TestNodeAttributes.hpp"

static TestNodeAttributes suite_TestNodeAttributes;

static CxxTest::List Tests_TestNodeAttributes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNodeAttributes( "mesh/test/TestNodeAttributes.hpp", 50, "TestNodeAttributes", suite_TestNodeAttributes, Tests_TestNodeAttributes );

static class TestDescription_TestNodeAttributes_TestConstructor1d2d3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestConstructor1d2d3d() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 71, "TestConstructor1d2d3d" ) {}
 void runTest() { suite_TestNodeAttributes.TestConstructor1d2d3d(); }
} testDescription_TestNodeAttributes_TestConstructor1d2d3d;

static class TestDescription_TestNodeAttributes_TestAttributesContainer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestAttributesContainer() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 78, "TestAttributesContainer" ) {}
 void runTest() { suite_TestNodeAttributes.TestAttributesContainer(); }
} testDescription_TestNodeAttributes_TestAttributesContainer;

static class TestDescription_TestNodeAttributes_TestRegion : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestRegion() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 92, "TestRegion" ) {}
 void runTest() { suite_TestNodeAttributes.TestRegion(); }
} testDescription_TestNodeAttributes_TestRegion;

static class TestDescription_TestNodeAttributes_TestAppliedForce : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestAppliedForce() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 105, "TestAppliedForce" ) {}
 void runTest() { suite_TestNodeAttributes.TestAppliedForce(); }
} testDescription_TestNodeAttributes_TestAppliedForce;

static class TestDescription_TestNodeAttributes_TestIsParticle : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestIsParticle() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 137, "TestIsParticle" ) {}
 void runTest() { suite_TestNodeAttributes.TestIsParticle(); }
} testDescription_TestNodeAttributes_TestIsParticle;

static class TestDescription_TestNodeAttributes_TestRadius : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestRadius() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 150, "TestRadius" ) {}
 void runTest() { suite_TestNodeAttributes.TestRadius(); }
} testDescription_TestNodeAttributes_TestRadius;

static class TestDescription_TestNodeAttributes_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestArchiving() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 162, "TestArchiving" ) {}
 void runTest() { suite_TestNodeAttributes.TestArchiving(); }
} testDescription_TestNodeAttributes_TestArchiving;

static class TestDescription_TestNodeAttributes_TestArchivingNullPointer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNodeAttributes_TestArchivingNullPointer() : CxxTest::RealTestDescription( Tests_TestNodeAttributes, suiteDescription_TestNodeAttributes, 217, "TestArchivingNullPointer" ) {}
 void runTest() { suite_TestNodeAttributes.TestArchivingNullPointer(); }
} testDescription_TestNodeAttributes_TestArchivingNullPointer;

#include <cxxtest/Root.cpp>
