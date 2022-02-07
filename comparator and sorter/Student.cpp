//
// Created by omera on 07/02/2022.
//


#include "Student.h"
#include <iostream>
void Student::PrintStudent() {
    std::cout<<"Name: "<<this->name<<", Age: "<<this->age<<", Avg: "<<this->avg<<std::endl;
}

const std::string Student::getName() {
    return this->name;
}
