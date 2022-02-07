//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_PIZZA_H
#define LEARNINGFORTEST_PIZZA_H

//interface - component in the uml

#include <string>

class Pizza {
public:
    virtual double getCost() = 0;
    virtual std::string getIngridients() = 0;

};


#endif //LEARNINGFORTEST_PIZZA_H
