//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

#ifndef NAMESPACE_SHOPPINGLIST_H 
#define NAMESPACE_SHOPPINGLIST_H

#include "ShoppingRec.h"

namespace sdds {

    const int MAX_NO_OF_RECS = 15;

    bool loadList();
    void displayList();
    void removeBoughtItems();
    void removeItem(int index);
    bool saveList();
    void clearList();
    void toggleBought();
    void addItemToList();
    void removeItemfromList();
    bool listIsEmpty();

}

#endif
