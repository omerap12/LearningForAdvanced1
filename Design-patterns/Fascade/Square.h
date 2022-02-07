//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_SQUARE_H
#define LEARNINGFORTEST_SQUARE_H


#include <iostream>
#include "Shape.h"

class Square: public Shape {
public:
    void draw() override {
        std::cout << "Square" << std::endl;
    };
};


#endif //LEARNINGFORTEST_SQUARE_H
