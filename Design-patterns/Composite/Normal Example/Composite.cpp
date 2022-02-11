//
// Created by omera on 07/02/2022.
//

#include "Composite.h"
#include "iostream"

void Composite::Add(Component* c) {
    this->childern.push_back(c);
}
void Composite::operation(){
    std::cout<<"Commander: "<<this->name<<" With soldiers: "<<std::endl;
    int length = this->childern.size();
    for (int i = 0; i<length; i++)
        childern[i]->operation();
}

