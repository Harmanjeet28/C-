//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
#include <iostream>

namespace sdds {
   class Account {
      int m_number;
      double m_balance; 
      void setEmpty();
   public:
      Account();
      Account(int number, double balance);
      std::ostream& display()const;
      operator bool() const;
      operator int() const;
      operator double() const;
      bool operator~() const;
      Account& operator=(int number);
      Account& operator=(Account& rhs);
      Account& operator+=(double);
      Account& operator-=(double);
      Account& operator<<(Account& rhs);
      Account& operator>>(Account& rhs);
      friend double operator+(const Account& lhs, const Account& rhs);
      friend double operator+=(double& num, const Account& rhs);
   };
   
}
#endif // SDDS_ACCOUNT_H_