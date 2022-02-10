//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_FATHER_H
#define LEARNINGFORTEST_FATHER_H

//base class

#include "Prototype.h"
#include "Child.h"
#include <iostream>

class Father: public Prototype {
protected:
    int id;
    Prototype* child;
public:
    Father(int i, Prototype* c){
        this->id = i;
        this->child = c;
    }
    int getId() override{
        return this->id;
    }
    bool checkIfSame(const Prototype* other) override{
        return this == other && other == this->child;
    }
    void print() const override{
        std::cout<<"Father: ID - "<<this->id<<" ";
        this->child->print();
    }
    Prototype* Clone() override{
        return new Father(id,this->child->Clone());
    }
};


#endif //LEARNINGFORTEST_FATHER_H
