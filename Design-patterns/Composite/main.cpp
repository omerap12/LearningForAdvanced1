#include <iostream>
#include "Composite.h"
#include "Leaf.h"


int main() {
    Composite* composite = new Composite("Omer");

    Leaf* leaf = new Leaf("Shachar");
    Leaf* leaf1 = new Leaf("Yali");

    Composite* composite2 = new Composite("Noa");
    Leaf* leaf2 = new Leaf("Tomer");
    Leaf* leaf3 = new Leaf("Noam");

    composite2->Add(leaf2);
    composite2->Add(leaf3);
    composite->Add(leaf);
    composite->Add(leaf1);
    composite->Add(composite2);





    composite->operation();



}
