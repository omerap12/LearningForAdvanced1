//
// Created by omera on 08/02/2022.
//

#include <iostream>
#include "Swichable.h"

void Swichable::PowerOf(){
    if(this->isOn){
        this->isOn = false;
        std::cout<<"Light is off"<<std::endl;
    }
    else{
        std::cout<<"Light in already off"<<std::endl;
    }


}

void Swichable::PowerOn(){
    if(this->isOn){
        std::cout<<"Light is already on"<<std::endl;
    }
    else{
        this->isOn = true;
        std::cout<<"Light in on"<<std::endl;
    }
}

void Swichable::print() const {
    if (this->isOn)
        std::cout<<"At the current moment light is on"<<std::endl;
    else{
        std::cout<<"At the current moment light is off"<<std::endl;

    }

}
