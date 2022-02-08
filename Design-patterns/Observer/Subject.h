//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_SUBJECT_H
#define LEARNINGFORTEST_SUBJECT_H


#include <vector>
#include "Observer.h"

class Subject {
public:
    std::vector<Observer*> observers;
    bool state;
public:
    Subject(){
        this->state = false;
    }
    void Attach(Observer* newOne);
    void Detach(Observer* toRemove);
    void Notify(std::string event);


};


#endif //LEARNINGFORTEST_SUBJECT_H
