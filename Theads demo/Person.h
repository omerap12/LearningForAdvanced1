//
// Created by omera on 09/02/2022.
//

#ifndef LEARNINGFORTEST_PERSON_H
#define LEARNINGFORTEST_PERSON_H


#include <string>

class Person {
public:
    std::string name;
    int money;

    Person(std::string n, int m){
        this->name = std::move(n);
        this->money = m;
    }

};


#endif //LEARNINGFORTEST_PERSON_H
