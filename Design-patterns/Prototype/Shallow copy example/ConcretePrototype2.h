//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_CONCRETEPROTOTYPE2_H
#define LEARNINGFORTEST_CONCRETEPROTOTYPE2_H


#include "Prototype.h"

class ConcretePrototype2: public Prototype{
public:
    ConcretePrototype2(int i){
        Prototype::id = i;
        Prototype::type = 2;
    }
    Prototype* Clone() override{
        return new ConcretePrototype2(*this);

    }


};


#endif //LEARNINGFORTEST_CONCRETEPROTOTYPE2_H
