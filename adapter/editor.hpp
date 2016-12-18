#ifndef __EDITOR_HPP__
#define __EDITOR_HPP__

/***************************************************************************/

#include <vector>
#include "igrahical_element.hpp"
#include "text.hpp"
#include "point.hpp"
#include "text_adapter.hpp"
#include <algorithm>
#include <memory>

/***************************************************************************/

class Editor
{

/***************************************************************************/

	typedef
		std::unique_ptr< IGraphicalElement >
		ElementPtr;

	typedef
		std::vector< ElementPtr >
		Elements;

/***************************************************************************/

public:

/***************************************************************************/

	void addLine(Point _begin, Point _end); 
	
	void addCircle(Point _center, double _radius);
	
	void addTexElement(Text const & _text, Point _start);

	void display() const;

/***************************************************************************/

private:

/***************************************************************************/

	Elements m_elements;

/***************************************************************************/

};

/***************************************************************************/

#endif // !__EDITOR_HPP__
