//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_PIZZAWITHMUSHROOMS_H
#define LEARNINGFORTEST_PIZZAWITHMUSHROOMS_H


#include "PizzaDecorator.h"

class PizzaWithMushrooms: public PizzaDecorator {
public:
    PizzaWithMushrooms(Pizza* pizza):PizzaDecorator(pizza) {}
    double getCost() override;
    std::string getIngridients() override;

};


#endif //LEARNINGFORTEST_PIZZAWITHMUSHROOMS_H
