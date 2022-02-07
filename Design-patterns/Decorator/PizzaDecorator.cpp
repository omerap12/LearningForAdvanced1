//
// Created by omera on 07/02/2022.
//

#include "PizzaDecorator.h"

double PizzaDecorator::getCost() {
    return this->pizza->getCost();
}

std::string PizzaDecorator::getIngridients() {
    return this->pizza->getIngridients();
}


