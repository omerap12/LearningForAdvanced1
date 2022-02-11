//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_COMPOSITE_H
#define LEARNINGFORTEST_COMPOSITE_H


#include <vector>
#include <string>
#include "Component.h"

class Composite : public Component{
    Component* root;
    std::vector<Component*> childern;
    std::string name;
public:
    Composite(std::string Name) {
        this->name = std::move(Name);
        this->root = this;
    }
    Composite(std::string Name, Component* r){
        this->name = std::move(Name);
        this->root = r;
    }

    std::string getName() override{
        return this->name;
    }

    void Add(Component* c);
    void operation() override;
    bool isCircle(Component* newOne) override;
    bool callingRoot(Component* newOne) override;
};


#endif //LEARNINGFORTEST_COMPOSITE_H
