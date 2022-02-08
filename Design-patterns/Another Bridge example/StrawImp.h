//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_STRAWIMP_H
#define LEARNINGFORTEST_STRAWIMP_H


#include "Implementor.h"

class StrawImp: public Implementor {
public:
    std::string getDescription() override {
        return "StrawImp";
    }
};


#endif //LEARNINGFORTEST_STRAWIMP_H
