//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_PIZZAWITHBACON_H
#define LEARNINGFORTEST_PIZZAWITHBACON_H


#include "PizzaDecorator.h"

class PizzaWithBacon: public PizzaDecorator {
public:
    PizzaWithBacon(Pizza* pizza):PizzaDecorator(pizza){};
    double getCost() override;
    std::string getIngridients() override;

};


#endif //LEARNINGFORTEST_PIZZAWITHBACON_H
