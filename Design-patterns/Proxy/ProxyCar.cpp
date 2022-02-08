//
// Created by omera on 08/02/2022.
//

#include "ProxyCar.h"

void ProxyCar::drive() {
    if (this->driver->getAge() < 18){
        std::cout<<this->driver->getName()<<" are not allowed to drive"<<std::endl;
        return;
    }
    std::cout<<this->driver->getName()<<" ";
    this->real_car->drive();
}
