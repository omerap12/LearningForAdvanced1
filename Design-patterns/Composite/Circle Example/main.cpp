#include <iostream>
#include "Composite.h"
#include "Leaf.h"


int main() {
    Composite* a = new Composite("A");
    Leaf* leaf = new Leaf("B");
    Composite* composite2 = new Composite("C",a);
    Leaf* leaf2 = new Leaf("D");
    Leaf* leaf3 = new Leaf("E");
    composite2->Add(leaf2);
    a->Add(leaf);
    a->Add(composite2);
    composite2->Add(leaf3);

    //no circle - OK
    a->operation();

    //now circle - not ok
    a->Add(leaf2);
}
