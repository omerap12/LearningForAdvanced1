//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_PROTOTYPE_H
#define LEARNINGFORTEST_PROTOTYPE_H

//base class

#include <string>
#include <iostream>

class Prototype {
protected:
    int id;
    int type;

public:
    virtual Prototype* Clone() = 0;
    int getId(){
        return this->id;
    }
    int getType(){
        return this->type;
    }
    bool checkIfSame(const Prototype* other){
        return this == other;
    }
    void print() const{
        std::cout<<"ID: "<<this->id<<std::endl;
        std::cout<<"Type: "<<this->type<<std::endl;
    }
};


#endif //LEARNINGFORTEST_PROTOTYPE_H
