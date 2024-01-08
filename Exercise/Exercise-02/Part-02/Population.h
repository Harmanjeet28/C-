//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#define SDDS_POPULATION_H_

namespace sdds {

    struct Population {
        char *postalCode; 
        int resident;
    };

    void sort();
    bool load(Population & canPopulation);
    bool load(const char fileName[]);
    int totalPopulation(const Population& canPopulation);
    int totalPopulation();
    void display(const Population& canPopulation);
    void display();
    void  deallocateMemory();
}
#endif // SDDS_POPULATION_H_