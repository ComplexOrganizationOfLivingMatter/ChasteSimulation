/*
 * FoodDifferentialByLabelAreaModifier.cpp
 *
 *  Created on: May 25, 2016
 *      Author: pablo
 */

#include <projects/example/src/FoodDifferentialByLabelAreaModifier.h>

template<unsigned DIM>
FoodDifferentialByLabelAreaModifier<DIM>::FoodDifferentialByLabelAreaModifier() :
		AbstractTargetAreaModifier<DIM>() {
	// TODO Auto-generated constructor stub

}

template<unsigned DIM>
FoodDifferentialByLabelAreaModifier<DIM>::~FoodDifferentialByLabelAreaModifier() {
	// TODO Auto-generated destructor stub
}

template<unsigned DIM>
void FoodDifferentialByLabelAreaModifier<DIM>::UpdateTargetAreaOfCell(CellPtr pCell) {
	// Get target area A of a healthy cell in S, G2 or M phase
	double cell_target_area = this->mReferenceTargetArea;

	if (pCell->HasCellProperty<ApoptoticCellProperty>()) {
		// The target area of an apoptotic cell decreases linearly to zero (and past it negative)
		///\todo: which cells are apoptotic? if they get apoptotic during G2-phase then this line has to be changed
		cell_target_area = cell_target_area
				- 0.5 * cell_target_area / (pCell->GetApoptosisTime())
						* (SimulationTime::Instance()->GetTime()
								- pCell->GetStartOfApoptosisTime());

		// Don't allow a negative target area
		if (cell_target_area < 0) {
			cell_target_area = 0;
		}
	} else {
		double cell_age = pCell->GetAge();

		// Get the combined duration of the cell's M, G1 and S phases
		AbstractCellCycleModel* p_model = pCell->GetCellCycleModel();
		double growth_start_time = p_model->GetMDuration()
				+ p_model->GetG1Duration() + p_model->GetSDuration();

		// The target area of a proliferating cell increases linearly from A to 2A over the course of the G2 phase
		if (cell_age > growth_start_time) {
			double g2_duration = p_model->GetG2Duration();
			cell_target_area *= (1
					+ (cell_age - growth_start_time) / g2_duration);
		}

		/**
		 * At division, daughter cells inherit the cell data array from the mother cell.
		 * Here, we assign the target area that we want daughter cells to have to cells
		 * that we know to divide in this time step.
		 *
		 * \todo This is a little hack that we might want to clean up in the future.
		 */
		if (pCell->ReadyToDivide()) {
			cell_target_area = this->mReferenceTargetArea;
		}
	}

	// Set cell data
	pCell->GetCellData()->SetItem("target area", cell_target_area);
}

// Explicit instantiation
template class FoodDifferentialByLabelAreaModifier<1> ;
template class FoodDifferentialByLabelAreaModifier<2> ;
template class FoodDifferentialByLabelAreaModifier<3> ;

// Serialization for Boost >= 1.36
#include "SerializationExportWrapperForCpp.hpp"
EXPORT_TEMPLATE_CLASS_SAME_DIMS(FoodDifferentialByLabelAreaModifier)
