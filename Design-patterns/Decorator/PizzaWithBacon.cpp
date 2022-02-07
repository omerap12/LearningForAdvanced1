//
// Created by omera on 07/02/2022.
//

#include "PizzaWithBacon.h"

double PizzaWithBacon::getCost() {
    return PizzaDecorator::getCost() + 13;
}

std::string PizzaWithBacon::getIngridients() {
    return PizzaDecorator::getIngridients()+" ,Bacon";
}
