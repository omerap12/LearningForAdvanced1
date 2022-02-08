//
// Created by omera on 08/02/2022.
//

#include "GTbuilder.h"

Bicycle *GTbuilder::createproduct() const {
    return new Bicycle("GT","X1",this->color,this->height);
}

void GTbuilder::setColor(std::string c) {
    this->color = std::move(c);
}

void GTbuilder::setHeight(int h) {
    this->height = h;
}

