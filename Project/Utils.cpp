//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#include <iostream>
#include "Utils.h"
using namespace std;
namespace sdds {
	
unsigned selection(unsigned low, unsigned high) {
    unsigned choice;

    do {
        cin >> choice;
        if (cin.fail() || choice < low || choice > high) {
            cout << "Invalid Selection, try again: ";
            cin.clear(); // Clear buffer
            cin.ignore(10, '\n');
        } else {
            return choice;
        }
    } while (true);
}


int getPositive(int low, int high, const char* error) {
    int choice;
    do {
        cin >> choice;
        if (cin.fail() || choice < low || choice > high) {
            cout << error;
            cin.clear(); // Clear buffer
            cin.ignore(10, '\n');
        }
        else {
            return choice;
        }
    } while (true);
}


}