//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_CIRCLE_H
#define LEARNINGFORTEST_CIRCLE_H


#include <iostream>
#include "Shape.h"

class Circle: public Shape {
public:
    void draw() override {
        std::cout << "Circle" << std::endl;
    };
};

#endif //LEARNINGFORTEST_CIRCLE_H