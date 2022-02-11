//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_CONCRETEITERATOR_H
#define LEARNINGFORTEST_CONCRETEITERATOR_H


#include "Iterator.h"
#include "ConcreteAggregate.h"

class ConcreteIterator: public Iterator {
private:
    ConcreteAggregate* obj;
    int index;
public:
    ConcreteIterator(ConcreteAggregate* obj);
    void First() override{
        this->index = 0;
    }
    void Next() override{
        this->index++;
    }
    bool IsDone() override{
        if (this->index >= obj->getSize())
            return true;
        return false;
    }
    Person* CurrentItem() override{
        return obj->getElement(index);
    }

};


#endif //LEARNINGFORTEST_CONCRETEITERATOR_H
