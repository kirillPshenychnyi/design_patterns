#ifndef __INTERFACE_HPP__
#define __INTERFACE_HPP__

/***************************************************************************/

#include "Icon.hpp"
#include "Slider.hpp"
#include <memory>
#include <algorithm>
#include <vector>

/***************************************************************************/

class Interface 
{
	
/***************************************************************************/

	typedef
		std::vector < std::unique_ptr <Icon> >
		Icons;

	typedef
		std::vector < std::unique_ptr <Slider> >
		Sliders;

/***************************************************************************/

public:

/***************************************************************************/

	void info() const;
	
	void addIcon(Icon * _icon);

	void addSlider(Slider * _icon);

/***************************************************************************/

private:

/***************************************************************************/

	Sliders m_sliders;

	Icons m_icons;

/***************************************************************************/

};

/***************************************************************************/

inline void 
Interface::info() const
{
	std::for_each( 
		m_icons.begin()
	,	m_icons.end()
	,  [](Icons::value_type const & _value)
		{
			_value->info();
		}
	);
		
	std::for_each(
		  m_sliders.begin()
		, m_sliders.end()
		, [](Sliders::value_type const & _value)
			{
				_value->info();
			}
	);
}

/***************************************************************************/

inline void 
Interface::addSlider(Slider * slider)
{
	std::unique_ptr<Slider> _slider(slider);

	m_sliders.push_back(std::move(_slider));
}

/***************************************************************************/

inline void
Interface::addIcon(Icon * _icon) 
{		
	std::unique_ptr<Icon> icon(_icon);

	m_icons.push_back(std::move (icon));
}

/***************************************************************************/

#endif // __INTERFACE_HPP__