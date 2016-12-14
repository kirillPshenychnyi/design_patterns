#ifndef __DIRECTOR_HPP__
#define __DIRECTOR_HPP__

/***************************************************************************/

#include "MACBuilder.hpp"
#include "WindowsBuilder.hpp"
#include "Interface.hpp"

/***************************************************************************/

class Director 
{

/***************************************************************************/

public:

	static Window * createInterface(Builder & _builder);

/***************************************************************************/

};

/***************************************************************************/

inline 
Window * Director::createInterface(Builder & _buider) 
{		
	_buider.create();
	_buider.addIcon();
	_buider.addScrollBar();
	_buider.addPushButton();
	_buider.addMenu();

	return _buider.get();
}

/***************************************************************************/

#endif // __DIRECTOR_HPP__