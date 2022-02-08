//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_DRIVER_H
#define LEARNINGFORTEST_DRIVER_H


#include <string>

class Driver {
    std::string name;
    int age;
public:
    Driver(std::string Name,int Age){
        this->name = std::move(Name);
        this->age = Age;
    }
    int getAge();
    std::string getName();
};


#endif //LEARNINGFORTEST_DRIVER_H
