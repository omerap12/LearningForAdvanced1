//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_SALARYCOMPARATOR_H
#define LEARNINGFORTEST_SALARYCOMPARATOR_H


#include "Comparator.h"

class SalaryComparator: public Comparator{
public:
    int compare(Employee* e1, Employee* e2);

};


#endif //LEARNINGFORTEST_SALARYCOMPARATOR_H
