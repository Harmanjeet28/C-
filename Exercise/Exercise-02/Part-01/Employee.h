//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca


#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_

#define DATAFILE "employees.csv"
namespace sdds {
    struct Employee {
        int m_empNo;
        double m_salary;
        char* m_name;
    };
    //sorts the dynamic array of employees based on the GPA of the employees.
    void sort();
    // loads a employee structue with its values from the file
    bool load(Employee& employees);
    // allocates the dyanmic array of employees and loads all the file
    // recoreds into the array
    bool load();
    // TODO: Declare the prototype for the display function that
    // displays a employee record on the screen:
    void display(const Employee& employees);
    // TODO: Declare the prototype for the display function that 
    // first sorts the employees then displays all the employees on the screen
    void display();
    // TODO: Declare the prototype for the deallocateMemory function that
    // first will deallocate all the names in the employee elements
    // then it will deallocate the employee array 
    void  deallocateMemory();
}
#endif // SDDS_EMPLOYEE_H_