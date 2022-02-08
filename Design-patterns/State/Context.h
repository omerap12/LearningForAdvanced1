//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_CONTEXT_H
#define LEARNINGFORTEST_CONTEXT_H


#include "State.h"

class Context {
private:
    State* state;
public:
    void setState(State* s);
    void Request();
};


#endif //LEARNINGFORTEST_CONTEXT_H
