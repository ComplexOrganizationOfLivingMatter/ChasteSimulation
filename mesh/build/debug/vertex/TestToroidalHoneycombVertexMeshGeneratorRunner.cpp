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
#include "mesh/test/vertex/TestToroidalHoneycombVertexMeshGenerator.hpp"

static TestToroidalHoneycombVertexMeshGenerator suite_TestToroidalHoneycombVertexMeshGenerator;

static CxxTest::List Tests_TestToroidalHoneycombVertexMeshGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestToroidalHoneycombVertexMeshGenerator( "mesh/test/vertex/TestToroidalHoneycombVertexMeshGenerator.hpp", 50, "TestToroidalHoneycombVertexMeshGenerator", suite_TestToroidalHoneycombVertexMeshGenerator, Tests_TestToroidalHoneycombVertexMeshGenerator );

static class TestDescription_TestToroidalHoneycombVertexMeshGenerator_TestToroidal2dVertexMeshGenerator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestToroidalHoneycombVertexMeshGenerator_TestToroidal2dVertexMeshGenerator() : CxxTest::RealTestDescription( Tests_TestToroidalHoneycombVertexMeshGenerator, suiteDescription_TestToroidalHoneycombVertexMeshGenerator, 54, "TestToroidal2dVertexMeshGenerator" ) {}
 void runTest() { suite_TestToroidalHoneycombVertexMeshGenerator.TestToroidal2dVertexMeshGenerator(); }
} testDescription_TestToroidalHoneycombVertexMeshGenerator_TestToroidal2dVertexMeshGenerator;

#include <cxxtest/Root.cpp>
