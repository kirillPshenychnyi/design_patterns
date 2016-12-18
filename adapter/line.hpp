#ifndef __LINE_HPP__
#define __LINE_HPP__

/***************************************************************************/

#include "point.hpp"
#include "igraphical_element.hpp"
#include <iostream>

/***************************************************************************/

class Line : public IGraphicalElement
{

/***************************************************************************/

public:

/***************************************************************************/

	Line(Point _begin, Point _end)
		:	m_begin(_begin)
		,	m_end(_end)
	{
	}

	Point getBegin() const;
	
	Point getEnd() const;

    void display() const override;

/***************************************************************************/

private:

/***************************************************************************/

	const Point m_begin;

	const Point m_end;

/***************************************************************************/

};

/***************************************************************************/

inline Point
Line::getBegin() const
{
	return m_begin;
}

/***************************************************************************/

inline Point
Line::getEnd() const
{
	return m_end;
}

/***************************************************************************/

inline void 
Line::display() const
{
	std::cout << "Displaying line:" << std::endl;
	
	std::cout << "Begin:" << std::endl;
	std::cout << m_begin;

	std::cout << "End:" << std::endl;
	std::cout << m_end;

}

/***************************************************************************/

#endif // !__LINE_HPP__
