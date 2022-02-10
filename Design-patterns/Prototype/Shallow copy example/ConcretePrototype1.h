//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_CONCRETEPROTOTYPE1_H
#define LEARNINGFORTEST_CONCRETEPROTOTYPE1_H

#include "Prototype.h"

//derived class
class ConcretePrototype1:public Prototype {
public:
    ConcretePrototype1(int i){
        Prototype::id = i;
        Prototype::type = 1;
    }
    Prototype* Clone() override{
        return new ConcretePrototype1(*this);
    }
};


#endif //LEARNINGFORTEST_CONCRETEPROTOTYPE1_H
