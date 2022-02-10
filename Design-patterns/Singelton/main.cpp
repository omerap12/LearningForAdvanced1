#include <iostream>
#include <vector>
#include "Singleton.h"


int main() {
    Singleton& only_one = Singleton::getInstance();
    std::cout<<only_one.getName()<<std::endl;
    Singleton& think_he_is_two = Singleton::getInstance();
    std::cout<<think_he_is_two.getName()<<std::endl;

    bool isTheSame = &think_he_is_two==&only_one;

    std::cout<<isTheSame<<std::endl; //print 1





}
