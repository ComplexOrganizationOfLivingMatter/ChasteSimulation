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
#include "heart/test/TestHeartConfig.hpp"

static TestHeartConfig suite_TestHeartConfig;

static CxxTest::List Tests_TestHeartConfig = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeartConfig( "heart/test/TestHeartConfig.hpp", 60, "TestHeartConfig", suite_TestHeartConfig, Tests_TestHeartConfig );

static class TestDescription_TestHeartConfig_TestHeartConfigBasic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestHeartConfigBasic() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 69, "TestHeartConfigBasic" ) {}
 void runTest() { suite_TestHeartConfig.TestHeartConfigBasic(); }
} testDescription_TestHeartConfig_TestHeartConfigBasic;

static class TestDescription_TestHeartConfig_TestUserProvidedDifferentFromDefault : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestUserProvidedDifferentFromDefault() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 89, "TestUserProvidedDifferentFromDefault" ) {}
 void runTest() { suite_TestHeartConfig.TestUserProvidedDifferentFromDefault(); }
} testDescription_TestHeartConfig_TestUserProvidedDifferentFromDefault;

static class TestDescription_TestHeartConfig_TestGetFunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestGetFunctions() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 115, "TestGetFunctions" ) {}
 void runTest() { suite_TestHeartConfig.TestGetFunctions(); }
} testDescription_TestHeartConfig_TestGetFunctions;

static class TestDescription_TestHeartConfig_TestGetHeterogeneities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestGetHeterogeneities() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 297, "TestGetHeterogeneities" ) {}
 void runTest() { suite_TestHeartConfig.TestGetHeterogeneities(); }
} testDescription_TestHeartConfig_TestGetHeterogeneities;

static class TestDescription_TestHeartConfig_TestIsMeshProvided : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestIsMeshProvided() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 535, "TestIsMeshProvided" ) {}
 void runTest() { suite_TestHeartConfig.TestIsMeshProvided(); }
} testDescription_TestHeartConfig_TestIsMeshProvided;

static class TestDescription_TestHeartConfig_TestTransmuralHeterogeneities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestTransmuralHeterogeneities() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 548, "TestTransmuralHeterogeneities" ) {}
 void runTest() { suite_TestHeartConfig.TestTransmuralHeterogeneities(); }
} testDescription_TestHeartConfig_TestTransmuralHeterogeneities;

static class TestDescription_TestHeartConfig_Test2dProblems : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_Test2dProblems() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 746, "Test2dProblems" ) {}
 void runTest() { suite_TestHeartConfig.Test2dProblems(); }
} testDescription_TestHeartConfig_Test2dProblems;

static class TestDescription_TestHeartConfig_Test1dProblems : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_Test1dProblems() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 773, "Test1dProblems" ) {}
 void runTest() { suite_TestHeartConfig.Test1dProblems(); }
} testDescription_TestHeartConfig_Test1dProblems;

static class TestDescription_TestHeartConfig_TestSetFunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestSetFunctions() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 800, "TestSetFunctions" ) {}
 void runTest() { suite_TestHeartConfig.TestSetFunctions(); }
} testDescription_TestHeartConfig_TestSetFunctions;

static class TestDescription_TestHeartConfig_TestPostProcessingFunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestPostProcessingFunctions() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1257, "TestPostProcessingFunctions" ) {}
 void runTest() { suite_TestHeartConfig.TestPostProcessingFunctions(); }
} testDescription_TestHeartConfig_TestPostProcessingFunctions;

static class TestDescription_TestHeartConfig_TestWrite : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestWrite() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1360, "TestWrite" ) {}
 void runTest() { suite_TestHeartConfig.TestWrite(); }
} testDescription_TestHeartConfig_TestWrite;

static class TestDescription_TestHeartConfig_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestArchiving() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1397, "TestArchiving" ) {}
 void runTest() { suite_TestHeartConfig.TestArchiving(); }
} testDescription_TestHeartConfig_TestArchiving;

static class TestDescription_TestHeartConfig_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestExceptions() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1483, "TestExceptions" ) {}
 void runTest() { suite_TestHeartConfig.TestExceptions(); }
} testDescription_TestHeartConfig_TestExceptions;

static class TestDescription_TestHeartConfig_TestChasteParametersFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestChasteParametersFile() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1530, "TestChasteParametersFile" ) {}
 void runTest() { suite_TestHeartConfig.TestChasteParametersFile(); }
} testDescription_TestHeartConfig_TestChasteParametersFile;

static class TestDescription_TestHeartConfig_TestVersioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestVersioning() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1538, "TestVersioning" ) {}
 void runTest() { suite_TestHeartConfig.TestVersioning(); }
} testDescription_TestHeartConfig_TestVersioning;

static class TestDescription_TestHeartConfig_TestSpacesInPath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestSpacesInPath() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1695, "TestSpacesInPath" ) {}
 void runTest() { suite_TestHeartConfig.TestSpacesInPath(); }
} testDescription_TestHeartConfig_TestSpacesInPath;

static class TestDescription_TestHeartConfig_TestGetOuputVariablesFromXML : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestGetOuputVariablesFromXML() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1704, "TestGetOuputVariablesFromXML" ) {}
 void runTest() { suite_TestHeartConfig.TestGetOuputVariablesFromXML(); }
} testDescription_TestHeartConfig_TestGetOuputVariablesFromXML;

static class TestDescription_TestHeartConfig_TestSetAndGetOuputVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestSetAndGetOuputVariables() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1730, "TestSetAndGetOuputVariables" ) {}
 void runTest() { suite_TestHeartConfig.TestSetAndGetOuputVariables(); }
} testDescription_TestHeartConfig_TestSetAndGetOuputVariables;

static class TestDescription_TestHeartConfig_TestSetAndGetArchivingStuff : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestSetAndGetArchivingStuff() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1761, "TestSetAndGetArchivingStuff" ) {}
 void runTest() { suite_TestHeartConfig.TestSetAndGetArchivingStuff(); }
} testDescription_TestHeartConfig_TestSetAndGetArchivingStuff;

static class TestDescription_TestHeartConfig_TestOutputVisualizerSettings : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestOutputVisualizerSettings() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1857, "TestOutputVisualizerSettings" ) {}
 void runTest() { suite_TestHeartConfig.TestOutputVisualizerSettings(); }
} testDescription_TestHeartConfig_TestOutputVisualizerSettings;

static class TestDescription_TestHeartConfig_TestNoCheckpointingError : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestNoCheckpointingError() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1927, "TestNoCheckpointingError" ) {}
 void runTest() { suite_TestHeartConfig.TestNoCheckpointingError(); }
} testDescription_TestHeartConfig_TestNoCheckpointingError;

static class TestDescription_TestHeartConfig_TestMergingParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartConfig_TestMergingParameters() : CxxTest::RealTestDescription( Tests_TestHeartConfig, suiteDescription_TestHeartConfig, 1965, "TestMergingParameters" ) {}
 void runTest() { suite_TestHeartConfig.TestMergingParameters(); }
} testDescription_TestHeartConfig_TestMergingParameters;

#include <cxxtest/Root.cpp>
