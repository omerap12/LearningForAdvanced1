//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_BRICKIMP_H
#define LEARNINGFORTEST_BRICKIMP_H


#include "Implementor.h"

class BrickImp: public Implementor{
public:
    std::string getDescription() override{
        return "BrickImp";
    }
};


#endif //LEARNINGFORTEST_BRICKIMP_H
