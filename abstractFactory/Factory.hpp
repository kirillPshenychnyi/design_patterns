#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

/***************************************************************************/

#include "AbstractFactory.hpp"
#include "Interface.hpp"

/***************************************************************************/

class Factory 
{

/***************************************************************************/

public:

/***************************************************************************/

	static Interface * create(AbstractFactory & _factory);

/***************************************************************************/

};

/***************************************************************************/

inline Interface *
Factory::create(AbstractFactory & _factory)
{
	Interface * targetInterface = new Interface;

	for (int i = 0; i < 3; i++) 
		targetInterface->addIcon(_factory.createIcon());
			
	targetInterface->addSlider(_factory.createSlider());

	return targetInterface;
	
}

/***************************************************************************/

#endif // __FACTORY_HPP__