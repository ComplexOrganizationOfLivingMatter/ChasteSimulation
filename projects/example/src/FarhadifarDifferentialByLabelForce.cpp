/*
 * FarhadifarDifferentialByLabelForce.cpp
 *
 *  Created on: May 18, 2016
 *      Author: Palo Vicente-Munuera
 */

#include <projects/example/src/FarhadifarDifferentialByLabelForce.h>

template<unsigned DIM>
FarhadifarDifferentialByLabelForce<DIM>::FarhadifarDifferentialByLabelForce() :
		FarhadifarForce<DIM>(), mAreaElasticityCellLabelledParameter(1.0), // These parameters are Case I in Farhadifar's paper
		mPerimeterContractilityCellLabelledParameter(0.04), mLineTensionCellLabelledParameter(
				0.12), mBoundaryLineTensionCellLabelledParameter(0.12) // this parameter as such does not exist in Farhadifar's model.
{
	// TODO Auto-generated constructor stub
}

template<unsigned DIM>
FarhadifarDifferentialByLabelForce<DIM>::~FarhadifarDifferentialByLabelForce() {
	// TODO Auto-generated destructor stub
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetLineTensionParameter(
		Node<DIM>* pNodeA, Node<DIM>* pNodeB,
		VertexBasedCellPopulation<DIM>& rVertexCellPopulation) {
	// Find the indices of the elements owned by each node
	std::set<unsigned> elements_containing_nodeA =
			pNodeA->rGetContainingElementIndices();
	std::set<unsigned> elements_containing_nodeB =
			pNodeB->rGetContainingElementIndices();

	// Find common elements
	std::set<unsigned> shared_elements;
	std::set_intersection(elements_containing_nodeA.begin(),
			elements_containing_nodeA.end(), elements_containing_nodeB.begin(),
			elements_containing_nodeB.end(),
			std::inserter(shared_elements, shared_elements.begin()));

	// Check that the nodes have a common edge
	assert(!shared_elements.empty());

	// Since each internal edge is visited twice in the loop above, we have to use half the line tension parameter
	// for each visit.

	double line_tension_parameter_in_calculation = 0.0;

	unsigned element_index = *(shared_elements.begin());

	// Get cell associated with this element
	CellPtr p_cell = rVertexCellPopulation.GetCellUsingLocationIndex(
			element_index);

	if (p_cell->template HasCellProperty<CellLabel>()) {

		line_tension_parameter_in_calculation =
				GetLineTensionCellLabelledParameter() / 2.0;

		// If the edge corresponds to a single element, then the cell is on the boundary
		if (shared_elements.size() == 1) {
			line_tension_parameter_in_calculation =
					GetBoundaryLineTensionCellLabelledParameter();
		}
	} else {
		line_tension_parameter_in_calculation = GetLineTensionFatherParameter() / 2.0;

		// If the edge corresponds to a single element, then the cell is on the boundary
		if (shared_elements.size() == 1) {
			line_tension_parameter_in_calculation =
					this->GetBoundaryLineTensionParameter();
		}
	}

	return line_tension_parameter_in_calculation;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetAreaElasticityCellLabelledParameter() const {
	return mAreaElasticityCellLabelledParameter;
}
template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetAreaElasticityCellLabelledParameter(
		double areaElasticityCellLabelledParameter) {
	mAreaElasticityCellLabelledParameter = areaElasticityCellLabelledParameter;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetBoundaryLineTensionCellLabelledParameter() const {
	return mBoundaryLineTensionCellLabelledParameter;
}

template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetBoundaryLineTensionCellLabelledParameter(
		double boundaryLineTensionCellLabelledParameter) {
	mBoundaryLineTensionCellLabelledParameter =
			boundaryLineTensionCellLabelledParameter;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetLineTensionCellLabelledParameter() const {
	return mLineTensionCellLabelledParameter;
}

template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetLineTensionCellLabelledParameter(
		double lineTensionCellLabelledParameter) {
	mLineTensionCellLabelledParameter = lineTensionCellLabelledParameter;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetPerimeterContractilityCellLabelledParameter() const {
	return mPerimeterContractilityCellLabelledParameter;
}

template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetPerimeterContractilityCellLabelledParameter(
		double perimeterContractilityCellLabelledParameter) {
	mPerimeterContractilityCellLabelledParameter =
			perimeterContractilityCellLabelledParameter;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetLineTensionFatherParameter() const{
	return this->mLineTensionParameter;
}


// Explicit instantiation
template class FarhadifarDifferentialByLabelForce<1>;
template class FarhadifarDifferentialByLabelForce<2>;
template class FarhadifarDifferentialByLabelForce<3>;

// Serialization for Boost >= 1.36
#include "SerializationExportWrapperForCpp.hpp"
EXPORT_TEMPLATE_CLASS_SAME_DIMS(FarhadifarDifferentialByLabelForce)
