#include <iostream>
#include "BigHouse.h"
#include "StrawImp.h"
#include "SmallHouse.h"
#include "BrickImp.h"


int main() {
    Implementor* straw = new StrawImp();
    House* omers_house = new BigHouse();
    omers_house->setImp(straw);
    std::cout<<"Omers: house -";
    omers_house->printHouse();
    House* shachars_house = new SmallHouse();
    Implementor* brick = new BrickImp();
    shachars_house->setImp(brick);
    std::cout<<"Shachars: house -";
    shachars_house->printHouse();




}
