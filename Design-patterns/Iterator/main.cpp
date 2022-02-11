#include <iostream>
#include <vector>
#include "ConcreteIterator.h"
#include "Girl.h"
#include "Boy.h"

/**
 * The Concrete iterator constructor.
 * @param obj1
 */
ConcreteIterator::ConcreteIterator(ConcreteAggregate *obj1) {
    obj = obj1;
    index = 0;
}

/**
 * The create Iterator function.
 * @return
 */
Iterator* ConcreteAggregate::CreateIterator() {
    return new ConcreteIterator(this);
}


int main() {
    Person* p1 = new Girl("Dvir");
    Person* p2 = new Girl("Ron");
    Person* p3 = new Boy("Omer");
    Person* p4 = new Boy("Shachar");


    ConcreteAggregate* city = new ConcreteAggregate();
    city->Add(p1);
    city->Add(p2);
    city->Add(p3);
    city->Add(p4);


    //creating the iterator
    Iterator* iterator = city->CreateIterator();

    //using the iterator
    for(iterator->First();!(iterator->IsDone()); iterator->Next())
        iterator->CurrentItem()->speak();
}
