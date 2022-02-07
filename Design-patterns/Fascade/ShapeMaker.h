//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_SHAPEMAKER_H
#define LEARNINGFORTEST_SHAPEMAKER_H


#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeMaker {
private:
    Shape* circle;
    Shape* rectangle;
    Shape* square;
public:
    ShapeMaker(){
        this->circle = new Circle();
        this->rectangle = new Rectangle();
        this->square = new Square();
    }
    void printCircle();
    void printRectangle();
    void printSquare();
};


#endif //LEARNINGFORTEST_SHAPEMAKER_H
