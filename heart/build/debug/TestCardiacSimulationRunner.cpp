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
#include "heart/test/TestCardiacSimulation.hpp"

static TestCardiacSimulation suite_TestCardiacSimulation;

static CxxTest::List Tests_TestCardiacSimulation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCardiacSimulation( "heart/test/TestCardiacSimulation.hpp", 62, "TestCardiacSimulation", suite_TestCardiacSimulation, Tests_TestCardiacSimulation );

static class TestDescription_TestCardiacSimulation_TestMono1dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestMono1dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 93, "TestMono1dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestMono1dSmall(); }
} testDescription_TestCardiacSimulation_TestMono1dSmall;

static class TestDescription_TestCardiacSimulation_TestMono2dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestMono2dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 114, "TestMono2dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestMono2dSmall(); }
} testDescription_TestCardiacSimulation_TestMono2dSmall;

static class TestDescription_TestCardiacSimulation_TestMono3dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestMono3dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 161, "TestMono3dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestMono3dSmall(); }
} testDescription_TestCardiacSimulation_TestMono3dSmall;

static class TestDescription_TestCardiacSimulation_TestMono1dSodiumBlockBySettingNamedParameter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestMono1dSodiumBlockBySettingNamedParameter() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 173, "TestMono1dSodiumBlockBySettingNamedParameter" ) {}
 void runTest() { suite_TestCardiacSimulation.TestMono1dSodiumBlockBySettingNamedParameter(); }
} testDescription_TestCardiacSimulation_TestMono1dSodiumBlockBySettingNamedParameter;

static class TestDescription_TestCardiacSimulation_TestMonoStimUsingEllipsoids : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestMonoStimUsingEllipsoids() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 185, "TestMonoStimUsingEllipsoids" ) {}
 void runTest() { suite_TestCardiacSimulation.TestMonoStimUsingEllipsoids(); }
} testDescription_TestCardiacSimulation_TestMonoStimUsingEllipsoids;

static class TestDescription_TestCardiacSimulation_TestBi1dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestBi1dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 198, "TestBi1dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestBi1dSmall(); }
} testDescription_TestCardiacSimulation_TestBi1dSmall;

static class TestDescription_TestCardiacSimulation_TestBi2dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestBi2dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 215, "TestBi2dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestBi2dSmall(); }
} testDescription_TestCardiacSimulation_TestBi2dSmall;

static class TestDescription_TestCardiacSimulation_TestBi3dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestBi3dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 226, "TestBi3dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestBi3dSmall(); }
} testDescription_TestCardiacSimulation_TestBi3dSmall;

static class TestDescription_TestCardiacSimulation_TestBiWithBath1dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestBiWithBath1dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 238, "TestBiWithBath1dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestBiWithBath1dSmall(); }
} testDescription_TestCardiacSimulation_TestBiWithBath1dSmall;

static class TestDescription_TestCardiacSimulation_TestBiWithBath2dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestBiWithBath2dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 251, "TestBiWithBath2dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestBiWithBath2dSmall(); }
} testDescription_TestCardiacSimulation_TestBiWithBath2dSmall;

static class TestDescription_TestCardiacSimulation_TestBiWithBath3dSmall : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestBiWithBath3dSmall() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 257, "TestBiWithBath3dSmall" ) {}
 void runTest() { suite_TestCardiacSimulation.TestBiWithBath3dSmall(); }
} testDescription_TestCardiacSimulation_TestBiWithBath3dSmall;

