#include "stock.hpp"

#include "stock_logger.hpp"
#include "stock_biggest_change_listener.hpp"

#include <iostream>

/*****************************************************************************/


int main()
{
	Stock st1("Company A", 5.12);
	Stock st2("Company B", 7.13);
	Stock st3("Company C", 50.00);

	StockLogger logger(std::cout);
	st1.addListener(logger);
	st2.addListener(logger);

	BiggestChangeRecorder recorder;
	st1.addListener(recorder);
	st2.addListener(recorder);

	st1.updatePrice(6.21);
	st2.updatePrice(7.09);
	st1.updatePrice(6.01);
	st3.updatePrice(55.00);
	st3.updatePrice(44.00);

	std::cout << "Biggest positive change : "
		<< recorder.getMaxPositiveChange()
		<< std::endl;

	std::cout << "Biggest negative change : "
		<< recorder.getMaxNegativeChange()
		<< std::endl;
}
