#include <iostream>
#include "ShapeMaker.h"


int main() {
    ShapeMaker* master = new ShapeMaker();
    master->printCircle();
    master->printRectangle();
    master->printSquare();
}