static class TestDescription_TestCardiacSimulation_TestBiWith2dHeterogeneousConductivities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestBiWith2dHeterogeneousConductivities() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 263, "TestBiWith2dHeterogeneousConductivities" ) {}
 void runTest() { suite_TestCardiacSimulation.TestBiWith2dHeterogeneousConductivities(); }
} testDescription_TestCardiacSimulation_TestBiWith2dHeterogeneousConductivities;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationBasicBidomainShort : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationBasicBidomainShort() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 268, "TestCardiacSimulationBasicBidomainShort" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationBasicBidomainShort(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationBasicBidomainShort;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationBasicMonodomainShort : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationBasicMonodomainShort() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 279, "TestCardiacSimulationBasicMonodomainShort" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationBasicMonodomainShort(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationBasicMonodomainShort;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationPostprocessMonodomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationPostprocessMonodomain() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 290, "TestCardiacSimulationPostprocessMonodomain" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationPostprocessMonodomain(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationPostprocessMonodomain;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationArchiveBidomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationArchiveBidomain() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 302, "TestCardiacSimulationArchiveBidomain" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationArchiveBidomain(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationArchiveBidomain;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationResumeBidomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationResumeBidomain() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 324, "TestCardiacSimulationResumeBidomain" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationResumeBidomain(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationResumeBidomain;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationArchiveMonodomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationArchiveMonodomain() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 340, "TestCardiacSimulationArchiveMonodomain" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationArchiveMonodomain(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationArchiveMonodomain;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationResumeMonodomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationResumeMonodomain() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 362, "TestCardiacSimulationResumeMonodomain" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationResumeMonodomain(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationResumeMonodomain;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationArchiveDynamic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationArchiveDynamic() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 374, "TestCardiacSimulationArchiveDynamic" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationArchiveDynamic(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationArchiveDynamic;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationResumeMigration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationResumeMigration() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 422, "TestCardiacSimulationResumeMigration" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationResumeMigration(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationResumeMigration;

static class TestDescription_TestCardiacSimulation_TestResumeChangingSettings : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestResumeChangingSettings() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 527, "TestResumeChangingSettings" ) {}
 void runTest() { suite_TestCardiacSimulation.TestResumeChangingSettings(); }
} testDescription_TestCardiacSimulation_TestResumeChangingSettings;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationPatchwork : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationPatchwork() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 533, "TestCardiacSimulationPatchwork" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationPatchwork(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationPatchwork;

static class TestDescription_TestCardiacSimulation_TestCardiacSimulationKirsten : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestCardiacSimulationKirsten() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 547, "TestCardiacSimulationKirsten" ) {}
 void runTest() { suite_TestCardiacSimulation.TestCardiacSimulationKirsten(); }
} testDescription_TestCardiacSimulation_TestCardiacSimulationKirsten;

static class TestDescription_TestCardiacSimulation_TestTransmuralCellularheterogeneities : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestTransmuralCellularheterogeneities() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 562, "TestTransmuralCellularheterogeneities" ) {}
 void runTest() { suite_TestCardiacSimulation.TestTransmuralCellularheterogeneities(); }
} testDescription_TestCardiacSimulation_TestTransmuralCellularheterogeneities;

static class TestDescription_TestCardiacSimulation_TestElectrodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestElectrodes() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 571, "TestElectrodes" ) {}
 void runTest() { suite_TestCardiacSimulation.TestElectrodes(); }
} testDescription_TestCardiacSimulation_TestElectrodes;

static class TestDescription_TestCardiacSimulation_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestExceptions() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 580, "TestExceptions" ) {}
 void runTest() { suite_TestCardiacSimulation.TestExceptions(); }
} testDescription_TestCardiacSimulation_TestExceptions;

static class TestDescription_TestCardiacSimulation_TestDynamicallyLoadingCvodeCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacSimulation_TestDynamicallyLoadingCvodeCell() : CxxTest::RealTestDescription( Tests_TestCardiacSimulation, suiteDescription_TestCardiacSimulation, 610, "TestDynamicallyLoadingCvodeCell" ) {}
 void runTest() { suite_TestCardiacSimulation.TestDynamicallyLoadingCvodeCell(); }
} testDescription_TestCardiacSimulation_TestDynamicallyLoadingCvodeCell;

#include <cxxtest/Root.cpp>
