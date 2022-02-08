#include <iostream>
#include "IBicycleBuilder.h"
#include "GTbuilder.h"
#include "MountainDirector.h"


int main() {
    IBicycleBuilder* builder = new GTbuilder();
    MountainDirector* director = new MountainDirector(builder);
    director->construct();
    Bicycle* b = director->createproduct();
    b->printInfo();


}
