//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_CFBUILDER_H
#define LEARNINGFORTEST_CFBUILDER_H


#include <string>
#include "CorrelatedFeatures.h"

class CFbuilder {
private:
    std::string feature1;
    std::string feature2;
    double correlation;
public:
    CFbuilder(){
        this->feature1 = "";
        this->feature2 = "";
        this->correlation = 0;
    }
    CFbuilder& setF1(std::string f1){
        this->feature1 = std::move(f1);
        return *this;
    }
    CFbuilder& setF2(std::string f2){
        this->feature2 = std::move(f2);
        return *this;
    }
    CFbuilder& setCor(double c){
        this->correlation = c;
        return *this;
    }
    CorrelatedFeatures build(){
        return CorrelatedFeatures(this->feature1,this->feature2,this->correlation);
    }



};


#endif //LEARNINGFORTEST_CFBUILDER_H
