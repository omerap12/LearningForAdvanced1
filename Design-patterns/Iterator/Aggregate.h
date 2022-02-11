//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_AGGREGATE_H
#define LEARNINGFORTEST_AGGREGATE_H


#include "Iterator.h"

class Aggregate {
public:
    virtual Iterator* CreateIterator() = 0;

};


#endif //LEARNINGFORTEST_AGGREGATE_H
