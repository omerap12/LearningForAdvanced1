//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_HOUSE_H
#define LEARNINGFORTEST_HOUSE_H

//abstract class

#include "Implementor.h"

class House {
protected:
    Implementor* imp;
public:
    virtual void printHouse() = 0;
    virtual void setImp(Implementor* i){
        this->imp = i;
    };
};


#endif //LEARNINGFORTEST_HOUSE_H
