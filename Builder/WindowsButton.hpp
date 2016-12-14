#pragma once

#include "PushButton.hpp"
#include <iostream>

class WindowsButton : public PushButton 
{
public:

	void info() override;


};


inline void WindowsButton::info() {

	std::cout << "Windows button" << std::endl;
}