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
#include "pde/test/utilities/TestTimeAdaptivityController.hpp"

static TestTimeAdaptivityController suite_TestTimeAdaptivityController;

static CxxTest::List Tests_TestTimeAdaptivityController = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTimeAdaptivityController( "pde/test/utilities/TestTimeAdaptivityController.hpp", 71, "TestTimeAdaptivityController", suite_TestTimeAdaptivityController, Tests_TestTimeAdaptivityController );

static class TestDescription_TestTimeAdaptivityController_TestToyController : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTimeAdaptivityController_TestToyController() : CxxTest::RealTestDescription( Tests_TestTimeAdaptivityController, suiteDescription_TestTimeAdaptivityController, 74, "TestToyController" ) {}
 void runTest() { suite_TestTimeAdaptivityController.TestToyController(); }
} testDescription_TestTimeAdaptivityController_TestToyController;

#include <cxxtest/Root.cpp>
