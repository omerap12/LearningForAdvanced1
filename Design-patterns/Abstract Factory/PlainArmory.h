//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_PLAINARMORY_H
#define LEARNINGFORTEST_PLAINARMORY_H

#include "Sword.h"
#include "Shield.h"
#include "Armory.h"

//armory class for plain
class PlainArmory:public Armory {
public:
    Sword* createSword() override;
    Shield* createShield() override;

};


#endif //LEARNINGFORTEST_PLAINARMORY_H
