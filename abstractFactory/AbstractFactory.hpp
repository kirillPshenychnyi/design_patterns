#ifndef _ABSTRACT_FACTORT_HPP_
#define _ABSTRACT_FACTORT_HPP_

class Icon;

class Slider;

class AbstractFactory {

	public:

	virtual Icon * createIcon() = 0;

	virtual Slider * createSlider() = 0;

	virtual ~AbstractFactory() {}

};










#endif