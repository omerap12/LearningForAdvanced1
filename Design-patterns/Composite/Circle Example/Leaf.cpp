//
// Created by omera on 07/02/2022.
//

#include <iostream>
#include "Leaf.h"

void Leaf::operation() {
    std::cout<<this->name<<std::endl;
}

void Leaf::setFather(Component *f) {
    this->father = f;
}

Component *Leaf::getFather() {
    return this->father;
}

bool Leaf::isCircle(Component *c) {
    return false;
}
