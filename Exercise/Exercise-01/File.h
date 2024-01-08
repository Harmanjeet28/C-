//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca


#ifndef NAMESPACE_FILE_H 
#define NAMESPACE_FILE_H

#include "ShoppingRec.h"

namespace sdds {
    const char* const SHOPPING_DATA_FILE = "shoppinglist.csv";

    bool openFileForRead();
    bool openFileForOverwrite();
    void closeFile();
    bool freadShoppingRec(ShoppingRec* rec);
    void fwriteShoppintRec(const ShoppingRec* rec);


}

#endif