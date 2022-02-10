//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_CHILD_H
#define LEARNINGFORTEST_CHILD_H


#include "Father.h"
#include <iostream>

class Child:public Prototype{
private:
    int id;
public:
    Child(int i){
        this->id = i;
    }
    Prototype* Clone() override{
        return new Child(id);
    }
    int getId() override{
        return this->id;
    }
    bool checkIfSame(const Prototype* other){
        return this==other;
    }
    void print() const override{
        std::cout<<"Child: "<<this->id<<std::endl;
    }
};


#endif //LEARNINGFORTEST_CHILD_H
