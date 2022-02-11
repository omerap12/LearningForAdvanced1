//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_GIRL_H
#define LEARNINGFORTEST_GIRL_H


#include <string>
#include <iostream>
#include "Person.h"

class Girl: public Person {
private:
    std::string name;
public:
    Girl(std::string n){
        this->name = std::move(n);
    }
    void speak() override{
        std::cout<<"I'm a girl "<<this->name<<std::endl;
    }

};


#endif //LEARNINGFORTEST_GIRL_H
