//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_STUDENT_H
#define LEARNINGFORTEST_STUDENT_H

#include <iostream>
#include <string.h>

class Student {
private:
    std::string name;
    int age;
    float avg;
public:
    Student(std::string Name, int Age, float Avg) {
        this->name = std::move(Name);
        this->age = Age;
        this->avg = Avg;
    }
    void PrintStudent();
    const std::string getName();
    int getAge();
    int getAvg();
};


#endif //LEARNINGFORTEST_STUDENT_H
