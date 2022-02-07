//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_RECTANGLE_H
#define LEARNINGFORTEST_RECTANGLE_H


#include <iostream>
#include "Shape.h"

class Rectangle: public Shape{
public:
    void draw() override{
        std::cout<<"Rectangle"<<std::endl;
    };
};


#endif //LEARNINGFORTEST_RECTANGLE_H
