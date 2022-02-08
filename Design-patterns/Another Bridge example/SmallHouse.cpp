//
// Created by omera on 08/02/2022.
//

#include <iostream>
#include "SmallHouse.h"
#include "House.h"

void SmallHouse::printHouse() {
    std::cout<<SmallHouse::imp->getDescription()<<" as small house"<<std::endl;
}
