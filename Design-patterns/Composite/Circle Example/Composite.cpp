//
// Created by omera on 07/02/2022.
//

#include "Composite.h"
#include "iostream"

void Composite::Add(Component* c) {
    if (!isCircle(c)) {
        c->setFather(this);
        this->children.push_back(c);
    }
    else{
        std::cout<<"We have circle - not OK! "<<std::endl;
    }
}



void Composite::operation(){
    std::cout<<"Commander: "<<this->name<<" With soldiers: "<<std::endl;
    int length = this->children.size();
    for (int i = 0; i<length; i++)
        children[i]->operation();
}

void Composite::setFather(Component *f) {
    this->father = f;
}

bool Composite::isCircle(Component* c) {
    Component* temp = this;
    while (temp != nullptr){
        if (temp == c)
            return true;
        temp = temp->getFather();
    }
    return false;
}

Component *Composite::getFather() {
    return this->father;
}

