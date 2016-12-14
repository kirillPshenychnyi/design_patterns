#ifndef __INTERFACE_HPP__
#define __INTERFACE_HPP__

/***************************************************************************/

#include "Icon.hpp"
#include "Slider.hpp"
#include "Menu.hpp"
#include "PushButton.hpp"

#include <memory>
#include <algorithm>
#include <vector>

/***************************************************************************/

class Window 
{
	
/***************************************************************************/

public:

/***************************************************************************/

	void info() const;
	
	void addIcon(Icon * _icon);

	void addSlider(Slider * _icon);

	void addMenu(Menu * _menu);

	void addButton(PushButton * _button);

/***************************************************************************/

private:

/***************************************************************************/

	std::vector < std::unique_ptr <Icon> > m_icons;

	std::vector  < std::unique_ptr <Slider> > m_sliders;

	std::vector <std::unique_ptr <PushButton>> m_buttons;

	std::vector <std::unique_ptr<Menu>> m_menus;

/***************************************************************************/

};

inline void Window::addMenu(Menu * _menu) {

	std::unique_ptr<Menu> m(_menu);

	m_menus.push_back(std::move(m));
}

/***************************************************************************/

inline void
Window::addButton(PushButton * _button) {
	
	std::unique_ptr<PushButton> b(_button);
	
	m_buttons.push_back(std::move(b));

}

/***************************************************************************/

inline void
Window::addSlider(Slider * slider) {

	std::unique_ptr<Slider> _slider(slider);

	m_sliders.push_back(std::move(_slider));
}

/***************************************************************************/

inline void 
Window::addIcon(Icon * _icon) {
		
	std::unique_ptr<Icon> icon(_icon);

	m_icons.push_back(std::move (icon));
}

/***************************************************************************/

inline 
void Window::info() const
{

	for (int i = 0; i < m_icons.size(); i++) 
		m_icons[i]->info();
	for (int i = 0; i < m_sliders.size(); i++)
		m_sliders[i]->info();
	for (int i = 0; i < m_buttons.size(); i++)
		m_buttons[i]->info();
	for (int i = 0; i < m_menus.size(); i++)
		m_menus[i]->info();
}

/***************************************************************************/

#endif // __INTERFACE_HPP__