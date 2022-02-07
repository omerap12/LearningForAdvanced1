//
// Created by omera on 07/02/2022.
//

#include "PizzaWithMushrooms.h"

double PizzaWithMushrooms::getCost() {
    return PizzaDecorator::getCost()+0.5;
}

std::string PizzaWithMushrooms::getIngridients() {
    return PizzaDecorator::getIngridients()+" ,Mushroom";
}


