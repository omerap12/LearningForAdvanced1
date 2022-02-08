//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_ARMORY_H
#define LEARNINGFORTEST_ARMORY_H

#include "Sword.h"
#include "Shield.h"

//interface for creating armor and weapon
class Armory {
public:
    virtual Sword* createSword() = 0;
    virtual Shield* createShield() = 0;

};


#endif //LEARNINGFORTEST_ARMORY_H
