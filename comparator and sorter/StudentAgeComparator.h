//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_STUDENTAGECOMPARATOR_H
#define LEARNINGFORTEST_STUDENTAGECOMPARATOR_H

#include "Student.h"

class StudentAgeComparator {
public:
    bool operator()(Student* one,Student* two) {
        if (one->getAge() - two->getAge() < 0) {
            return false;
        }
        return true;
    }
};


#endif //LEARNINGFORTEST_STUDENTAGECOMPARATOR_H
