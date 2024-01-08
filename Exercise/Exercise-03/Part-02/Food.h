//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

#ifndef SDDS_FOOD_H_
#define SDDS_FOOD_H_

namespace sdds {

	class Food {
		char f_foodName[30];
	    int f_kcals;
		int f_timeOfConsumption;
		void setFoodName(const char* food);
	public:
		void setEmpty();
		void set(const char* food, int kcals, int time);
		int kcals() const;
		int timeOfComsumption() const;
		bool isValid() const;
		void display() const;
		
	};
}
#endif // !SDDS_TRANSCRIPT_H
