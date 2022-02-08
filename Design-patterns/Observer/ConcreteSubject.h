//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_CONCRETESUBJECT_H
#define LEARNINGFORTEST_CONCRETESUBJECT_H


#include "Subject.h"

class ConcreteSubject: public Subject {
public:
    void GetState();
    void setState(std::string);
};


#endif //LEARNINGFORTEST_CONCRETESUBJECT_H
