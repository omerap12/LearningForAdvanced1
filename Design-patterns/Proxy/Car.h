//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_CAR_H
#define LEARNINGFORTEST_CAR_H

#include "Icar.h"


//the real object
class Car:public Icar {
public:
    void drive() override;


};


#endif //LEARNINGFORTEST_CAR_H
