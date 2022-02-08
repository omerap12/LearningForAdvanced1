//
// Created by omera on 08/02/2022.
//

#include "StarWarsArmory.h"
#include "LightSaber.h"
#include "Deflector.h"

Sword *StarWarsArmory::createSword() {
    return new LightSaber();
}

Shield *StarWarsArmory::createShield() {
    return new Deflector();
}
