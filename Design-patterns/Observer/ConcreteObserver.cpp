//
// Created by omera on 08/02/2022.
//

#include <iostream>
#include "ConcreteObserver.h"

void ConcreteObserver::Update(std::string info) {
    if (info == "on"){
        this->state = true;
        std::cout<<"value is "<<this->state<<std::endl;
        return;
    }
    std::cout<<"Got "<<info<<" and It's not good so state stays "<<this->state<<std::endl;
}

void ConcreteObserver::printState() {
    std::cout<<"Observer state is "<<this->state<<std::endl;
}


