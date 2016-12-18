#include "stock_logger.hpp"
#include "stock.hpp"

/*****************************************************************************/


StockLogger::StockLogger(std::ostream & _stream)
	: m_stream(_stream)
{}


/*****************************************************************************/


void
StockLogger::onStockChanged(Stock const & _stock, double _oldPrice )
{
	m_stream
		<< "\"" << _stock.getTitle() << "\":"
		<< ((_oldPrice < _stock.getCurrentPrice()) ? "raising" : "falling")
		<< ", old - " << _oldPrice
		<< ", new - " << _stock.getCurrentPrice()
		<< std::endl;
}

/***************************************************************************/