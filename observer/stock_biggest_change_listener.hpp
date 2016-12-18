
#ifndef __STOCK_BIGGEST_CHANGE_RECORDER_HPP__
#define __STOCK_BIGGEST_CHANGE_RECORDER_HPP__

/*****************************************************************************/

#include "istock_listener.hpp"

/*****************************************************************************/


class BiggestChangeRecorder
	: public IStockListener
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	BiggestChangeRecorder();

	double getMaxPositiveChange() const;

	double getMaxNegativeChange() const;

	void onStockChanged(Stock const & _stock, double _oldPrice) override;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	double m_maxPositiveChange;
	double m_maxNegativeChange;

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


inline double
BiggestChangeRecorder::getMaxPositiveChange() const
{
	return m_maxPositiveChange;
}


/*****************************************************************************/


inline double
BiggestChangeRecorder::getMaxNegativeChange() const
{
	return m_maxNegativeChange;
}


/*****************************************************************************/

#endif // _STOCK_BIGGEST_CHANGE_RECORDER_HPP__
