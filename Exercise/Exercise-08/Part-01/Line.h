//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca


#include "LblShape.h"

#ifndef SDDS_LINE_H_
#define SDDS_LINE_H_
namespace sdds {
	//Line inherits the LblShape class to create a horizontal line with a label.
	class Line : public LblShape {
		int m_length{ 0 };
	public:

		//Default (no argument) constructor
		Line();

		//Two argument constructor
		Line(const char *Cstring, int num);

		//This function overrides the getSpecs function of the base class
		void getSpecs(std::istream& is);

		//This function overrides the draw function of the base class.
		void draw(std::ostream& os)const;

	};



}
#endif // !SDDS_LINE_H_

