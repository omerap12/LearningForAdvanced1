//
// Created by omera on 08/02/2022.
//

#include <iostream>
#include "ConcreteSubject.h"

void ConcreteSubject::GetState() {
    std::cout<<"State of subject is "<<state<<std::endl;
}

void ConcreteSubject::setState(std::string info) {
    this->state = true;
    Notify(info);
}