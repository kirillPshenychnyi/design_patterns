#ifndef __MAC_BUILDER_HPP__
#define __MAC_BUILDER_HPP__

/***************************************************************************/

#include "Builder.hpp"
#include "MACButton.hpp"
#include "MacOsIcon.hpp"
#include "MacOsSlider.hpp"
#include "Interface.hpp"

/***************************************************************************/

class MACOsBuilder : public Builder
{

/***************************************************************************/

public:

/***************************************************************************/

	void addScrollBar() override;

	void addPushButton() override;

	void addIcon() override;

	void create() override;

/***************************************************************************/

};

/***************************************************************************/

inline void 
MACOsBuilder::addScrollBar (){

	m_interface->addSlider(new MacOsSlider);
}

/***************************************************************************/

inline void 
MACOsBuilder::addIcon() 
{

	m_interface->addIcon(new MacOsIcon);
}

/***************************************************************************/

inline void
MACOsBuilder::addPushButton() 
{

	m_interface->addButton(new MACButton);
}

/***************************************************************************/

inline void 
MACOsBuilder::create()
{
	
	m_interface = new Window;
}

/***************************************************************************/

#endif // __MAC_BUILDER_HPP__