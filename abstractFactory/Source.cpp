#include "Factory.hpp"
#include "Interface.hpp"
#include "macOsFactory.hpp"
#include "WindowsFactory.hpp"



int main() {

	Factory _factory;
	WindowsFactory w;

	Interface * _interface = _factory.create(w);

	_interface->info();
	delete _interface;

}