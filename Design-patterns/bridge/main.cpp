#include <iostream>

#include "Employee.h"
#include "NameComparator.h"
#include "BubbleSorter.h"
#include "SalaryComparator.h"

int main() {
    Employee* employees[] = {new Employee("Nisim",19),new Employee("Yaakov",200),new Employee("Amit",8),new Employee("Mor",132),new Employee("Omer",5),new Employee("Tomer",2)};
    std::cout<<"Before sorting:"<<std::endl;
    for (int i = 0; i<6; i++) {
        employees[i]->print();
    }
    //sorting using bubble sort
    std::cout<<"Bubble sort+ name comparator"<<std::endl;
    Sorter* s = new BubbleSorter();
    s->sort(employees,new NameComparator(),6);
    for (int i = 0; i<6; i++) {
        employees[i]->print();
    }
    std::cout<<"Bubble sort + salary comparator"<<std::endl;
    s->sort(employees,new SalaryComparator(),6);
    for (int i = 0; i<6; i++) {
        employees[i]->print();
    }
    //can use other compartor and sorters, for example Sorted* s1 = new QuickSorter();


    //clean memory
    for (int i = 0; i<6; i++) {
        delete(employees[i]);
    }

}
