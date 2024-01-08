//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

#ifndef SDDS_MARK_H_
#define SDDS_MARK_H_


#include <iostream>

namespace sdds {
    class Mark {
        int m_mark;
        void setToDefault();
        bool goodMark;
    public:
        Mark();
        Mark(int);
        operator int() const;
        operator double() const;
        operator char() const;
        Mark& operator+=(int);
        Mark& operator=(int);
        int fetchMarks()const;
        bool fetchMarkBool()const;
    };

    bool isValidInt(int);
    int& operator+=(int& num, const Mark& rhs);
  
  


}
#endif // SDDS_MARK_H_