//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_BICYCLE_H
#define LEARNINGFORTEST_BICYCLE_H

//the product

#include <string>


//product

class Bicycle {
private:
    std::string company;
    std::string model;
    std::string color;
    int height;
public:
    Bicycle(std::string c, std::string m, std::string co, int h){
        this->company = std::move(c);
        this->model = std::move(m);
        this->color = std::move(co);
        this->height = h;
    }
    void printInfo();


};


#endif //LEARNINGFORTEST_BICYCLE_H
