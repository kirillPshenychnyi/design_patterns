#include "editor.hpp"
#include "circle.hpp"
#include "line.hpp"
#include "text_adapter.hpp"

/***************************************************************************/

void
Editor::addLine(Point _begin, Point _end)
{
	ElementPtr line = std::make_unique<Line>(_begin, _end);

	m_elements.push_back(std::move(line));

}

void Editor::addCircle(Point _center, double _radius)
{
	ElementPtr circle = std::make_unique<Circle>(_center, _radius);

	m_elements.push_back(std::move(circle));
}

/***************************************************************************/

void 
Editor::addTextElement(std::string const & _text, Point _start)
{
	Text text(_text);

	ElementPtr view = std::make_unique<TextView>(text, _start);

	m_elements.push_back(std::move(view));

}

/***************************************************************************/

void
Editor::display() const
{
	std::for_each(
		m_elements.begin()
	,	m_elements.end()
	,	[](Elements::const_reference _value)
		{
			_value->display();
		}
	);
}

