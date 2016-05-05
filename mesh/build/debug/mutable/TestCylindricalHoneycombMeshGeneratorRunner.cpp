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
#include "mesh/test/mutable/TestCylindricalHoneycombMeshGenerator.hpp"

static TestCylindricalHoneycombMeshGenerator suite_TestCylindricalHoneycombMeshGenerator;

static CxxTest::List Tests_TestCylindricalHoneycombMeshGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCylindricalHoneycombMeshGenerator( "mesh/test/mutable/TestCylindricalHoneycombMeshGenerator.hpp", 45, "TestCylindricalHoneycombMeshGenerator", suite_TestCylindricalHoneycombMeshGenerator, Tests_TestCylindricalHoneycombMeshGenerator );

static class TestDescription_TestCylindricalHoneycombMeshGenerator_TestCylindricalHoneycombMeshGeneratorRelaxed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindricalHoneycombMeshGenerator_TestCylindricalHoneycombMeshGeneratorRelaxed() : CxxTest::RealTestDescription( Tests_TestCylindricalHoneycombMeshGenerator, suiteDescription_TestCylindricalHoneycombMeshGenerator, 67, "TestCylindricalHoneycombMeshGeneratorRelaxed" ) {}
 void runTest() { suite_TestCylindricalHoneycombMeshGenerator.TestCylindricalHoneycombMeshGeneratorRelaxed(); }
} testDescription_TestCylindricalHoneycombMeshGenerator_TestCylindricalHoneycombMeshGeneratorRelaxed;

static class TestDescription_TestCylindricalHoneycombMeshGenerator_TestCylindricalHoneycombMeshGeneratorCompressed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindricalHoneycombMeshGenerator_TestCylindricalHoneycombMeshGeneratorCompressed() : CxxTest::RealTestDescription( Tests_TestCylindricalHoneycombMeshGenerator, suiteDescription_TestCylindricalHoneycombMeshGenerator, 140, "TestCylindricalHoneycombMeshGeneratorCompressed" ) {}
 void runTest() { suite_TestCylindricalHoneycombMeshGenerator.TestCylindricalHoneycombMeshGeneratorCompressed(); }
} testDescription_TestCylindricalHoneycombMeshGenerator_TestCylindricalHoneycombMeshGeneratorCompressed;

#include <cxxtest/Root.cpp>
