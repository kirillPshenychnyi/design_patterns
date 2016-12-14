#ifndef __MAC_OS_SLIDER_HPP__
#define __MAC_OS_SLIDER_HPP__

/***************************************************************************/

#include "Slider.hpp"
#include <iostream>

/***************************************************************************/

class MacOsSlider : public Slider
{

/***************************************************************************/

public:

/***************************************************************************/

	void info() override;

/***************************************************************************/

};

/***************************************************************************/

inline void 
MacOsSlider::info() 
{

	std::cout << "This is MAC OS Slider" << std::endl;

}

/***************************************************************************/

#endif // __MAC_OS_SLIDER_HPP__