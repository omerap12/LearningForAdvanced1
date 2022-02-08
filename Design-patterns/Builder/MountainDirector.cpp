//
// Created by omera on 08/02/2022.
//

#include "MountainDirector.h"

void MountainDirector::construct() {
    this->builder->setColor("Red");
    this->builder->setHeight(130);
}

Bicycle *MountainDirector::createproduct() const {
    return this->builder->createproduct();
}
