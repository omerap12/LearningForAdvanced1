//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_STARWARSARMORY_H
#define LEARNINGFORTEST_STARWARSARMORY_H


#include "Armory.h"

class StarWarsArmory: public Armory {
    Sword* createSword() override;
    Shield* createShield() override;
};


#endif //LEARNINGFORTEST_STARWARSARMORY_H
