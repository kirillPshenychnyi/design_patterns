#ifndef __CAR_HPP__
#define __CAR_HPP__

/***************************************************************************/

#include "Vehicle.hpp"
#include "IVisitor.hpp"
#include <cassert>

class Car : public Vehicle
{

/***************************************************************************/

public:

	enum class Type
	{
		Cabriolet,
		Sedan,
		Jeep,
		Pickup
	};

	static const std::string typeToString(Type _type)
	{
		switch (_type)
		{
			case Type::Cabriolet:
				return "Cabriolet";
			
			case Type::Sedan:
				return "Sedan";

			case Type::Jeep:
				return "Jeep";

			case Type::Pickup:
				return "Pickup";

			default:
				assert(!"Unlnown kind");
				return "";
		}
	}

/***************************************************************************/

public:

	Car(const std::string & _model, int _power, Type _type)
		:	Vehicle(_model, _power)
		,	m_type( _type) 
	{}

	Car(const Car &) = delete;

	Car & operator = (const Car &) = delete;

/***************************************************************************/

	void accept(IVisitor & _visitor) const override
	{
		_visitor.visit(*this);
	}

	Type getType() const;

/***************************************************************************/

private:

/***************************************************************************/

	Type m_type;

/***************************************************************************/

};

inline Car::Type
Car::getType() const
{
	return m_type;
}

/***************************************************************************/

#endif // ! __CAR_HPP__
