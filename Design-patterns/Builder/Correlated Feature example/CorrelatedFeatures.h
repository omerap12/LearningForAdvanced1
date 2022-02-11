//
// Created by omera on 11/02/2022.
//

#ifndef LEARNINGFORTEST_CORRELATEDFEATURES_H
#define LEARNINGFORTEST_CORRELATEDFEATURES_H


#include <string>

class CorrelatedFeatures {
public:
    const std::string feature1;
    const std::string feature2;
    const double correlation;

    // Because we the class fields are const we have to initialized them at the constructor initializer

    CorrelatedFeatures(std::string f1, std::string f2, double cor): feature1(f1), feature2(f2), correlation(cor){};






};


#endif //LEARNINGFORTEST_CORRELATEDFEATURES_H
