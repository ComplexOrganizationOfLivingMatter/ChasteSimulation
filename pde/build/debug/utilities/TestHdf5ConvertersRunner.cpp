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
#include "pde/test/utilities/TestHdf5Converters.hpp"

static TestHdf5Converters suite_TestHdf5Converters;

static CxxTest::List Tests_TestHdf5Converters = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHdf5Converters( "pde/test/utilities/TestHdf5Converters.hpp", 68, "TestHdf5Converters", suite_TestHdf5Converters, Tests_TestHdf5Converters );

static class TestDescription_TestHdf5Converters_TestBidomainVtkConversion3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestBidomainVtkConversion3D() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 87, "TestBidomainVtkConversion3D" ) {}
 void runTest() { suite_TestHdf5Converters.TestBidomainVtkConversion3D(); }
} testDescription_TestHdf5Converters_TestBidomainVtkConversion3D;

static class TestDescription_TestHdf5Converters_TestMonodomainParallelVtkConversion2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestMonodomainParallelVtkConversion2D() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 175, "TestMonodomainParallelVtkConversion2D" ) {}
 void runTest() { suite_TestHdf5Converters.TestMonodomainParallelVtkConversion2D(); }
} testDescription_TestHdf5Converters_TestMonodomainParallelVtkConversion2D;

static class TestDescription_TestHdf5Converters_TestBidomainTxtConversion3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestBidomainTxtConversion3D() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 264, "TestBidomainTxtConversion3D" ) {}
 void runTest() { suite_TestHdf5Converters.TestBidomainTxtConversion3D(); }
} testDescription_TestHdf5Converters_TestBidomainTxtConversion3D;

static class TestDescription_TestHdf5Converters_TestMonodomainMeshalyzerConversion : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestMonodomainMeshalyzerConversion() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 299, "TestMonodomainMeshalyzerConversion" ) {}
 void runTest() { suite_TestHdf5Converters.TestMonodomainMeshalyzerConversion(); }
} testDescription_TestHdf5Converters_TestMonodomainMeshalyzerConversion;

static class TestDescription_TestHdf5Converters_TestBidomainMeshalyzerConversion : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestBidomainMeshalyzerConversion() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 322, "TestBidomainMeshalyzerConversion" ) {}
 void runTest() { suite_TestHdf5Converters.TestBidomainMeshalyzerConversion(); }
} testDescription_TestHdf5Converters_TestBidomainMeshalyzerConversion;

static class TestDescription_TestHdf5Converters_TestMeshalyzerConversion3Variables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestMeshalyzerConversion3Variables() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 354, "TestMeshalyzerConversion3Variables" ) {}
 void runTest() { suite_TestHdf5Converters.TestMeshalyzerConversion3Variables(); }
} testDescription_TestHdf5Converters_TestMeshalyzerConversion3Variables;

static class TestDescription_TestHdf5Converters_TestMeshalyzerConversionLotsOfVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestMeshalyzerConversionLotsOfVariables() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 390, "TestMeshalyzerConversionLotsOfVariables" ) {}
 void runTest() { suite_TestHdf5Converters.TestMeshalyzerConversionLotsOfVariables(); }
} testDescription_TestHdf5Converters_TestMeshalyzerConversionLotsOfVariables;

static class TestDescription_TestHdf5Converters_TestHdf5ToXdmfConverter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHdf5Converters_TestHdf5ToXdmfConverter() : CxxTest::RealTestDescription( Tests_TestHdf5Converters, suiteDescription_TestHdf5Converters, 434, "TestHdf5ToXdmfConverter" ) {}
 void runTest() { suite_TestHdf5Converters.TestHdf5ToXdmfConverter(); }
} testDescription_TestHdf5Converters_TestHdf5ToXdmfConverter;

#include <cxxtest/Root.cpp>
