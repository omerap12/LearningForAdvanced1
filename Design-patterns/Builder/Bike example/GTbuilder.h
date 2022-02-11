//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_GTBUILDER_H
#define LEARNINGFORTEST_GTBUILDER_H

//concrete builder
#include "IBicycleBuilder.h"

class GTbuilder: public IBicycleBuilder {
private:
    std::string model; //buildPart 1
    std::string color; // buildPart x
    int height; //buildPart x
public:
    void setColor(std::string c) override;
    void setHeight(int h) override;
    Bicycle* createproduct() const override;

};


#endif //LEARNINGFORTEST_GTBUILDER_H
