//
// Created by omer on 12/02/2022.
//

#ifndef LEARNINING_FO_TEST_DIVISIONBYZEROEXCEPTION_H
#define LEARNINING_FO_TEST_DIVISIONBYZEROEXCEPTION_H


#include <string>
#include <iostream>

class DivisionByZeroException {
private:
    std::string message;
public:
    DivisionByZeroException(){
        this->message  = "error: division by zero";
    }
    std::string getMessage(){
        return this->message;
    }
    void print(){
        std::cout<<this->message<<std::endl;
    }
};


#endif //LEARNINING_FO_TEST_DIVISIONBYZEROEXCEPTION_H
