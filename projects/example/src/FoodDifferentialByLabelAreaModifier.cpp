/*
 * FoodDifferentialByLabelAreaModifier.cpp
 *
 *  Created on: May 25, 2016
 *      Author: pablo
 */

#include <projects/example/src/FoodDifferentialByLabelAreaModifier.h>
#include "ApoptoticCellProperty.hpp"

const double cAreaIdeal = 0.866025;

template<unsigned DIM>
FoodDifferentialByLabelAreaModifier<DIM>::FoodDifferentialByLabelAreaModifier() :
		AbstractTargetAreaModifier<DIM>() {
	// TODO Auto-generated constructor stub
	cellularFood = 5000;
}

template<unsigned DIM>
FoodDifferentialByLabelAreaModifier<DIM>::~FoodDifferentialByLabelAreaModifier() {
	// TODO Auto-generated destructor stub
}

template<unsigned DIM>
void FoodDifferentialByLabelAreaModifier<DIM>::UpdateTargetAreaOfCell(
		CellPtr pCell) {
	// Get target area A of a healthy cell in S, G2 or M phase
	double cell_target_area = this->mReferenceTargetArea;
	//std::cout<<GetCellularFood()<<std::endl;

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
		if (pCell->template HasCellProperty<CellLabel>()) {
			double cell_age = pCell->GetAge();
			double growth_start_time = 10;
			AbstractCellCycleModel* p_model = pCell->GetCellCycleModel();

			//std::cout<<"edad: "<< cell_age <<" "<< growth_start_time<<std::endl;
			// The target area of a proliferating cell increases linearly from A to 2A over the course of the G2 phase
			if (cell_age > growth_start_time) {
				if (GetCellularFood() > 1) {
					double g2_duration = p_model->GetG2Duration();
					cell_target_area *=
							(1
									+ (cell_age - growth_start_time)
											/ g2_duration);
					DecreaseCellularFood();
					DecreaseCellularFood();

					if (pCell->template HasCellProperty<ApoptoticCellProperty>()) {
						pCell->template RemoveCellProperty<ApoptoticCellProperty>();
					}
				} else {
					MAKE_PTR(ApoptoticCellProperty, apoptotic);
					pCell->AddCellProperty(apoptotic);
				}
			}
		} else {
			double cell_age = pCell->GetAge();
			double growth_start_time = 20;
			AbstractCellCycleModel* p_model = pCell->GetCellCycleModel();

			//std::cout<<"edad: "<< cell_age <<" "<< growth_start_time<<std::endl;
			// The target area of a proliferating cell increases linearly from A to 2A over the course of the G2 phase
			if (cell_age > growth_start_time) {
				double g2_duration = p_model->GetG2Duration();
				cell_target_area *= (1 + (cell_age - growth_start_time) / g2_duration);
			}
			IncreaseCellularFood();
		}

		/**
		 * At division, daughter cells inherit the cell data array from the mother cell.
		 * Here, we assign the target area that we want daughter cells to have to cells
		 * that we know to divide in this time step.
		 *
		 * \todo This is a little hack that we might want to clean up in the future.
		 */
		if (pCell->ReadyToDivide()) {
			cell_target_area = cAreaIdeal;
		}
	}

	// Set cell data
	pCell->GetCellData()->SetItem("target area", cell_target_area);
}

template<unsigned DIM>
int FoodDifferentialByLabelAreaModifier<DIM>::GetCellularFood() const {
	return cellularFood;
}

template<unsigned DIM>
void FoodDifferentialByLabelAreaModifier<DIM>::SetCellularFood(
		int cellularFood) {
	this->cellularFood = cellularFood;
}

template<unsigned DIM>
void FoodDifferentialByLabelAreaModifier<DIM>::DecreaseCellularFood() {
	this->cellularFood--;
}

template<unsigned DIM>
void FoodDifferentialByLabelAreaModifier<DIM>::IncreaseCellularFood() {
	this->cellularFood++;
}

// Explicit instantiation
template class FoodDifferentialByLabelAreaModifier<1> ;
template class FoodDifferentialByLabelAreaModifier<2> ;
template class FoodDifferentialByLabelAreaModifier<3> ;

// Serialization for Boost >= 1.36
#include "SerializationExportWrapperForCpp.hpp"
EXPORT_TEMPLATE_CLASS_SAME_DIMS(FoodDifferentialByLabelAreaModifier)
