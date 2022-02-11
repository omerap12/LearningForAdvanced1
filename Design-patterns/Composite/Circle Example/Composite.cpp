//
// Created by omera on 07/02/2022.
//

#include "Composite.h"
#include "iostream"

void Composite::Add(Component* c) {
    if (!isCircle(c))
        this->childern.push_back(c);
    else{
        std::cout<<"We have circle - not OK! "<<std::endl;
    }
}

bool Composite::isCircle(Component* newOne){
    return this->root->callingRoot(newOne);
}


void Composite::operation(){
    std::cout<<"Commander: "<<this->name<<" With soldiers: "<<std::endl;
    int length = this->childern.size();
    for (int i = 0; i<length; i++)
        childern[i]->operation();
}

bool Composite::callingRoot(Component *newOne) {
    if (this->name == newOne->getName())
        return true;
    if (this->childern.size() == 2)
        return this->childern[0]->callingRoot(newOne) || this->childern[1]->callingRoot(newOne);
    if (this->childern.size() == 1)
        return this->childern[0]->callingRoot(newOne);
    return false;
}

