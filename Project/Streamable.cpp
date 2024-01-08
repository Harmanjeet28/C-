//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#include <iostream>
#include "Streamable.h"

using namespace std;
namespace sdds {

    //Insertion operator overload
    //Overload the insertion operator so a constant object of type Streamable can be written on an ostream object only if the Streamable object is in a valid state.Otherwise, the function will quietly ignore the insertion action.
    ostream& operator<<(ostream& os, const Streamable& rhs) {
        // Object of type Streamable can be written on an ostream object only if the Streamable object is in a valid state
        if (rhs) {
            rhs.write(os);
        }
        return os;
    }

   istream& operator>>(istream& is, Streamable& rhs) {
        return (rhs.read(is));
    }
}

