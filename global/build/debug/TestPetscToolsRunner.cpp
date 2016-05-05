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
#include "global/test/TestPetscTools.hpp"

static TestPetscTools suite_TestPetscTools;

static CxxTest::List Tests_TestPetscTools = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPetscTools( "global/test/TestPetscTools.hpp", 50, "TestPetscTools", suite_TestPetscTools, Tests_TestPetscTools );

static class TestDescription_TestPetscTools_TestMostOfPetscTools : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestMostOfPetscTools() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 54, "TestMostOfPetscTools" ) {}
 void runTest() { suite_TestPetscTools.TestMostOfPetscTools(); }
} testDescription_TestPetscTools_TestMostOfPetscTools;

static class TestDescription_TestPetscTools_TestBarrier : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestBarrier() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 181, "TestBarrier" ) {}
 void runTest() { suite_TestPetscTools.TestBarrier(); }
} testDescription_TestPetscTools_TestBarrier;

static class TestDescription_TestPetscTools_TestReplicateBool : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestReplicateBool() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 190, "TestReplicateBool" ) {}
 void runTest() { suite_TestPetscTools.TestReplicateBool(); }
} testDescription_TestPetscTools_TestReplicateBool;

static class TestDescription_TestPetscTools_TestReplicateException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestReplicateException() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 201, "TestReplicateException" ) {}
 void runTest() { suite_TestPetscTools.TestReplicateException(); }
} testDescription_TestPetscTools_TestReplicateException;

static class TestDescription_TestPetscTools_TestProcessIsolation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestProcessIsolation() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 214, "TestProcessIsolation" ) {}
 void runTest() { suite_TestPetscTools.TestProcessIsolation(); }
} testDescription_TestPetscTools_TestProcessIsolation;

static class TestDescription_TestPetscTools_TestDumpPetscObjects : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestDumpPetscObjects() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 251, "TestDumpPetscObjects" ) {}
 void runTest() { suite_TestPetscTools.TestDumpPetscObjects(); }
} testDescription_TestPetscTools_TestDumpPetscObjects;

static class TestDescription_TestPetscTools_TestReadWithNonDefaultParallelLayout : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestReadWithNonDefaultParallelLayout() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 327, "TestReadWithNonDefaultParallelLayout" ) {}
 void runTest() { suite_TestPetscTools.TestReadWithNonDefaultParallelLayout(); }
} testDescription_TestPetscTools_TestReadWithNonDefaultParallelLayout;

static class TestDescription_TestPetscTools_TestUnevenCreation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestUnevenCreation() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 377, "TestUnevenCreation" ) {}
 void runTest() { suite_TestPetscTools.TestUnevenCreation(); }
} testDescription_TestPetscTools_TestUnevenCreation;

static class TestDescription_TestPetscTools_TestHasParMetis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestHasParMetis() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 401, "TestHasParMetis" ) {}
 void runTest() { suite_TestPetscTools.TestHasParMetis(); }
} testDescription_TestPetscTools_TestHasParMetis;

static class TestDescription_TestPetscTools_TestExceptionMacros : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscTools_TestExceptionMacros() : CxxTest::RealTestDescription( Tests_TestPetscTools, suiteDescription_TestPetscTools, 408, "TestExceptionMacros" ) {}
 void runTest() { suite_TestPetscTools.TestExceptionMacros(); }
} testDescription_TestPetscTools_TestExceptionMacros;

#include <cxxtest/Root.cpp>
