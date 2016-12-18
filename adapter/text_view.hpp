#ifndef __TEXT_ADAPTER_HPP__
#define __TEXT_ADAPTER_HPP__

/***************************************************************************/

#include "igraphical_element.hpp"
#include "text.hpp"
#include "point.hpp"

/***************************************************************************/

class TextView : public IGraphicalElement
{

/***************************************************************************/

public:

/***************************************************************************/

	TextView(const Text _text, Point _start)
		:	m_text(_text)
		,	m_startPosition(_start)
	{}

	const Text & getText() const;

	void display() const override;

/***************************************************************************/

	const Text m_text;

	const Point m_startPosition;

/***************************************************************************/

};

/***************************************************************************/

inline const Text & 
TextView::getText() const
{
	return m_text;
}

/***************************************************************************/


// adapt Text interface to IGraphicalElement by optimal display of text 
inline void 
TextView::display() const
{
	double endColumn = m_startPosition.getX() + m_text.getLongestLineChars();
	double endLine = m_startPosition.getY() + m_text.getLinesCount();
	
	Point endPosition(endLine, endLine);

	std::cout << "Displaying text: " << std::endl;
	std::cout << m_text.getText() << std::endl;

	std::cout << "In coords:" << std::endl;
	std::cout << m_startPosition;
	std::cout << endPosition;
}


/***************************************************************************/

#endif // __TEXT_ADAPTER_HPP__
