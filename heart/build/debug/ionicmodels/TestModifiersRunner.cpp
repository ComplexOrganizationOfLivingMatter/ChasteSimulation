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
#include "heart/test/ionicmodels/TestModifiers.hpp"

static TestModifiers suite_TestModifiers;

static CxxTest::List Tests_TestModifiers = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestModifiers( "heart/test/ionicmodels/TestModifiers.hpp", 59, "TestModifiers", suite_TestModifiers, Tests_TestModifiers );

static class TestDescription_TestModifiers_TestAccessingParametersWithoutModifiers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestModifiers_TestAccessingParametersWithoutModifiers() : CxxTest::RealTestDescription( Tests_TestModifiers, suiteDescription_TestModifiers, 62, "TestAccessingParametersWithoutModifiers" ) {}
 void runTest() { suite_TestModifiers.TestAccessingParametersWithoutModifiers(); }
} testDescription_TestModifiers_TestAccessingParametersWithoutModifiers;

static class TestDescription_TestModifiers_TestAssigningModifiersToACellModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestModifiers_TestAssigningModifiersToACellModel() : CxxTest::RealTestDescription( Tests_TestModifiers, suiteDescription_TestModifiers, 77, "TestAssigningModifiersToACellModel" ) {}
 void runTest() { suite_TestModifiers.TestAssigningModifiersToACellModel(); }
} testDescription_TestModifiers_TestAssigningModifiersToACellModel;

static class TestDescription_TestModifiers_TestDummyModifiers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestModifiers_TestDummyModifiers() : CxxTest::RealTestDescription( Tests_TestModifiers, suiteDescription_TestModifiers, 105, "TestDummyModifiers" ) {}
 void runTest() { suite_TestModifiers.TestDummyModifiers(); }
} testDescription_TestModifiers_TestDummyModifiers;

static class TestDescription_TestModifiers_TestFactorModifiers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestModifiers_TestFactorModifiers() : CxxTest::RealTestDescription( Tests_TestModifiers, suiteDescription_TestModifiers, 115, "TestFactorModifiers" ) {}
 void runTest() { suite_TestModifiers.TestFactorModifiers(); }
} testDescription_TestModifiers_TestFactorModifiers;

static class TestDescription_TestModifiers_TestFixedModifiers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestModifiers_TestFixedModifiers() : CxxTest::RealTestDescription( Tests_TestModifiers, suiteDescription_TestModifiers, 126, "TestFixedModifiers" ) {}
 void runTest() { suite_TestModifiers.TestFixedModifiers(); }
} testDescription_TestModifiers_TestFixedModifiers;

static class TestDescription_TestModifiers_TestTimeModifiers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestModifiers_TestTimeModifiers() : CxxTest::RealTestDescription( Tests_TestModifiers, suiteDescription_TestModifiers, 137, "TestTimeModifiers" ) {}
 void runTest() { suite_TestModifiers.TestTimeModifiers(); }
} testDescription_TestModifiers_TestTimeModifiers;

static class TestDescription_TestModifiers_TestArchivingModifiers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestModifiers_TestArchivingModifiers() : CxxTest::RealTestDescription( Tests_TestModifiers, suiteDescription_TestModifiers, 151, "TestArchivingModifiers" ) {}
 void runTest() { suite_TestModifiers.TestArchivingModifiers(); }
} testDescription_TestModifiers_TestArchivingModifiers;

#include <cxxtest/Root.cpp>
