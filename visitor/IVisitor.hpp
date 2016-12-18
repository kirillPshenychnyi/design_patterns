#ifndef __IVISITOR_HPP__
#define __IVISITOR_HPP__

/***************************************************************************/

class Bus;
class Car;

/***************************************************************************/

struct IVisitor // define abstract visitor interface
{
	virtual ~IVisitor() = default;

	virtual void visit( const Car & _car ) = 0;

	virtual void visit( const Bus & _bus) = 0;
};

/***************************************************************************/

#endif // !__IVISITOR_HPP__
