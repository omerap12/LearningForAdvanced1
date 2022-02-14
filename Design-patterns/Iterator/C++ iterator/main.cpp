#include <iostream>
#include <algorithm>
#include "LinkedList.h"


int main() {
    LinkedList* l = new LinkedList(5);
    l->add(new LinkedList(4));
    l->add(new LinkedList(3));
    l->add(new LinkedList(2));
    l->add(new LinkedList(1));
    l->add(new LinkedList(0));
    std::for_each(l->begin(),l->end(),[](LinkedList* l){std::cout<<l->getVal()<<std::endl;}); // 5 4 3 2 1 0
}
