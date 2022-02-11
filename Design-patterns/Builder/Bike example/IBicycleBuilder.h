//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_IBICYCLEBUILDER_H
#define LEARNINGFORTEST_IBICYCLEBUILDER_H

//builder interface
#include "Bicycle.h"

class IBicycleBuilder {
public:
    virtual void setColor(std::string c) = 0;
    virtual void setHeight(int h) = 0;
    virtual Bicycle* createproduct() const = 0;
};


#endif //LEARNINGFORTEST_IBICYCLEBUILDER_H
