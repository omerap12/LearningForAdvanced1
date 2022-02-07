//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_PIZZADECORATOR_H
#define LEARNINGFORTEST_PIZZADECORATOR_H


#include "Pizza.h"
#include "SimplePizza.h"

//abstract class - Decorator in the uml

class PizzaDecorator: public Pizza {
private:
    Pizza* pizza;
public:
    PizzaDecorator(Pizza* s) {
        this->pizza = s;
    }
    double getCost() override;
    std::string getIngridients() override;


};


#endif //LEARNINGFORTEST_PIZZADECORATOR_H
