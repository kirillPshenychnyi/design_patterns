#ifndef __WINDOWS_FACTORY_HPP__
#define __WINDOWS_FACTORY_HPP__

/***************************************************************************/

#include "AbstractFactory.hpp"
#include "WindowsSlider.hpp"
#include "WindowsIcon.hpp"

/***************************************************************************/

class WindowsFactory : public AbstractFactory
{

/***************************************************************************/

public:

/***************************************************************************/

	Icon * createIcon() override;
	
	Slider * createSlider() override;

/***************************************************************************/

};

/***************************************************************************/

inline 
Icon * WindowsFactory::createIcon () 
{
	return new WindowsIcon;
}

/***************************************************************************/

inline
Slider * WindowsFactory::createSlider() 
{
	return new WindowsSlider;
}

#endif // __WINDOWS_FACTORY_HPP__