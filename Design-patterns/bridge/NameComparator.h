//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_NAMECOMPARATOR_H
#define LEARNINGFORTEST_NAMECOMPARATOR_H

#include "Employee.h"
#include "Comparator.h"

/**
 * class NameComparator inherited from comparator
 */

class NameComparator:public Comparator {
public:
    int compare(Employee* a, Employee* b) {
        return a->getName().compare(b->getName());
    }
};


#endif //LEARNINGFORTEST_NAMECOMPARATOR_H
