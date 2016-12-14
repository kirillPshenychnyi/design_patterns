#ifndef __BUS_HPP__
#define __BUS_HPP__

#include "Vehicle.hpp"
#include "IVisitor.hpp"
#include <string>

class Bus : public Vehicle
{

/***************************************************************************/

public:

/***************************************************************************/

	Bus(std::string const & _model, int _power, int _capacity)
		: Vehicle(_model, _power)
		, m_maxPassengers(_capacity)
	{

	}

    	void accept( IVisitor & _visitor) const override
	{
		_visitor.visit(*this);
	}

/***************************************************************************/

	int getPassengersAmount() const;

/***************************************************************************/

private:

/***************************************************************************/

	const int m_maxPassengers;

/***************************************************************************/

};

/***************************************************************************/

inline int 
Bus::getPassengersAmount() const
{
	return m_maxPassengers;
}

/***************************************************************************/

#endif
