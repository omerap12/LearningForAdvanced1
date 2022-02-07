#include <iostream>
#include "Pizza.h"
#include "SimplePizza.h"
#include "PizzaWithMushrooms.h"
#include "PizzaWithBacon.h"


int main() {
    Pizza* simple = new SimplePizza();
    std::cout<<simple->getCost()<<std::endl;
    std::cout<<simple->getIngridients()<<std::endl;
    simple = new PizzaWithMushrooms(simple);
    std::cout<<simple->getCost()<<std::endl;
    std::cout<<simple->getIngridients()<<std::endl;
    simple = new PizzaWithBacon(simple);
    std::cout<<simple->getCost()<<std::endl;
    std::cout<<simple->getIngridients()<<std::endl;






}
