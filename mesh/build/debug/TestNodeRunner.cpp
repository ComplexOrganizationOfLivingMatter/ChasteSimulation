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
#include "mesh/test/TestNode.hpp"

static TestNode suite_TestNode;

static CxxTest::List Tests_TestNode = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNode( "mesh/test/TestNode.hpp", 49, "TestNode", suite_TestNode, Tests_TestNode );

static class TestDescription_TestNode_TestNodeMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNode_TestNodeMethod() : CxxTest::RealTestDescription( Tests_TestNode, suiteDescription_TestNode, 59, "TestNodeMethod" ) {}
 void runTest() { suite_TestNode.TestNodeMethod(); }
} testDescription_TestNode_TestNodeMethod;

static class TestDescription_TestNode_TestNodeNewAndOld : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNode_TestNodeNewAndOld() : CxxTest::RealTestDescription( Tests_TestNode, suiteDescription_TestNode, 141, "TestNodeNewAndOld" ) {}
 void runTest() { suite_TestNode.TestNodeNewAndOld(); }
} testDescription_TestNode_TestNodeNewAndOld;

static class TestDescription_TestNode_TestNodeNew : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNode_TestNodeNew() : CxxTest::RealTestDescription( Tests_TestNode, suiteDescription_TestNode, 167, "TestNodeNew" ) {}
 void runTest() { suite_TestNode.TestNodeNew(); }
} testDescription_TestNode_TestNodeNew;

static class TestDescription_TestNode_TestNodeFromStdVector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNode_TestNodeFromStdVector() : CxxTest::RealTestDescription( Tests_TestNode, suiteDescription_TestNode, 188, "TestNodeFromStdVector" ) {}
 void runTest() { suite_TestNode.TestNodeFromStdVector(); }
} testDescription_TestNode_TestNodeFromStdVector;

static class TestDescription_TestNode_TestNodeWithAttributes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNode_TestNodeWithAttributes() : CxxTest::RealTestDescription( Tests_TestNode, suiteDescription_TestNode, 205, "TestNodeWithAttributes" ) {}
 void runTest() { suite_TestNode.TestNodeWithAttributes(); }
} testDescription_TestNode_TestNodeWithAttributes;

static class TestDescription_TestNode_TestArchiveNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNode_TestArchiveNode() : CxxTest::RealTestDescription( Tests_TestNode, suiteDescription_TestNode, 260, "TestArchiveNode" ) {}
 void runTest() { suite_TestNode.TestArchiveNode(); }
} testDescription_TestNode_TestArchiveNode;

#include <cxxtest/Root.cpp>
