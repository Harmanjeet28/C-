//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

#include "LblShape.h"

#ifndef SDDS_RECTANGLE_H_

#define SDDS_RECTANGLE_H_
namespace sdds {

	class Rectangle : public LblShape
	{
		//Private Member variable
		//Create two member variables called m_widthand m_height to hold the widthand the height of a rectangular frame(number of characters).
		int m_width{ 0 };
		int m_height{ 0 };
	public:

		//Default (no argument) constructor
		Rectangle();
		
		//Three argument constructor
		Rectangle(const char * Cstring, int width, int height);

		//Reads comma-separated specs of the Rectangle from istream.
		void getSpecs(std::istream& is);

		//This function overrides the draw function of the base class.
		void draw(std::ostream& os)const;

	};



}
#endif // !SDDS_RECTANGLE_H_
