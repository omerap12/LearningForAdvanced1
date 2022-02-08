//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_CONCRETEOBSERVER_H
#define LEARNINGFORTEST_CONCRETEOBSERVER_H


#include "Observer.h"

class ConcreteObserver: public Observer {
public:
    bool state;
public:
    ConcreteObserver(){
        this->state = false;
    }
    void Update(std::string info) override;
    void printState() override;
};


#endif //LEARNINGFORTEST_CONCRETEOBSERVER_H
