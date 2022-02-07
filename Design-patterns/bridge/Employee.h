//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_EMPLOYEE_H
#define LEARNINGFORTEST_EMPLOYEE_H

#include <iostream>
class Employee {
    std::string name;
    int salary;
public:
    Employee(std::string Name, int Salary) {
        this->name = std::move(Name);
        this->salary = Salary;
    }
    void operator<<(std::ostream &os);
    void print();
    std::string getName();
    int getSalary();

};


#endif //LEARNINGFORTEST_EMPLOYEE_H
