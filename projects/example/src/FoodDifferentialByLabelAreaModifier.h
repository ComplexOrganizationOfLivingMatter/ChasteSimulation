/*
 * FoodDifferentialByLabelAreaModifier.h
 *
 *  Created on: May 25, 2016
 *      Author: pablo
 */

#ifndef PROJECTS_EXAMPLE_SRC_FOODDIFFERENTIALBYLABELAREAMODIFIER_H_
#define PROJECTS_EXAMPLE_SRC_FOODDIFFERENTIALBYLABELAREAMODIFIER_H_

#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>
#include "AbstractCellBasedSimulationModifier.hpp"
#include "VertexBasedCellPopulation.hpp"

#include "AbstractTargetAreaModifier.hpp"

template<unsigned DIM>
class FoodDifferentialByLabelAreaModifier: public AbstractTargetAreaModifier<DIM> {
private:
	int cellularFood;

	/** Needed for serialization. */
	friend class boost::serialization::access;
	/**
	 * Boost Serialization method for archiving/checkpointing.
	 * Archives the object and its member variables.
	 *
	 * @param archive  The boost archive.
	 * @param version  The current version of this class.
	 */
	template<class Archive>
	void serialize(Archive & archive, const unsigned int version) {
		archive
				& boost::serialization::base_object<
						AbstractTargetAreaModifier<DIM> >(*this);
	}
public:

	FoodDifferentialByLabelAreaModifier();

	virtual ~FoodDifferentialByLabelAreaModifier();
	/**
	 * Helper method to update the target area property of an individual cell.
	 *
	 * @param pCell pointer to a cell
	 */
	void UpdateTargetAreaOfCell(const CellPtr pCell);

	/**
	     * Helper method to update the target area property of all cells in the population.
	     *
	     * @param rCellPopulation reference to the cell population
	     */
	    void UpdateTargetAreas(AbstractCellPopulation<DIM,DIM>& rCellPopulation);

	int GetCellularFood() const;

	void SetCellularFood(int cellularFood);

	void IncreaseCellularFood();

	void DecreaseCellularFood();
};


#include "SerializationExportWrapper.hpp"
EXPORT_TEMPLATE_CLASS_SAME_DIMS(FoodDifferentialByLabelAreaModifier)

#endif /* PROJECTS_EXAMPLE_SRC_FOODDIFFERENTIALBYLABELAREAMODIFIER_H_ */
