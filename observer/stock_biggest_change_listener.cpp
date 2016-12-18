#include "stock_biggest_change_listener.hpp"
#include "stock.hpp"

/*****************************************************************************/


BiggestChangeRecorder::BiggestChangeRecorder()
	: m_maxPositiveChange(0.0)
	, m_maxNegativeChange(0.0)
{
}


/*****************************************************************************/


void 
BiggestChangeRecorder::onStockChanged(Stock const & _stock, double _oldPrice)
{
	double priceChange = _stock.getCurrentPrice() - _oldPrice;
	if (priceChange > 0)
	{
		if (m_maxPositiveChange < priceChange)
			m_maxPositiveChange = priceChange;
	}
	else
	{
		priceChange = -priceChange;
		if (m_maxNegativeChange < priceChange)
			m_maxNegativeChange = priceChange;
	}
}


/*****************************************************************************/