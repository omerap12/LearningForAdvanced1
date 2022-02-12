//
// Created by omer on 12/02/2022.
//

#ifndef LEARNINING_FO_TEST_PERSON_H
#define LEARNINING_FO_TEST_PERSON_H


#include <iostream>

class Person {
private:
    int m_age;
    double m_money;
public:
    Person(int age, double money){
        this->m_age = age;
        this->m_money = money;
    }

    //prefix operators
    Person& operator ++(){
        this->m_age += 1;
        this->m_money += 50;
        return *this;
    }

    Person& operator --(){
        this->m_age -= 1;
        this->m_money -= 50;
        return *this;
    }

    //postfix operators
    Person operator ++(int){
        Person temp = *this;
        ++*this;
        return temp;
    }

    //postfix operators
    Person operator --(int){
        Person temp = *this;
        --*this;
        return temp;
    }

    void print() {
        std::cout<<this->m_age<<" "<<this->m_money<<std::endl;
    }




};


#endif //LEARNINING_FO_TEST_PERSON_H
