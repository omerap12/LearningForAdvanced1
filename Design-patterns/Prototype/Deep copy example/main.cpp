#include <iostream>
#include <vector>
#include "Prototype.h"
#include "Father.h"


int main() {

    Prototype* a = new Child(10);
    Prototype* father1 = new Father(1,a);
    Child* b = new Child(20);
    Prototype* father2 = new Father(2,b);

    std::vector<Prototype*> first_location;
    /**
     * first storing location of the prototypes
     */
    first_location.push_back(father2);
    first_location.push_back(father1);
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
