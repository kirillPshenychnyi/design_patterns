#ifndef __MAC_OS_FACTORY_HPP__
#define __MAC_OS_FACTORY_HPP__

/***************************************************************************/

#include "AbstractFactory.hpp"
#include "MacOsIcon.hpp"
#include "MacOsSlider.hpp"

/***************************************************************************/

class macOsFactory : public AbstractFactory
{

/***************************************************************************/

public:

/***************************************************************************/

	Icon * createIcon() override;

	Slider * createSlider() override;

/***************************************************************************/

};

/***************************************************************************/

inline Icon * 
macOsFactory::createIcon()  
{
	return new MacOsIcon;
}

/***************************************************************************/

inline Slider *
macOsFactory::createSlider() 
{
	return new MacOsSlider;
}

/***************************************************************************/

#endif // __MAC_OS_FACTORY_HPP__