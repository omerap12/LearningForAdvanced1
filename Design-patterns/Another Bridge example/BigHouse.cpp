//
// Created by omera on 08/02/2022.
//

#include <iostream>
#include "BigHouse.h"

void BigHouse::printHouse() {
    std::cout<<BigHouse::imp->getDescription()<<" as big house"<<std::endl;
}
