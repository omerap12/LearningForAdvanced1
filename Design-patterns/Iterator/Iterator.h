//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_ITERATOR_H
#define LEARNINGFORTEST_ITERATOR_H

//Iterator interface

#include "Person.h"

class Iterator {
public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual Person* CurrentItem() = 0;


};


#endif //LEARNINGFORTEST_ITERATOR_H
