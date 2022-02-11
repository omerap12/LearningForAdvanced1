//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_LEAF_H
#define LEARNINGFORTEST_LEAF_H


#include "Component.h"

class Leaf : public Component{
    Component* father;
    std::string name;
public:
    Leaf(std::string Name){
        this->name = std::move(Name);
    }
    void operation() override;
    void setFather(Component* f) override;
    Component* getFather() override;
    bool isCircle(Component* c) override;
};


#endif //LEARNINGFORTEST_LEAF_H
