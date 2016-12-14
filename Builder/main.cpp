#include "MACBuilder.hpp"
#include "WindowsBuilder.hpp"
#include "Director.hpp"

int main() 
{
	WindowsBuilder s;
	MACOsBuilder mac;
	Director dir;

	Window * w = dir.createInterface(s);
	w->info();
	
	Window * m = dir.createInterface(mac);
	m->info();

	delete w;
	delete m;
	return 0;
}