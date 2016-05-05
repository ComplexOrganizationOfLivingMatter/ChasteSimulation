//! @file
//! 
//! This source file was generated from CellML.
//! 
//! Model: tentusscher_model_2006_epi
//! 
//! Processed by pycml - CellML Tools in Python
//!     (translators: 25950, pycml: 25949, optimize: 25790)
//! on Thu May  5 09:12:45 2016
//! 
//! <autogenerated>

#include "TenTusscher2006Epi.hpp"
#include <cmath>
#include <cassert>
#include <memory>
#include "Exception.hpp"
#include "OdeSystemInformation.hpp"
#include "RegularStimulus.hpp"
#include "HeartConfig.hpp"
#include "IsNan.hpp"
#include "MathsCustomFunctions.hpp"

    boost::shared_ptr<RegularStimulus> CellTenTusscher2006EpiFromCellML::UseCellMLDefaultStimulus()
    {
        // Use the default stimulus specified by CellML metadata
        const double var_chaste_interface__membrane__stim_period = 1000.0; // millisecond
        const double var_chaste_interface__membrane__stim_duration = 1.0; // millisecond
        const double var_chaste_interface__membrane__stim_amplitude =  -52.0 * HeartConfig::Instance()->GetCapacitance(); // uA_per_cm2
        boost::shared_ptr<RegularStimulus> p_cellml_stim(new RegularStimulus(
                -fabs(var_chaste_interface__membrane__stim_amplitude),
                var_chaste_interface__membrane__stim_duration,
                var_chaste_interface__membrane__stim_period,
                0.0
                ));
        mpIntracellularStimulus = p_cellml_stim;
        return p_cellml_stim;
    }
    
    double CellTenTusscher2006EpiFromCellML::GetIntracellularCalciumConcentration()
    {
        return mStateVariables[13];
    }
    
    CellTenTusscher2006EpiFromCellML::CellTenTusscher2006EpiFromCellML(boost::shared_ptr<AbstractIvpOdeSolver> pSolver, boost::shared_ptr<AbstractStimulusFunction> pIntracellularStimulus)
        : AbstractCardiacCell(
                pSolver,
                19,
                0,
                pIntracellularStimulus)
    {
        // Time units: millisecond
        // 
        this->mpSystemInfo = OdeSystemInformation<CellTenTusscher2006EpiFromCellML>::Instance();
        Init();

        // We have a default stimulus specified in the CellML file metadata
        this->mHasDefaultStimulusFromCellML = true;
        this->mParameters[0] = 1.0; // (c,rapid_time_dependent_potassium_current__ScaleFactorGkr) [dimensionless]
        this->mParameters[1] = 1.0; // (c,slow_time_dependent_potassium_current__ScaleFactorGks) [dimensionless]
        this->mParameters[2] = 1.0; // (c,transient_outward_current__ScaleFactorIto) [dimensionless]
        this->mParameters[3] = 2; // (c,calcium_dynamics__Ca_o) [millimolar]
        this->mParameters[4] = 5.4; // (c,potassium_dynamics__K_o) [millimolar]
        this->mParameters[5] = 140; // (c,sodium_dynamics__Na_o) [millimolar]
    }
    
    CellTenTusscher2006EpiFromCellML::~CellTenTusscher2006EpiFromCellML()
    {
    }
    
    double CellTenTusscher2006EpiFromCellML::GetIIonic(const std::vector<double>* pStateVariables)
    {
        // For state variable interpolation (SVI) we read in interpolated state variables,
        // otherwise for ionic current interpolation (ICI) we use the state variables of this model (node).
        if (!pStateVariables) pStateVariables = &rGetStateVariables();
        const std::vector<double>& rY = *pStateVariables;
        double var_chaste_interface__membrane__V = (mSetVoltageDerivativeToZero ? this->mFixedVoltage : rY[0]);
        // Units: millivolt; Initial value: -85.23
        double var_chaste_interface__rapid_time_dependent_potassium_current_Xr1_gate__Xr1 = rY[1];
        // Units: dimensionless; Initial value: 0.00621
        double var_chaste_interface__rapid_time_dependent_potassium_current_Xr2_gate__Xr2 = rY[2];
        // Units: dimensionless; Initial value: 0.4712
        double var_chaste_interface__slow_time_dependent_potassium_current_Xs_gate__Xs = rY[3];
        // Units: dimensionless; Initial value: 0.0095
        double var_chaste_interface__fast_sodium_current_m_gate__m = rY[4];
        // Units: dimensionless; Initial value: 0.00172
        double var_chaste_interface__fast_sodium_current_h_gate__h = rY[5];
        // Units: dimensionless; Initial value: 0.7444
        double var_chaste_interface__fast_sodium_current_j_gate__j = rY[6];
        // Units: dimensionless; Initial value: 0.7045
        double var_chaste_interface__L_type_Ca_current_d_gate__d = rY[7];
        // Units: dimensionless; Initial value: 3.373e-5
        double var_chaste_interface__L_type_Ca_current_f_gate__f = rY[8];
        // Units: dimensionless; Initial value: 0.7888
        double var_chaste_interface__L_type_Ca_current_f2_gate__f2 = rY[9];
        // Units: dimensionless; Initial value: 0.9755
        double var_chaste_interface__L_type_Ca_current_fCass_gate__fCass = rY[10];
        // Units: dimensionless; Initial value: 0.9953
        double var_chaste_interface__transient_outward_current_s_gate__s = rY[11];
        // Units: dimensionless; Initial value: 0.999998
        double var_chaste_interface__transient_outward_current_r_gate__r = rY[12];
        // Units: dimensionless; Initial value: 2.42e-8
        double var_chaste_interface__calcium_dynamics__Ca_i = rY[13];
        // Units: millimolar; Initial value: 0.000126
        double var_chaste_interface__calcium_dynamics__Ca_ss = rY[15];
        // Units: millimolar; Initial value: 0.00036
        double var_chaste_interface__sodium_dynamics__Na_i = rY[17];
        // Units: millimolar; Initial value: 8.604
        double var_chaste_interface__potassium_dynamics__K_i = rY[18];
        // Units: millimolar; Initial value: 136.89
        
        const double var_reversal_potentials__E_K = 26.713760659695648 * log(mParameters[4] / var_chaste_interface__potassium_dynamics__K_i); // millivolt
        const double var_inward_rectifier_potassium_current__alpha_K1 = 0.10000000000000001 / (1.0 + exp(0.059999999999999998 * ((var_chaste_interface__membrane__V - var_reversal_potentials__E_K) - 200.0))); // dimensionless
        const double var_inward_rectifier_potassium_current__i_K1 = 5.4050000000000002 * (var_inward_rectifier_potassium_current__alpha_K1 / (var_inward_rectifier_potassium_current__alpha_K1 + (((3.0 * exp(0.00020000000000000001 * ((var_chaste_interface__membrane__V - var_reversal_potentials__E_K) + 100.0))) + exp(0.10000000000000001 * ((var_chaste_interface__membrane__V - var_reversal_potentials__E_K) - 10.0))) / (1.0 + exp( -0.5 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K)))))) * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K); // picoA_per_picoF
        const double var_transient_outward_current__i_to = mParameters[2] * 0.29399999999999998 * var_chaste_interface__transient_outward_current_r_gate__r * var_chaste_interface__transient_outward_current_s_gate__s * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K); // picoA_per_picoF
        const double var_rapid_time_dependent_potassium_current__i_Kr = mParameters[0] * 0.153 * sqrt(mParameters[4] * 0.18518518518518517) * var_chaste_interface__rapid_time_dependent_potassium_current_Xr1_gate__Xr1 * var_chaste_interface__rapid_time_dependent_potassium_current_Xr2_gate__Xr2 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K); // picoA_per_picoF
        const double var_slow_time_dependent_potassium_current__i_Ks = mParameters[1] * 0.39200000000000002 * pow(var_chaste_interface__slow_time_dependent_potassium_current_Xs_gate__Xs, 2.0) * (var_chaste_interface__membrane__V - (26.713760659695648 * log((mParameters[4] + (0.029999999999999999 * mParameters[5])) / (var_chaste_interface__potassium_dynamics__K_i + (0.029999999999999999 * var_chaste_interface__sodium_dynamics__Na_i))))); // picoA_per_picoF
        const double var_L_type_Ca_current__i_CaL = (((var_chaste_interface__L_type_Ca_current_d_gate__d * var_chaste_interface__L_type_Ca_current_f_gate__f * var_chaste_interface__L_type_Ca_current_f2_gate__f2 * var_chaste_interface__L_type_Ca_current_fCass_gate__fCass * (var_chaste_interface__membrane__V - 15.0) * 1482059.8429999622) * 3.8797490106562429e-07) * ((0.25 * var_chaste_interface__calcium_dynamics__Ca_ss * exp(((var_chaste_interface__membrane__V - 15.0) * 192970.68299999999) * 3.8797490106562429e-07)) - mParameters[3])) / (exp(((var_chaste_interface__membrane__V - 15.0) * 192970.68299999999) * 3.8797490106562429e-07) - 1.0); // picoA_per_picoF
        const double var_sodium_potassium_pump_current__i_NaK = ((((2.7240000000000002 * mParameters[4]) / (mParameters[4] + 1.0)) * var_chaste_interface__sodium_dynamics__Na_i) / (var_chaste_interface__sodium_dynamics__Na_i + 40.0)) / (1.0 + (0.1245 * exp((var_chaste_interface__membrane__V *  -9648.5341499999995) * 3.8797490106562429e-07)) + (0.035299999999999998 * exp(((-var_chaste_interface__membrane__V) * 96485.341499999995) * 3.8797490106562429e-07))); // picoA_per_picoF
        const double var_reversal_potentials__E_Na = 26.713760659695648 * log(mParameters[5] / var_chaste_interface__sodium_dynamics__Na_i); // millivolt
        const double var_fast_sodium_current__i_Na = 14.837999999999999 * pow(var_chaste_interface__fast_sodium_current_m_gate__m, 3.0) * var_chaste_interface__fast_sodium_current_h_gate__h * var_chaste_interface__fast_sodium_current_j_gate__j * (var_chaste_interface__membrane__V - var_reversal_potentials__E_Na); // picoA_per_picoF
        const double var_sodium_background_current__i_b_Na = 0.00029 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_Na); // picoA_per_picoF
        const double var_sodium_calcium_exchanger_current__i_NaCa = (1000.0 * ((exp((var_chaste_interface__membrane__V * 33769.869524999995) * 3.8797490106562429e-07) * pow(var_chaste_interface__sodium_dynamics__Na_i, 3.0) * mParameters[3]) - (exp((var_chaste_interface__membrane__V *  -62715.471975) * 3.8797490106562429e-07) * pow(mParameters[5], 3.0) * var_chaste_interface__calcium_dynamics__Ca_i * 2.5))) / ((669921.875 + pow(mParameters[5], 3.0)) * (1.3799999999999999 + mParameters[3]) * (1.0 + (0.10000000000000001 * exp((var_chaste_interface__membrane__V *  -62715.471975) * 3.8797490106562429e-07)))); // picoA_per_picoF
        const double var_calcium_background_current__i_b_Ca = 0.00059199999999999997 * (var_chaste_interface__membrane__V - (13.356880329847824 * log(mParameters[3] / var_chaste_interface__calcium_dynamics__Ca_i))); // picoA_per_picoF
        const double var_potassium_pump_current__i_p_K = (0.0146 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K)) / (1.0 + exp((25.0 - var_chaste_interface__membrane__V) * 0.16722408026755853)); // picoA_per_picoF
        const double var_calcium_pump_current__i_p_Ca = (0.12379999999999999 * var_chaste_interface__calcium_dynamics__Ca_i) / (var_chaste_interface__calcium_dynamics__Ca_i + 0.00050000000000000001); // picoA_per_picoF
        const double var_chaste_interface__i_ionic = (var_inward_rectifier_potassium_current__i_K1 + var_transient_outward_current__i_to + var_rapid_time_dependent_potassium_current__i_Kr + var_slow_time_dependent_potassium_current__i_Ks + var_L_type_Ca_current__i_CaL + var_sodium_potassium_pump_current__i_NaK + var_fast_sodium_current__i_Na + var_sodium_background_current__i_b_Na + var_sodium_calcium_exchanger_current__i_NaCa + var_calcium_background_current__i_b_Ca + var_potassium_pump_current__i_p_K + var_calcium_pump_current__i_p_Ca) * HeartConfig::Instance()->GetCapacitance(); // uA_per_cm2
        
        const double i_ionic = var_chaste_interface__i_ionic;
        EXCEPT_IF_NOT(!std::isnan(i_ionic));
        return i_ionic;
    }
    
    void CellTenTusscher2006EpiFromCellML::EvaluateYDerivatives(double var_chaste_interface__environment__time, const std::vector<double>& rY, std::vector<double>& rDY)
    {
        // Inputs:
        // Time units: millisecond
        double var_chaste_interface__membrane__V = (mSetVoltageDerivativeToZero ? this->mFixedVoltage : rY[0]);
        // Units: millivolt; Initial value: -85.23
        double var_chaste_interface__rapid_time_dependent_potassium_current_Xr1_gate__Xr1 = rY[1];
        // Units: dimensionless; Initial value: 0.00621
        double var_chaste_interface__rapid_time_dependent_potassium_current_Xr2_gate__Xr2 = rY[2];
        // Units: dimensionless; Initial value: 0.4712
        double var_chaste_interface__slow_time_dependent_potassium_current_Xs_gate__Xs = rY[3];
        // Units: dimensionless; Initial value: 0.0095
        double var_chaste_interface__fast_sodium_current_m_gate__m = rY[4];
        // Units: dimensionless; Initial value: 0.00172
        double var_chaste_interface__fast_sodium_current_h_gate__h = rY[5];
        // Units: dimensionless; Initial value: 0.7444
        double var_chaste_interface__fast_sodium_current_j_gate__j = rY[6];
        // Units: dimensionless; Initial value: 0.7045
        double var_chaste_interface__L_type_Ca_current_d_gate__d = rY[7];
        // Units: dimensionless; Initial value: 3.373e-5
        double var_chaste_interface__L_type_Ca_current_f_gate__f = rY[8];
        // Units: dimensionless; Initial value: 0.7888
        double var_chaste_interface__L_type_Ca_current_f2_gate__f2 = rY[9];
        // Units: dimensionless; Initial value: 0.9755
        double var_chaste_interface__L_type_Ca_current_fCass_gate__fCass = rY[10];
        // Units: dimensionless; Initial value: 0.9953
        double var_chaste_interface__transient_outward_current_s_gate__s = rY[11];
        // Units: dimensionless; Initial value: 0.999998
        double var_chaste_interface__transient_outward_current_r_gate__r = rY[12];
        // Units: dimensionless; Initial value: 2.42e-8
        double var_chaste_interface__calcium_dynamics__Ca_i = rY[13];
        // Units: millimolar; Initial value: 0.000126
        double var_chaste_interface__calcium_dynamics__Ca_SR = rY[14];
        // Units: millimolar; Initial value: 3.64
        double var_chaste_interface__calcium_dynamics__Ca_ss = rY[15];
        // Units: millimolar; Initial value: 0.00036
        double var_chaste_interface__calcium_dynamics__R_prime = rY[16];
        // Units: dimensionless; Initial value: 0.9073
        double var_chaste_interface__sodium_dynamics__Na_i = rY[17];
        // Units: millimolar; Initial value: 8.604
        double var_chaste_interface__potassium_dynamics__K_i = rY[18];
        // Units: millimolar; Initial value: 136.89
        
        
        // Mathematics
        double d_dt_chaste_interface__membrane__V;
        const double var_membrane__Cm = 0.185; // microF_per_cm2
        const double var_reversal_potentials__E_K = 26.713760659695648 * log(mParameters[4] / var_chaste_interface__potassium_dynamics__K_i); // millivolt
        const double var_inward_rectifier_potassium_current__alpha_K1 = 0.10000000000000001 / (1.0 + exp(0.059999999999999998 * ((var_chaste_interface__membrane__V - var_reversal_potentials__E_K) - 200.0))); // dimensionless
        const double var_inward_rectifier_potassium_current__i_K1 = 5.4050000000000002 * (var_inward_rectifier_potassium_current__alpha_K1 / (var_inward_rectifier_potassium_current__alpha_K1 + (((3.0 * exp(0.00020000000000000001 * ((var_chaste_interface__membrane__V - var_reversal_potentials__E_K) + 100.0))) + exp(0.10000000000000001 * ((var_chaste_interface__membrane__V - var_reversal_potentials__E_K) - 10.0))) / (1.0 + exp( -0.5 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K)))))) * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K); // picoA_per_picoF
        const double var_transient_outward_current__i_to = mParameters[2] * 0.29399999999999998 * var_chaste_interface__transient_outward_current_r_gate__r * var_chaste_interface__transient_outward_current_s_gate__s * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K); // picoA_per_picoF
        const double var_rapid_time_dependent_potassium_current__i_Kr = mParameters[0] * 0.153 * sqrt(mParameters[4] * 0.18518518518518517) * var_chaste_interface__rapid_time_dependent_potassium_current_Xr1_gate__Xr1 * var_chaste_interface__rapid_time_dependent_potassium_current_Xr2_gate__Xr2 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K); // picoA_per_picoF
        const double var_slow_time_dependent_potassium_current__i_Ks = mParameters[1] * 0.39200000000000002 * pow(var_chaste_interface__slow_time_dependent_potassium_current_Xs_gate__Xs, 2.0) * (var_chaste_interface__membrane__V - (26.713760659695648 * log((mParameters[4] + (0.029999999999999999 * mParameters[5])) / (var_chaste_interface__potassium_dynamics__K_i + (0.029999999999999999 * var_chaste_interface__sodium_dynamics__Na_i))))); // picoA_per_picoF
        const double var_L_type_Ca_current__i_CaL = (((var_chaste_interface__L_type_Ca_current_d_gate__d * var_chaste_interface__L_type_Ca_current_f_gate__f * var_chaste_interface__L_type_Ca_current_f2_gate__f2 * var_chaste_interface__L_type_Ca_current_fCass_gate__fCass * (var_chaste_interface__membrane__V - 15.0) * 1482059.8429999622) * 3.8797490106562429e-07) * ((0.25 * var_chaste_interface__calcium_dynamics__Ca_ss * exp(((var_chaste_interface__membrane__V - 15.0) * 192970.68299999999) * 3.8797490106562429e-07)) - mParameters[3])) / (exp(((var_chaste_interface__membrane__V - 15.0) * 192970.68299999999) * 3.8797490106562429e-07) - 1.0); // picoA_per_picoF
        const double var_sodium_potassium_pump_current__i_NaK = ((((2.7240000000000002 * mParameters[4]) / (mParameters[4] + 1.0)) * var_chaste_interface__sodium_dynamics__Na_i) / (var_chaste_interface__sodium_dynamics__Na_i + 40.0)) / (1.0 + (0.1245 * exp((var_chaste_interface__membrane__V *  -9648.5341499999995) * 3.8797490106562429e-07)) + (0.035299999999999998 * exp(((-var_chaste_interface__membrane__V) * 96485.341499999995) * 3.8797490106562429e-07))); // picoA_per_picoF
        const double var_reversal_potentials__E_Na = 26.713760659695648 * log(mParameters[5] / var_chaste_interface__sodium_dynamics__Na_i); // millivolt
        const double var_fast_sodium_current__i_Na = 14.837999999999999 * pow(var_chaste_interface__fast_sodium_current_m_gate__m, 3.0) * var_chaste_interface__fast_sodium_current_h_gate__h * var_chaste_interface__fast_sodium_current_j_gate__j * (var_chaste_interface__membrane__V - var_reversal_potentials__E_Na); // picoA_per_picoF
        const double var_sodium_background_current__i_b_Na = 0.00029 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_Na); // picoA_per_picoF
        const double var_sodium_calcium_exchanger_current__i_NaCa = (1000.0 * ((exp((var_chaste_interface__membrane__V * 33769.869524999995) * 3.8797490106562429e-07) * pow(var_chaste_interface__sodium_dynamics__Na_i, 3.0) * mParameters[3]) - (exp((var_chaste_interface__membrane__V *  -62715.471975) * 3.8797490106562429e-07) * pow(mParameters[5], 3.0) * var_chaste_interface__calcium_dynamics__Ca_i * 2.5))) / ((669921.875 + pow(mParameters[5], 3.0)) * (1.3799999999999999 + mParameters[3]) * (1.0 + (0.10000000000000001 * exp((var_chaste_interface__membrane__V *  -62715.471975) * 3.8797490106562429e-07)))); // picoA_per_picoF
        const double var_calcium_background_current__i_b_Ca = 0.00059199999999999997 * (var_chaste_interface__membrane__V - (13.356880329847824 * log(mParameters[3] / var_chaste_interface__calcium_dynamics__Ca_i))); // picoA_per_picoF
        const double var_potassium_pump_current__i_p_K = (0.0146 * (var_chaste_interface__membrane__V - var_reversal_potentials__E_K)) / (1.0 + exp((25.0 - var_chaste_interface__membrane__V) * 0.16722408026755853)); // picoA_per_picoF
        const double var_calcium_pump_current__i_p_Ca = (0.12379999999999999 * var_chaste_interface__calcium_dynamics__Ca_i) / (var_chaste_interface__calcium_dynamics__Ca_i + 0.00050000000000000001); // picoA_per_picoF
        const double var_chaste_interface__membrane__i_Stim = GetIntracellularAreaStimulus(var_chaste_interface__environment__time);
        const double var_calcium_dynamics__kcasr = 2.5 - (1.5 / (1.0 + pow(1.5 / var_chaste_interface__calcium_dynamics__Ca_SR, 2.0))); // dimensionless
        const double var_calcium_dynamics__k1 = 0.14999999999999999 / var_calcium_dynamics__kcasr; // per_millimolar2_per_millisecond
        const double var_calcium_dynamics__i_rel = 0.10199999999999999 * ((var_calcium_dynamics__k1 * pow(var_chaste_interface__calcium_dynamics__Ca_ss, 2.0) * var_chaste_interface__calcium_dynamics__R_prime) / (0.059999999999999998 + (var_calcium_dynamics__k1 * pow(var_chaste_interface__calcium_dynamics__Ca_ss, 2.0)))) * (var_chaste_interface__calcium_dynamics__Ca_SR - var_chaste_interface__calcium_dynamics__Ca_ss); // millimolar_per_millisecond
        const double var_calcium_dynamics__i_up = 0.0063749999999999996 / (1.0 + (6.2499999999999997e-08 / pow(var_chaste_interface__calcium_dynamics__Ca_i, 2.0))); // millimolar_per_millisecond
        const double var_calcium_dynamics__i_leak = 0.00036000000000000002 * (var_chaste_interface__calcium_dynamics__Ca_SR - var_chaste_interface__calcium_dynamics__Ca_i); // millimolar_per_millisecond
        const double var_calcium_dynamics__i_xfer = 0.0038 * (var_chaste_interface__calcium_dynamics__Ca_ss - var_chaste_interface__calcium_dynamics__Ca_i); // millimolar_per_millisecond
        const double var_potassium_dynamics__F = 96485.341499999995; // coulomb_per_millimole
        const double d_dt_chaste_interface__rapid_time_dependent_potassium_current_Xr1_gate__Xr1 = ((1.0 / (1.0 + exp(( -26.0 - var_chaste_interface__membrane__V) * 0.14285714285714285))) - var_chaste_interface__rapid_time_dependent_potassium_current_Xr1_gate__Xr1) / ((450.0 / (1.0 + exp(( -45.0 - var_chaste_interface__membrane__V) * 0.10000000000000001))) * (6.0 / (1.0 + exp((var_chaste_interface__membrane__V + 30.0) * 0.086956521739130432)))); // per_millisecond
        const double d_dt_chaste_interface__rapid_time_dependent_potassium_current_Xr2_gate__Xr2 = ((1.0 / (1.0 + exp((var_chaste_interface__membrane__V + 88.0) * 0.041666666666666664))) - var_chaste_interface__rapid_time_dependent_potassium_current_Xr2_gate__Xr2) / ((3.0 / (1.0 + exp(( -60.0 - var_chaste_interface__membrane__V) * 0.050000000000000003))) * (1.1200000000000001 / (1.0 + exp((var_chaste_interface__membrane__V - 60.0) * 0.050000000000000003)))); // per_millisecond
        const double d_dt_chaste_interface__slow_time_dependent_potassium_current_Xs_gate__Xs = ((1.0 / (1.0 + exp(( -5.0 - var_chaste_interface__membrane__V) * 0.071428571428571425))) - var_chaste_interface__slow_time_dependent_potassium_current_Xs_gate__Xs) / (((1400.0 / sqrt(1.0 + exp((5.0 - var_chaste_interface__membrane__V) * 0.16666666666666666))) * (1.0 / (1.0 + exp((var_chaste_interface__membrane__V - 35.0) * 0.066666666666666666)))) + 80.0); // per_millisecond
        const double d_dt_chaste_interface__fast_sodium_current_m_gate__m = ((1.0 / pow(1.0 + exp(( -56.859999999999999 - var_chaste_interface__membrane__V) * 0.11074197120708749), 2.0)) - var_chaste_interface__fast_sodium_current_m_gate__m) / ((1.0 / (1.0 + exp(( -60.0 - var_chaste_interface__membrane__V) * 0.20000000000000001))) * ((0.10000000000000001 / (1.0 + exp((var_chaste_interface__membrane__V + 35.0) * 0.20000000000000001))) + (0.10000000000000001 / (1.0 + exp((var_chaste_interface__membrane__V - 50.0) * 0.0050000000000000001))))); // per_millisecond
        const double d_dt_chaste_interface__fast_sodium_current_h_gate__h = ((1.0 / pow(1.0 + exp((var_chaste_interface__membrane__V + 71.549999999999997) * 0.13458950201884254), 2.0)) - var_chaste_interface__fast_sodium_current_h_gate__h) / (1.0 / (((var_chaste_interface__membrane__V <  -40.0) ? (0.057000000000000002 * exp((-(var_chaste_interface__membrane__V + 80.0)) * 0.14705882352941177)) : 0.0) + ((var_chaste_interface__membrane__V <  -40.0) ? ((2.7000000000000002 * exp(0.079000000000000001 * var_chaste_interface__membrane__V)) + (310000.0 * exp(0.34849999999999998 * var_chaste_interface__membrane__V))) : (0.77000000000000002 / (0.13 * (1.0 + exp((var_chaste_interface__membrane__V + 10.66) *  -0.0900900900900901))))))); // per_millisecond
        const double d_dt_chaste_interface__fast_sodium_current_j_gate__j = ((1.0 / pow(1.0 + exp((var_chaste_interface__membrane__V + 71.549999999999997) * 0.13458950201884254), 2.0)) - var_chaste_interface__fast_sodium_current_j_gate__j) / (1.0 / (((var_chaste_interface__membrane__V <  -40.0) ? (((( -25428.0 * exp(0.24440000000000001 * var_chaste_interface__membrane__V)) - (6.9480000000000002e-06 * exp( -0.043909999999999998 * var_chaste_interface__membrane__V))) * (var_chaste_interface__membrane__V + 37.780000000000001)) / (1.0 + exp(0.311 * (var_chaste_interface__membrane__V + 79.230000000000004)))) : 0.0) + ((var_chaste_interface__membrane__V <  -40.0) ? ((0.024240000000000001 * exp( -0.01052 * var_chaste_interface__membrane__V)) / (1.0 + exp( -0.13780000000000001 * (var_chaste_interface__membrane__V + 40.140000000000001)))) : ((0.59999999999999998 * exp(0.057000000000000002 * var_chaste_interface__membrane__V)) / (1.0 + exp( -0.10000000000000001 * (var_chaste_interface__membrane__V + 32.0))))))); // per_millisecond
        const double d_dt_chaste_interface__L_type_Ca_current_d_gate__d = ((1.0 / (1.0 + exp(( -8.0 - var_chaste_interface__membrane__V) * 0.13333333333333333))) - var_chaste_interface__L_type_Ca_current_d_gate__d) / ((((1.3999999999999999 / (1.0 + exp(( -35.0 - var_chaste_interface__membrane__V) * 0.076923076923076927))) + 0.25) * (1.3999999999999999 / (1.0 + exp((var_chaste_interface__membrane__V + 5.0) * 0.20000000000000001)))) + (1.0 / (1.0 + exp((50.0 - var_chaste_interface__membrane__V) * 0.050000000000000003)))); // per_millisecond
        const double d_dt_chaste_interface__L_type_Ca_current_f_gate__f = ((1.0 / (1.0 + exp((var_chaste_interface__membrane__V + 20.0) * 0.14285714285714285))) - var_chaste_interface__L_type_Ca_current_f_gate__f) / ((1102.5 * exp((-pow(var_chaste_interface__membrane__V + 27.0, 2.0)) * 0.0044444444444444444)) + (200.0 / (1.0 + exp((13.0 - var_chaste_interface__membrane__V) * 0.10000000000000001))) + (180.0 / (1.0 + exp((var_chaste_interface__membrane__V + 30.0) * 0.10000000000000001))) + 20.0); // per_millisecond
        const double d_dt_chaste_interface__L_type_Ca_current_f2_gate__f2 = (((0.67000000000000004 / (1.0 + exp((var_chaste_interface__membrane__V + 35.0) * 0.14285714285714285))) + 0.33000000000000002) - var_chaste_interface__L_type_Ca_current_f2_gate__f2) / ((562.0 * exp((-pow(var_chaste_interface__membrane__V + 27.0, 2.0)) * 0.0041666666666666666)) + (31.0 / (1.0 + exp((25.0 - var_chaste_interface__membrane__V) * 0.10000000000000001))) + (80.0 / (1.0 + exp((var_chaste_interface__membrane__V + 30.0) * 0.10000000000000001)))); // per_millisecond
        const double d_dt_chaste_interface__L_type_Ca_current_fCass_gate__fCass = (((0.59999999999999998 / (1.0 + pow(var_chaste_interface__calcium_dynamics__Ca_ss * 20.0, 2.0))) + 0.40000000000000002) - var_chaste_interface__L_type_Ca_current_fCass_gate__fCass) / ((80.0 / (1.0 + pow(var_chaste_interface__calcium_dynamics__Ca_ss * 20.0, 2.0))) + 2.0); // per_millisecond
        const double d_dt_chaste_interface__transient_outward_current_s_gate__s = ((1.0 / (1.0 + exp((var_chaste_interface__membrane__V + 20.0) * 0.20000000000000001))) - var_chaste_interface__transient_outward_current_s_gate__s) / ((85.0 * exp((-pow(var_chaste_interface__membrane__V + 45.0, 2.0)) * 0.0031250000000000002)) + (5.0 / (1.0 + exp((var_chaste_interface__membrane__V - 20.0) * 0.20000000000000001))) + 3.0); // per_millisecond
        const double d_dt_chaste_interface__transient_outward_current_r_gate__r = ((1.0 / (1.0 + exp((20.0 - var_chaste_interface__membrane__V) * 0.16666666666666666))) - var_chaste_interface__transient_outward_current_r_gate__r) / ((9.5 * exp((-pow(var_chaste_interface__membrane__V + 40.0, 2.0)) * 0.00055555555555555556)) + 0.80000000000000004); // per_millisecond
        const double d_dt_chaste_interface__calcium_dynamics__Ca_i = (1.0 / (1.0 + (0.00020000000000000001 / pow(var_chaste_interface__calcium_dynamics__Ca_i + 0.001, 2.0)))) * (((((var_calcium_dynamics__i_leak - var_calcium_dynamics__i_up) * 0.0010939999999999999) * 60.960741282614002) + var_calcium_dynamics__i_xfer) - ((((var_calcium_background_current__i_b_Ca + var_calcium_pump_current__i_p_Ca) - (2.0 * var_sodium_calcium_exchanger_current__i_NaCa)) * var_membrane__Cm) * 0.00031590674984870111)); // 'millimole per litre per millisecond'
        const double d_dt_chaste_interface__calcium_dynamics__Ca_SR = (1.0 / (1.0 + (3.0 / pow(var_chaste_interface__calcium_dynamics__Ca_SR + 0.29999999999999999, 2.0)))) * (var_calcium_dynamics__i_up - (var_calcium_dynamics__i_rel + var_calcium_dynamics__i_leak)); // 'millimole per litre per millisecond'
        const double d_dt_chaste_interface__calcium_dynamics__Ca_ss = (1.0 / (1.0 + (0.0001 / pow(var_chaste_interface__calcium_dynamics__Ca_ss + 0.00025000000000000001, 2.0)))) * (((((-var_L_type_Ca_current__i_CaL) * var_membrane__Cm) * 0.094772024954610345) + ((var_calcium_dynamics__i_rel * 0.0010939999999999999) * 18288.2223847842)) - ((var_calcium_dynamics__i_xfer * 0.016403999999999998) * 18288.2223847842)); // 'millimole per litre per millisecond'
        const double d_dt_chaste_interface__calcium_dynamics__R_prime = ((-(0.044999999999999998 * var_calcium_dynamics__kcasr)) * var_chaste_interface__calcium_dynamics__Ca_ss * var_chaste_interface__calcium_dynamics__R_prime) + (0.0050000000000000001 * (1.0 - var_chaste_interface__calcium_dynamics__R_prime)); // per_millisecond
        const double d_dt_chaste_interface__sodium_dynamics__Na_i = ((-(var_fast_sodium_current__i_Na + var_sodium_background_current__i_b_Na + (3.0 * var_sodium_potassium_pump_current__i_NaK) + (3.0 * var_sodium_calcium_exchanger_current__i_NaCa))) * 0.00063181349969740222) * var_membrane__Cm; // 'millimole per litre per millisecond'
        const double d_dt_chaste_interface__potassium_dynamics__K_i = ((-((var_inward_rectifier_potassium_current__i_K1 + var_transient_outward_current__i_to + var_rapid_time_dependent_potassium_current__i_Kr + var_slow_time_dependent_potassium_current__i_Ks + var_potassium_pump_current__i_p_K + (var_chaste_interface__membrane__i_Stim / HeartConfig::Instance()->GetCapacitance())) - (2.0 * var_sodium_potassium_pump_current__i_NaK))) / (0.016403999999999998 * var_potassium_dynamics__F)) * var_membrane__Cm; // 'millimole per litre per millisecond'
        
        if (mSetVoltageDerivativeToZero)
        {
            d_dt_chaste_interface__membrane__V = 0.0;
        }
        else
        {
            d_dt_chaste_interface__membrane__V =  -1.0 * (var_inward_rectifier_potassium_current__i_K1 + var_transient_outward_current__i_to + var_rapid_time_dependent_potassium_current__i_Kr + var_slow_time_dependent_potassium_current__i_Ks + var_L_type_Ca_current__i_CaL + var_sodium_potassium_pump_current__i_NaK + var_fast_sodium_current__i_Na + var_sodium_background_current__i_b_Na + var_sodium_calcium_exchanger_current__i_NaCa + var_calcium_background_current__i_b_Ca + var_potassium_pump_current__i_p_K + var_calcium_pump_current__i_p_Ca + (var_chaste_interface__membrane__i_Stim / HeartConfig::Instance()->GetCapacitance())); // 'millivolt per millisecond'
        }
        
        rDY[0] = d_dt_chaste_interface__membrane__V;
        rDY[1] = d_dt_chaste_interface__rapid_time_dependent_potassium_current_Xr1_gate__Xr1;
        rDY[2] = d_dt_chaste_interface__rapid_time_dependent_potassium_current_Xr2_gate__Xr2;
        rDY[3] = d_dt_chaste_interface__slow_time_dependent_potassium_current_Xs_gate__Xs;
        rDY[4] = d_dt_chaste_interface__fast_sodium_current_m_gate__m;
        rDY[5] = d_dt_chaste_interface__fast_sodium_current_h_gate__h;
        rDY[6] = d_dt_chaste_interface__fast_sodium_current_j_gate__j;
        rDY[7] = d_dt_chaste_interface__L_type_Ca_current_d_gate__d;
        rDY[8] = d_dt_chaste_interface__L_type_Ca_current_f_gate__f;
        rDY[9] = d_dt_chaste_interface__L_type_Ca_current_f2_gate__f2;
        rDY[10] = d_dt_chaste_interface__L_type_Ca_current_fCass_gate__fCass;
        rDY[11] = d_dt_chaste_interface__transient_outward_current_s_gate__s;
        rDY[12] = d_dt_chaste_interface__transient_outward_current_r_gate__r;
        rDY[13] = d_dt_chaste_interface__calcium_dynamics__Ca_i;
        rDY[14] = d_dt_chaste_interface__calcium_dynamics__Ca_SR;
        rDY[15] = d_dt_chaste_interface__calcium_dynamics__Ca_ss;
        rDY[16] = d_dt_chaste_interface__calcium_dynamics__R_prime;
        rDY[17] = d_dt_chaste_interface__sodium_dynamics__Na_i;
        rDY[18] = d_dt_chaste_interface__potassium_dynamics__K_i;
    }
    
    std::vector<double> CellTenTusscher2006EpiFromCellML::ComputeDerivedQuantities(double var_chaste_interface__environment__time, const std::vector<double> & rY)
    {
        // Inputs:
        // Time units: millisecond
        
        
        // Mathematics
        const double var_potassium_dynamics__F = 96485.341499999995; // coulomb_per_millimole
        
        std::vector<double> dqs(1);
        dqs[0] = var_potassium_dynamics__F;
        return dqs;
    }
    
