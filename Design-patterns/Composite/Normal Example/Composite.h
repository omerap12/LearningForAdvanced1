//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_COMPOSITE_H
#define LEARNINGFORTEST_COMPOSITE_H


#include <vector>
#include <string>
#include "Component.h"

class Composite : public Component{
    std::vector<Component*> childern;
    std::string name;
public:
    Composite(std::string Name) {
        this->name = std::move(Name);
    }
    void Add(Component* c);
    void operation() override;
};


#endif //LEARNINGFORTEST_COMPOSITE_H
