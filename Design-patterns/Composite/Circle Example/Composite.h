//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_COMPOSITE_H
#define LEARNINGFORTEST_COMPOSITE_H


#include <vector>
#include <string>
#include "Component.h"

class Composite : public Component{
private:
    Component* father;
    std::vector<Component*> children;
    std::string name;
public:
    Composite(std::string Name) {
        this->name = std::move(Name);
        this->father = nullptr;
    }

    void setFather(Component* f) override;
    void Add(Component* c);
    void operation() override;
    bool isCircle(Component* c);
    Component* getFather() override;
};


#endif //LEARNINGFORTEST_COMPOSITE_H
