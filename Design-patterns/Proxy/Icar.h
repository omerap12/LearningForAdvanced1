//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_ICAR_H
#define LEARNINGFORTEST_ICAR_H

#include <iostream>

class Icar {
public:
    virtual void drive() = 0;
    virtual ~Icar() {
        std::cout << "ICar destructor!" << std::endl;
    }
};


#endif //LEARNINGFORTEST_ICAR_H
