//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_SORTER_H
#define LEARNINGFORTEST_SORTER_H

#include "Employee.h"
#include "Comparator.h"

/**
 * Abstract class of Sorter - like interface in java
 */
class Sorter {
public:
    virtual void sort(Employee* employees[], Comparator* c,int length) = 0;
};


#endif //LEARNINGFORTEST_SORTER_H
