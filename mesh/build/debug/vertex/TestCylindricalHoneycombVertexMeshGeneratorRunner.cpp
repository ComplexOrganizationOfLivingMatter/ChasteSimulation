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
#include "mesh/test/vertex/TestCylindricalHoneycombVertexMeshGenerator.hpp"

static TestCylindricalHoneycombVertexMeshGenerator suite_TestCylindricalHoneycombVertexMeshGenerator;

static CxxTest::List Tests_TestCylindricalHoneycombVertexMeshGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCylindricalHoneycombVertexMeshGenerator( "mesh/test/vertex/TestCylindricalHoneycombVertexMeshGenerator.hpp", 50, "TestCylindricalHoneycombVertexMeshGenerator", suite_TestCylindricalHoneycombVertexMeshGenerator, Tests_TestCylindricalHoneycombVertexMeshGenerator );

static class TestDescription_TestCylindricalHoneycombVertexMeshGenerator_TestCylindrical2dVertexMeshGenerator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindricalHoneycombVertexMeshGenerator_TestCylindrical2dVertexMeshGenerator() : CxxTest::RealTestDescription( Tests_TestCylindricalHoneycombVertexMeshGenerator, suiteDescription_TestCylindricalHoneycombVertexMeshGenerator, 54, "TestCylindrical2dVertexMeshGenerator" ) {}
 void runTest() { suite_TestCylindricalHoneycombVertexMeshGenerator.TestCylindrical2dVertexMeshGenerator(); }
} testDescription_TestCylindricalHoneycombVertexMeshGenerator_TestCylindrical2dVertexMeshGenerator;

#include <cxxtest/Root.cpp>
