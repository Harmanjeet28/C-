//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

//Create an Interface called Streamable to enforce implementation of the following methods. Any class inherited from Streamable will have the capability to be inserted into or extracted from a stream.


#ifndef SDDS_STREAMABLE_H
#define SDDS_STREAMABLE_H

#include <iostream>


namespace sdds {

	//===============================Streamable Pure Virtual funcitons - Interface module======================
    class Streamable {
    public:
        //write pure virtual function - This method is not capable of modifying the Streamable object. write receives and returns a reference of an ostream object.
        //Functions overriding this function will write into an ostream object.
        virtual std::ostream& write(std::ostream& os) const = 0;

        //read pure virtual function
          //read receivesand returns a reference of an istream object.
          //Functions overriding this function will read from an istream object.
        virtual std::istream& read(std::istream& is) = 0;

        //conIO
        //This method is not capable of modifying the Streamable object. conIo receives a reference of an ios object and returns a Boolean.
        virtual bool conIO(std::ios& io) const = 0;

        //Boolean conversion overloads of this method will return if the Streamable object is in a valid state or not.
        virtual operator bool() const = 0;

        //Add an empty virtual destructor to this interface to guaranty that the descendants of the Streamable are removed from memory with no leak
        virtual ~Streamable()=default;   //sets a default representation of a destructor 
    };

    // Insertion and Extraction operator overloads
    std::ostream& operator<<(std::ostream& os, const Streamable& s);
    std::istream& operator>>(std::istream& is, Streamable& s);
}

#endif //!SDDS_STREAMABLE_H