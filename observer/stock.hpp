#ifndef __STOCK_HPP__
#define __STOCK_HPP__

/***************************************************************************/

#include <algorithm>
#include <string>
#include <vector>

/***************************************************************************/

class IStockListener;

/***************************************************************************/

class Stock
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Stock(std::string const & _title, double _initialPrice);

	Stock(const Stock & _s) = delete;

	Stock & operator = (const Stock & _s) = delete;

	std::string const & getTitle() const;

	double getCurrentPrice() const;

	void updatePrice(double _newPrice);

	void addListener(IStockListener & _listener);

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	std::vector< IStockListener * > m_listeners;

	std::string const m_title;

	double m_currentPrice;

/*-----------------------------------------------------------------*/

};


/***************************************************************************/

inline std::string const &
Stock::getTitle() const
{
	return m_title;
}


/*****************************************************************************/


inline double
Stock::getCurrentPrice() const
{
	return m_currentPrice;
}

/***************************************************************************/

#endif