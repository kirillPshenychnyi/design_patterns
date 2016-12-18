#ifndef __TEXT_ELEMENT_HPP__
#define __TEXT_ELEMENT_HPP__

/***************************************************************************/

#include <string>
#include <random>
#include <ctime>

/***************************************************************************/

class Text
{

/***************************************************************************/

public:

/***************************************************************************/

	Text(std::string const & _text)
		:	m_text(_text)
	{	
		// seed rand for correct random values generating

		time_t current;
		time(&current);
		srand(current);
	}

	std::string const & getText() const;

	int getLinesCount() const;

	int getLongestLineChars() const;

	// some useful logic to work with the text

	void setFont() {}

	void setFontColor() {}

	void setHeight() {}

/***************************************************************************/

	std::string const m_text;

/***************************************************************************/

};

/***************************************************************************/

// return random values
inline int 
Text::getLinesCount() const
{
	return rand() % 10;
}

/***************************************************************************/

// return random values
inline int
Text::getLongestLineChars() const
{
	return rand() % 100;
}

/***************************************************************************/

inline std::string const &
Text::getText() const
{
	return m_text;
}

/***************************************************************************/

#endif // !__TEXT_ELEMENT_HPP__
