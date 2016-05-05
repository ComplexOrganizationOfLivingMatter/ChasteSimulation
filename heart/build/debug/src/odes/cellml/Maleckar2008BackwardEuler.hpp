#ifndef CELLMALECKAR2008FROMCELLMLBACKWARDEULER_HPP_
#define CELLMALECKAR2008FROMCELLMLBACKWARDEULER_HPP_

//! @file
//! 
//! This source file was generated from CellML.
//! 
//! Model: Maleckar2008
//! 
//! Processed by pycml - CellML Tools in Python
//!     (translators: 25950, pycml: 25949, optimize: 25790)
//! on Thu May  5 09:12:20 2016
//! 
//! <autogenerated>

#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>
#include "AbstractBackwardEulerCardiacCell.hpp"
#include "AbstractStimulusFunction.hpp"

class CellMaleckar2008FromCellMLBackwardEuler : public AbstractBackwardEulerCardiacCell<17>
{
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & archive, const unsigned int version)
    {
        archive & boost::serialization::base_object<AbstractBackwardEulerCardiacCell<17> >(*this);
    }
    
    // 
    // Settable parameters and readable variables
    // 
    
public:
    boost::shared_ptr<RegularStimulus> UseCellMLDefaultStimulus();
    CellMaleckar2008FromCellMLBackwardEuler(boost::shared_ptr<AbstractIvpOdeSolver> /* unused; should be empty */, boost::shared_ptr<AbstractStimulusFunction> pIntracellularStimulus);
    ~CellMaleckar2008FromCellMLBackwardEuler();
    AbstractLookupTableCollection* GetLookupTableCollection();
    double GetIIonic(const std::vector<double>* pStateVariables=NULL);
    void ComputeResidual(double var_chaste_interface__environment__time, const double rCurrentGuess[17], double rResidual[17]);
    void ComputeJacobian(double var_chaste_interface__environment__time, const double rCurrentGuess[17], double rJacobian[17][17]);
protected:
    void UpdateTransmembranePotential(double var_chaste_interface__environment__time);
    void ComputeOneStepExceptVoltage(double var_chaste_interface__environment__time);
};


// Needs to be included last
#include "SerializationExportWrapper.hpp"
CHASTE_CLASS_EXPORT(CellMaleckar2008FromCellMLBackwardEuler)

namespace boost
{
    namespace serialization
    {
        template<class Archive>
        inline void save_construct_data(
            Archive & ar, const CellMaleckar2008FromCellMLBackwardEuler * t, const unsigned int fileVersion)
        {
            const boost::shared_ptr<AbstractIvpOdeSolver> p_solver = t->GetSolver();
            const boost::shared_ptr<AbstractStimulusFunction> p_stimulus = t->GetStimulusFunction();
            ar << p_solver;
            ar << p_stimulus;
        }
        
        template<class Archive>
        inline void load_construct_data(
            Archive & ar, CellMaleckar2008FromCellMLBackwardEuler * t, const unsigned int fileVersion)
        {
            boost::shared_ptr<AbstractIvpOdeSolver> p_solver;
            boost::shared_ptr<AbstractStimulusFunction> p_stimulus;
            ar >> p_solver;
            ar >> p_stimulus;
            ::new(t)CellMaleckar2008FromCellMLBackwardEuler(p_solver, p_stimulus);
        }
        
    }
    
}

#endif // CELLMALECKAR2008FROMCELLMLBACKWARDEULER_HPP_