template<>
void OdeSystemInformation<CellTenTusscher2006EpiFromCellML>::Initialise(void)
{
    this->mSystemName = "tentusscher_model_2006_epi";
    this->mFreeVariableName = "environment__time";
    this->mFreeVariableUnits = "millisecond";
    
    this->mVariableNames.push_back("membrane__V");
    this->mVariableUnits.push_back("millivolt");
    this->mInitialConditions.push_back(-85.23);

    this->mVariableNames.push_back("rapid_time_dependent_potassium_current_Xr1_gate__Xr1");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.00621);

    this->mVariableNames.push_back("rapid_time_dependent_potassium_current_Xr2_gate__Xr2");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.4712);

    this->mVariableNames.push_back("slow_time_dependent_potassium_current_Xs_gate__Xs");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.0095);

    this->mVariableNames.push_back("fast_sodium_current_m_gate__m");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.00172);

    this->mVariableNames.push_back("fast_sodium_current_h_gate__h");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.7444);

    this->mVariableNames.push_back("fast_sodium_current_j_gate__j");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.7045);

    this->mVariableNames.push_back("L_type_Ca_current_d_gate__d");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(3.373e-5);

    this->mVariableNames.push_back("L_type_Ca_current_f_gate__f");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.7888);

    this->mVariableNames.push_back("L_type_Ca_current_f2_gate__f2");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.9755);

    this->mVariableNames.push_back("L_type_Ca_current_fCass_gate__fCass");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.9953);

    this->mVariableNames.push_back("transient_outward_current_s_gate__s");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.999998);

    this->mVariableNames.push_back("transient_outward_current_r_gate__r");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(2.42e-8);

    this->mVariableNames.push_back("cytosolic_calcium_concentration");
    this->mVariableUnits.push_back("millimolar");
    this->mInitialConditions.push_back(0.000126);

    this->mVariableNames.push_back("calcium_dynamics__Ca_SR");
    this->mVariableUnits.push_back("millimolar");
    this->mInitialConditions.push_back(3.64);

    this->mVariableNames.push_back("calcium_dynamics__Ca_ss");
    this->mVariableUnits.push_back("millimolar");
    this->mInitialConditions.push_back(0.00036);

    this->mVariableNames.push_back("calcium_dynamics__R_prime");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.9073);

    this->mVariableNames.push_back("cytosolic_sodium_concentration");
    this->mVariableUnits.push_back("millimolar");
    this->mInitialConditions.push_back(8.604);

    this->mVariableNames.push_back("cytosolic_potassium_concentration");
    this->mVariableUnits.push_back("millimolar");
    this->mInitialConditions.push_back(136.89);

    this->mParameterNames.push_back("ScaleFactorGkr");
    this->mParameterUnits.push_back("dimensionless");
    
    this->mParameterNames.push_back("ScaleFactorGks");
    this->mParameterUnits.push_back("dimensionless");
    
    this->mParameterNames.push_back("ScaleFactorIto");
    this->mParameterUnits.push_back("dimensionless");
    
    this->mParameterNames.push_back("extracellular_calcium_concentration");
    this->mParameterUnits.push_back("millimolar");
    
    this->mParameterNames.push_back("extracellular_potassium_concentration");
    this->mParameterUnits.push_back("millimolar");
    
    this->mParameterNames.push_back("extracellular_sodium_concentration");
    this->mParameterUnits.push_back("millimolar");
    
    this->mDerivedQuantityNames.push_back("K_F");
    this->mDerivedQuantityUnits.push_back("coulomb_per_millimole");
    
    this->mInitialised = true;
}


// Serialization for Boost >= 1.36
#include "SerializationExportWrapperForCpp.hpp"
CHASTE_CLASS_EXPORT(CellTenTusscher2006EpiFromCellML)
