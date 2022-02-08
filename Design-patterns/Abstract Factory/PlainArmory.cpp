//
// Created by omera on 08/02/2022.
//

#include "PlainArmory.h"
#include "PlainSword.h"
#include "PlainShield.h"

Sword *PlainArmory::createSword() {
    return new PlainSword();
}

Shield *PlainArmory::createShield() {
    return new PlainShield();
}
