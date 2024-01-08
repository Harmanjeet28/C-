//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#include <iostream>

#include "Shape.h"

using namespace std;
namespace sdds {

    //Overload the insertion and extraction operators (using draw and getSpecs functions) so any shape object can be written or read using ostream and istream.
    ostream& operator<<(ostream& os, const Shape& RO) {
       RO.draw(os);
       return os;
   }
    istream& operator>>(istream& is, Shape& RO) {
        RO.getSpecs(is);
        return is;
    }

}
