//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_CONCRETEAGGREGATE_H
#define LEARNINGFORTEST_CONCRETEAGGREGATE_H


#include <vector>
#include "Person.h"
#include "Aggregate.h"

class ConcreteAggregate:public Aggregate {
private:
    std::vector<Person*> persons;
public:
    void Add(Person* p) {
        this->persons.push_back(p);
    }
    Iterator *CreateIterator();

    int getSize() {
        return persons.size();
    }
    Person* getElement(int index){
        return persons[index];
    }


};


#endif //LEARNINGFORTEST_CONCRETEAGGREGATE_H
