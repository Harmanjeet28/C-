//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

#include "Shape.h"
#ifndef SDDS_LBLSHAPE_H_
#define SDDS_LBLSHAPE_H_
namespace sdds {

	//Inherit an abstract class from the interface Shape called LblShape. This class adds a label to a Shape
	//This class will implement the pure virtual function getSpecs but will not implement the draw function; therefore it remains abstract.
	class LblShape : public Shape {
		//Add a character pointer member variable called m_label and initialize it to null. This member variable will be used to hold the dynamically allocated label for the Shape.
		char* m_label{ nullptr };


	protected:
		//Add a query called label that returns the unmodifiable value of m_label member variable. 
		const char *label()const;
	public:


		//Default (no argument) constructor
		LblShape();

		//One argument constructor
		LblShape(const char* Cstring);

		//Destructor
		virtual ~LblShape();

		//deleted actions, The copy constructor and assignment operator are deleted to prevent copying or assignment of instances of this class.
		LblShape(const LblShape&) = delete;
		LblShape& operator=(const LblShape&) = delete;

		//Override the Shape::getSpecs
		void getSpecs(std::istream& is);

	};



}
#endif // !SDDS_LBLSHAPE_H_
