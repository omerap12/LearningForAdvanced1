//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_MOUNTAINDIRECTOR_H
#define LEARNINGFORTEST_MOUNTAINDIRECTOR_H


#include "IBicycleBuilder.h"

//director
class MountainDirector {
private:
    IBicycleBuilder* builder;
public:
    MountainDirector(IBicycleBuilder* b){
        this->builder = b;
    }
    void construct();
    Bicycle* createproduct() const;

};


#endif //LEARNINGFORTEST_MOUNTAINDIRECTOR_H
