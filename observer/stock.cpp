/*****************************************************************************/

#include "stock.hpp"
#include "istock_listener.hpp"

/*****************************************************************************/


Stock::Stock(std::string const & _title, double _initialPrice)
	: m_title(_title)
	, m_currentPrice(_initialPrice)
{
}


/*****************************************************************************/


void 
Stock::addListener(IStockListener & _listener)
{
	m_listeners.push_back(&_listener);
}


/*****************************************************************************/


void 
Stock::updatePrice(double _newPrice)
{
	if (m_currentPrice == _newPrice)
		return;

	double oldPrice = m_currentPrice;
	m_currentPrice = _newPrice;

	for (IStockListener * pListener : m_listeners)
		pListener->onStockChanged(*this, oldPrice);
}

/***************************************************************************/