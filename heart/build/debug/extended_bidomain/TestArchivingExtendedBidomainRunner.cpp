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
#include "heart/test/extended_bidomain/TestArchivingExtendedBidomain.hpp"

static TestArchivingExtendedBidomain suite_TestArchivingExtendedBidomain;

static CxxTest::List Tests_TestArchivingExtendedBidomain = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestArchivingExtendedBidomain( "heart/test/extended_bidomain/TestArchivingExtendedBidomain.hpp", 136, "TestArchivingExtendedBidomain", suite_TestArchivingExtendedBidomain, Tests_TestArchivingExtendedBidomain );

static class TestDescription_TestArchivingExtendedBidomain_TestArchivingProblemIntraStim : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingExtendedBidomain_TestArchivingProblemIntraStim() : CxxTest::RealTestDescription( Tests_TestArchivingExtendedBidomain, suiteDescription_TestArchivingExtendedBidomain, 152, "TestArchivingProblemIntraStim" ) {}
 void runTest() { suite_TestArchivingExtendedBidomain.TestArchivingProblemIntraStim(); }
} testDescription_TestArchivingExtendedBidomain_TestArchivingProblemIntraStim;

static class TestDescription_TestArchivingExtendedBidomain_TestArchivingProblemExtraStim : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchivingExtendedBidomain_TestArchivingProblemExtraStim() : CxxTest::RealTestDescription( Tests_TestArchivingExtendedBidomain, suiteDescription_TestArchivingExtendedBidomain, 178, "TestArchivingProblemExtraStim" ) {}
 void runTest() { suite_TestArchivingExtendedBidomain.TestArchivingProblemExtraStim(); }
} testDescription_TestArchivingExtendedBidomain_TestArchivingProblemExtraStim;

#include <cxxtest/Root.cpp>
