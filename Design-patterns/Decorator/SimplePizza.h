//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_SIMPLEPIZZA_H
#define LEARNINGFORTEST_SIMPLEPIZZA_H


#include "Pizza.h"

class SimplePizza: public Pizza{
public:
    double getCost() override;
    std::string getIngridients() override;


};


#endif //LEARNINGFORTEST_SIMPLEPIZZA_H

