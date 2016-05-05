#ifndef CELLHODGKINHUXLEY1952FROMCELLML_HPP_
#define CELLHODGKINHUXLEY1952FROMCELLML_HPP_

//! @file
//! 
//! This source file was generated from CellML.
//! 
//! Model: hodgkin_huxley_squid_axon_model_1952_modified
//! 
//! Processed by pycml - CellML Tools in Python
//!     (translators: 25950, pycml: 25949, optimize: 25790)
//! on Thu May  5 09:16:02 2016
//! 
//! <autogenerated>

#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>
#include "AbstractCardiacCell.hpp"
#include "AbstractStimulusFunction.hpp"

class CellHodgkinHuxley1952FromCellML : public AbstractCardiacCell
{
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & archive, const unsigned int version)
    {
        archive & boost::serialization::base_object<AbstractCardiacCell >(*this);
    }
    
    // 
    // Settable parameters and readable variables
    // 
    
public:
    CellHodgkinHuxley1952FromCellML(boost::shared_ptr<AbstractIvpOdeSolver> pSolver, boost::shared_ptr<AbstractStimulusFunction> pIntracellularStimulus);
    ~CellHodgkinHuxley1952FromCellML();
    double GetIIonic(const std::vector<double>* pStateVariables=NULL);
    void EvaluateYDerivatives(double var_chaste_interface__environment__time, const std::vector<double>& rY, std::vector<double>& rDY);
};


// Needs to be included last
#include "SerializationExportWrapper.hpp"
CHASTE_CLASS_EXPORT(CellHodgkinHuxley1952FromCellML)

namespace boost
{
    namespace serialization
    {
        template<class Archive>
        inline void save_construct_data(
            Archive & ar, const CellHodgkinHuxley1952FromCellML * t, const unsigned int fileVersion)
        {
            const boost::shared_ptr<AbstractIvpOdeSolver> p_solver = t->GetSolver();
            const boost::shared_ptr<AbstractStimulusFunction> p_stimulus = t->GetStimulusFunction();
            ar << p_solver;
            ar << p_stimulus;
        }
        
        template<class Archive>
        inline void load_construct_data(
            Archive & ar, CellHodgkinHuxley1952FromCellML * t, const unsigned int fileVersion)
        {
            boost::shared_ptr<AbstractIvpOdeSolver> p_solver;
            boost::shared_ptr<AbstractStimulusFunction> p_stimulus;
            ar >> p_solver;
            ar >> p_stimulus;
            ::new(t)CellHodgkinHuxley1952FromCellML(p_solver, p_stimulus);
        }
        
    }
    
}

#endif // CELLHODGKINHUXLEY1952FROMCELLML_HPP_
