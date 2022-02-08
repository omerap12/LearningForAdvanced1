//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_OBSERVER_H
#define LEARNINGFORTEST_OBSERVER_H

#include <string>

//observer interface
class Observer {
public:
    virtual void Update(std::string info) = 0;
    virtual void printState() = 0;
};


#endif //LEARNINGFORTEST_OBSERVER_H
