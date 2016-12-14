#ifndef __WINDOWS_BUILDER_HPP__
#define __WINDOWS_BUILDER_HPP__

/***************************************************************************/

#include "Builder.hpp"
#include "WindowsIcon.hpp"
#include "WindowsMenu.hpp"
#include "WindowsSlider.hpp"
#include "Interface.hpp"

/***************************************************************************/

class WindowsBuilder : public Builder
{

/***************************************************************************/

public:

/***************************************************************************/

	void create() override;

	void addIcon() override;

	void addMenu() override;

	void addScrollBar() override;

/***************************************************************************/

};

/***************************************************************************/

inline void
WindowsBuilder::addIcon() 
{
	m_interface->addIcon(new WindowsIcon);

}

/***************************************************************************/

inline void 
WindowsBuilder::addScrollBar()
{
	m_interface->addSlider(new WindowsSlider);
}

/***************************************************************************/

inline void 
WindowsBuilder::addMenu() 
{
	m_interface->addMenu(new PopUpMenu);
}

/***************************************************************************/

inline void
WindowsBuilder::create() 
{
	m_interface = new Window;
}

/***************************************************************************/

#endif // !__WINDOWS_BUILDER_HPP__
