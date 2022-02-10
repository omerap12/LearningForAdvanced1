#include <iostream>
#include <vector>
#include "Prototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"


int main() {
    std::vector<Prototype*> first_location;
    /**
     * first storing location of the prototypes
     */
    first_location.push_back(new ConcretePrototype1(10));
    first_location.push_back(new ConcretePrototype2(20));
    /**
     * copy to another vector
     */
    std::vector<Prototype*> second_location;
    second_location.push_back(first_location[0]->Clone());
    second_location.push_back(first_location[1]->Clone());

    /**
     * print data
     */
     for(int i = 0; i<2;i++){
         std::cout<<"first location"<<std::endl;
         first_location[i]->print();
     }
    for(int i = 0; i<2;i++){
        std::cout<<"second location"<<std::endl;
        second_location[i]->print();
    }

    /**
     * checking if the same object(address) ->print 0
     */
     for(int i = 0; i<2; i++){
         std::cout<<first_location[i]->checkIfSame(second_location[i])<<std::endl;
     }


}
