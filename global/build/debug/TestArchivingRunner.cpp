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
#include "global/test/TestArchiving.hpp"

static TestArchiving suite_TestArchiving;

static CxxTest::List Tests_TestArchiving = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestArchiving( "global/test/TestArchiving.hpp", 61, "TestArchiving", suite_TestArchiving, Tests_TestArchiving );

static class TestDescription_TestArchiving_TestArchiveSimpleVars : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiving_TestArchiveSimpleVars() : CxxTest::RealTestDescription( Tests_TestArchiving, suiteDescription_TestArchiving, 64, "TestArchiveSimpleVars" ) {}
 void runTest() { suite_TestArchiving.TestArchiveSimpleVars(); }
} testDescription_TestArchiving_TestArchiveSimpleVars;

static class TestDescription_TestArchiving_TestArchivingLinkedChildAndParent : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiving_TestArchivingLinkedChildAndParent() : CxxTest::RealTestDescription( Tests_TestArchiving, suiteDescription_TestArchiving, 121, "TestArchivingLinkedChildAndParent" ) {}
 void runTest() { suite_TestArchiving.TestArchivingLinkedChildAndParent(); }
} testDescription_TestArchiving_TestArchivingLinkedChildAndParent;

static class TestDescription_TestArchiving_TestArchivingSetOfSetOfPointers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiving_TestArchivingSetOfSetOfPointers() : CxxTest::RealTestDescription( Tests_TestArchiving, suiteDescription_TestArchiving, 175, "TestArchivingSetOfSetOfPointers" ) {}
 void runTest() { suite_TestArchiving.TestArchivingSetOfSetOfPointers(); }
} testDescription_TestArchiving_TestArchivingSetOfSetOfPointers;

static class TestDescription_TestArchiving_TestArchivingBoostSharedPtrToChild : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiving_TestArchivingBoostSharedPtrToChild() : CxxTest::RealTestDescription( Tests_TestArchiving, suiteDescription_TestArchiving, 284, "TestArchivingBoostSharedPtrToChild" ) {}
 void runTest() { suite_TestArchiving.TestArchivingBoostSharedPtrToChild(); }
} testDescription_TestArchiving_TestArchivingBoostSharedPtrToChild;

static class TestDescription_TestArchiving_TestArchivingBoostSharedPtrToChildUsingBaseClass : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiving_TestArchivingBoostSharedPtrToChildUsingBaseClass() : CxxTest::RealTestDescription( Tests_TestArchiving, suiteDescription_TestArchiving, 321, "TestArchivingBoostSharedPtrToChildUsingBaseClass" ) {}
 void runTest() { suite_TestArchiving.TestArchivingBoostSharedPtrToChildUsingBaseClass(); }
} testDescription_TestArchiving_TestArchivingBoostSharedPtrToChildUsingBaseClass;

static class TestDescription_TestArchiving_TestArchivingSubChild : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiving_TestArchivingSubChild() : CxxTest::RealTestDescription( Tests_TestArchiving, suiteDescription_TestArchiving, 354, "TestArchivingSubChild" ) {}
 void runTest() { suite_TestArchiving.TestArchivingSubChild(); }
} testDescription_TestArchiving_TestArchivingSubChild;

static class TestDescription_TestArchiving_TestUsingABinaryArchive : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiving_TestUsingABinaryArchive() : CxxTest::RealTestDescription( Tests_TestArchiving, suiteDescription_TestArchiving, 403, "TestUsingABinaryArchive" ) {}
 void runTest() { suite_TestArchiving.TestUsingABinaryArchive(); }
} testDescription_TestArchiving_TestUsingABinaryArchive;

#include <cxxtest/Root.cpp>
