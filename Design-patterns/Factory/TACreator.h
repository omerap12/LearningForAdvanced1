//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_TACREATOR_H
#define LEARNINGFORTEST_TACREATOR_H


#include "WorkerFactory.h"

class TACreator: public WorkerFactory {
public:
    Worker* create() override;

};


#endif //LEARNINGFORTEST_TACREATOR_H
