//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca


#ifndef SDDS_CALORIELIST_H_
#define SDDS_CALORIELIST_H_
#include "Food.h"
namespace sdds {

	class CalorieList {
		Food* m_items;
		int m_noOfItems;
		int m_itemsAdded;

		void setEmpty();
		bool isValid()const;
		int totalCalories()const;
		void Title()const;
		void footer()const;

	public:
		void init(int size);
		bool add(const char* item_name, int calories, int when);
		void display()const;
		void deallocate();

	};

}
#endif // #endif // SDDS_CALORIELIST_H_
