#include <iostream>
#include "Armory.h"
#include "StarWarsArmory.h"
#include "PlainArmory.h"


int main() {
    Armory* starwars = new StarWarsArmory();
    Armory* plain = new PlainArmory();

    Sword* lightSaber = starwars->createSword();
    Sword* plainsword = plain->createSword();

    Shield* deflector = starwars->createShield();
    Shield* plainshield = plain->createShield();

    lightSaber->description();
    plainsword->description();
    deflector->description();
    plainshield->description();









}
