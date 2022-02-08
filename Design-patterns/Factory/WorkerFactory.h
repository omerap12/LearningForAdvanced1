//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_WORKERFACTORY_H
#define LEARNINGFORTEST_WORKERFACTORY_H

#include "Worker.h"

// using as interface
class WorkerFactory {
public:
    virtual Worker* create() = 0;
};


#endif //LEARNINGFORTEST_WORKERFACTORY_H
