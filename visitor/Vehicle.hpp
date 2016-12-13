#ifndef __VEHICLE_HPP__
#define __VEHICLE_HPP__

#include <string>
#include "IVisitor.hpp"
// pre defined Visitor interface
//struct IVisitor;

// abstract Vehicle class 
class Vehicle 
{

/***************************************************************************/

protected:

/***************************************************************************/
	
	Vehicle(const std::string &_model, int _power)
		:	m_horsePower(_power)
		,	m_model(_model)
	{

	}

public:

/***************************************************************************/

	virtual ~Vehicle() = default;

public:

/***************************************************************************/

	virtual void accept(IVisitor & _visitor) const = 0;

/***************************************************************************/

	int getHorsePower() const;

	std::string const & getModel() const;

/***************************************************************************/

private:

	int m_horsePower;

	std::string const m_model;

/***************************************************************************/

};

inline int
Vehicle::getHorsePower() const
{
	return m_horsePower;
}

inline std::string const & 
Vehicle::getModel() const
{
	return m_model;
}


#endif //__VEHICLE_HPP__