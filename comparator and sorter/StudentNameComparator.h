//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_STUDENTNAMECOMPARATOR_H
#define LEARNINGFORTEST_STUDENTNAMECOMPARATOR_H
#include "Student.h"
#include <string>

class StudentNameComparator {
public:
    bool operator()(Student* one, Student* two) {
        if (one->getName().compare(two->getName())<0){
            return false;
        }
        return true;
    }
};


#endif //LEARNINGFORTEST_STUDENTNAMECOMPARATOR_H
