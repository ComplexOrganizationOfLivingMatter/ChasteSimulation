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
#include "heart/test/postprocessing/TestHdf5ToVisualizerConverters.hpp"

static TestHdf5ToVisualizerConverters suite_TestHdf5ToVisualizerConverters;

static CxxTest::List Tests_TestHdf5ToVisualizerConverters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHdf5ToVisualizerConverters( "heart/test/postprocessing/TestHdf5ToVisualizerConverters.hpp", 65, "TestHdf5ToVisualizerConverters", suite_TestHdf5ToVisualizerConverters, Tests_TestHdf5ToVisualizerConverters );

static class TestDescription_TestHdf5ToVisualizerConverters_TestCmguiConversionLotsOfVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestCmguiConversionLotsOfVariables() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 81, "TestCmguiConversionLotsOfVariables" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestCmguiConversionLotsOfVariables(); }
} testDescription_TestHdf5ToVisualizerConverters_TestCmguiConversionLotsOfVariables;

static class TestDescription_TestHdf5ToVisualizerConverters_TestMonodomainCmguiConversion3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestMonodomainCmguiConversion3D() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 112, "TestMonodomainCmguiConversion3D" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestMonodomainCmguiConversion3D(); }
} testDescription_TestHdf5ToVisualizerConverters_TestMonodomainCmguiConversion3D;

static class TestDescription_TestHdf5ToVisualizerConverters_TestBidomainCmguiConversion3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestBidomainCmguiConversion3D() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 144, "TestBidomainCmguiConversion3D" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestBidomainCmguiConversion3D(); }
} testDescription_TestHdf5ToVisualizerConverters_TestBidomainCmguiConversion3D;

static class TestDescription_TestHdf5ToVisualizerConverters_TestBidomainWithBathCmguiConversion1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestBidomainWithBathCmguiConversion1D() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 172, "TestBidomainWithBathCmguiConversion1D" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestBidomainWithBathCmguiConversion1D(); }
} testDescription_TestHdf5ToVisualizerConverters_TestBidomainWithBathCmguiConversion1D;

static class TestDescription_TestHdf5ToVisualizerConverters_TestMonodomainCmguiConversion2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestMonodomainCmguiConversion2D() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 214, "TestMonodomainCmguiConversion2D" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestMonodomainCmguiConversion2D(); }
} testDescription_TestHdf5ToVisualizerConverters_TestMonodomainCmguiConversion2D;

static class TestDescription_TestHdf5ToVisualizerConverters_TestBidomainCmguiConversion1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestBidomainCmguiConversion1D() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 244, "TestBidomainCmguiConversion1D" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestBidomainCmguiConversion1D(); }
} testDescription_TestHdf5ToVisualizerConverters_TestBidomainCmguiConversion1D;

static class TestDescription_TestHdf5ToVisualizerConverters_TestCmguiConversion1DWith3Variables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestCmguiConversion1DWith3Variables() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 273, "TestCmguiConversion1DWith3Variables" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestCmguiConversion1DWith3Variables(); }
} testDescription_TestHdf5ToVisualizerConverters_TestCmguiConversion1DWith3Variables;

static class TestDescription_TestHdf5ToVisualizerConverters_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5ToVisualizerConverters_TestExceptions() : CxxTest::RealTestDescription( Tests_TestHdf5ToVisualizerConverters, suiteDescription_TestHdf5ToVisualizerConverters, 307, "TestExceptions" ) {}
 void runTest() { suite_TestHdf5ToVisualizerConverters.TestExceptions(); }
} testDescription_TestHdf5ToVisualizerConverters_TestExceptions;

#include <cxxtest/Root.cpp>
