#ifndef __POINT_HPP__
#define __POINT_HPP__

/***************************************************************************/

#include <iostream>

/***************************************************************************/

class Point
{

/***************************************************************************/

public:

	Point( double _x, double _y )
		:	m_x(_x)
		,	m_y(_y)
	{}

	double getX() const;

	double getY() const;

	friend std::ostream& operator<< (std::ostream& stream, const Point & point);

/***************************************************************************/

private:

/***************************************************************************/

	double m_x;

	double m_y;

/***************************************************************************/

};

/***************************************************************************/

inline double
Point::getX() const
{
	return m_x;
}

/***************************************************************************/

inline double
Point::getY() const
{
	return m_x;
}

/***************************************************************************/

inline
std::ostream& operator<< (std::ostream& _stream, const Point & _point)
{
	_stream << _point.m_x << std::endl;
	_stream << _point.m_y << std::endl;
	
	return _stream;
}


/***************************************************************************/

#endif // ! __POINT_HPP__
