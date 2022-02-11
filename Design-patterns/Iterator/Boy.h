//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_BOY_H
#define LEARNINGFORTEST_BOY_H


#include <string>
#include <iostream>
#include "Person.h"

class Boy : public Person{
private:
    std::string name;
public:
    Boy(std::string n){
        this->name = std::move(n);
    }
    void speak() override{
        std::cout<<"I'm a boy "<<this->name<<std::endl;
    }

};


#endif //LEARNINGFORTEST_BOY_H
