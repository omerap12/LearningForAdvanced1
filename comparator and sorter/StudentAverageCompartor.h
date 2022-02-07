//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_STUDENTAVERAGECOMPARTOR_H
#define LEARNINGFORTEST_STUDENTAVERAGECOMPARTOR_H

#include "Student.h"

class StudentAverageCompartor {
public:
    bool operator()(Student* one, Student* two) {
        if (one->getAvg() < two->getAvg()) {
            return false;
        }
        return true;
    }
};


#endif //LEARNINGFORTEST_STUDENTAVERAGECOMPARTOR_H
