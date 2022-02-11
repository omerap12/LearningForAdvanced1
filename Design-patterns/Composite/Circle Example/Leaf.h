//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_LEAF_H
#define LEARNINGFORTEST_LEAF_H


#include "Component.h"

class Leaf : public Component{
    std::string name;
    void operation() override;
public:
    Leaf(std::string Name){
        this->name = std::move(Name);
    }
    bool isCircle(Component* newOne) override{
        return true;
    }
    bool callingRoot(Component* newOne) override{
        return this->name == newOne->getName();
    }
    std::string getName() override{
        return this->name;
    }




};


#endif //LEARNINGFORTEST_LEAF_H
