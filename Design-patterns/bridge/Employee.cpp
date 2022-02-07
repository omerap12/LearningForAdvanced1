//
// Created by omera on 07/02/2022.
//

#include "Employee.h"

void Employee::operator<<(std::ostream &os) {
    os<<"Name "<<this->name<<", Salary "<<this->salary<<std::endl;
}

void Employee::print() {
    std::cout<<"Name: "<<this->name<<", Salary: "<<this->salary<<std::endl;

}

std::string Employee::getName() {
    return this->name;
};

int Employee::getSalary() {
    return this->salary;
}