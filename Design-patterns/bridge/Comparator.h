//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_COMPARATOR_H
#define LEARNINGFORTEST_COMPARATOR_H

#include "Employee.h"

/**
 * Abstract class of comparator - like interface in java
 */

class Comparator {
public:
    virtual int compare(Employee* e1, Employee* e2) = 0;
};


#endif //LEARNINGFORTEST_COMPARATOR_H
