//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_COMPONENT_H
#define LEARNINGFORTEST_COMPONENT_H


//interface


#include <string>

class Component {
public:
    virtual void operation() = 0;
    virtual bool isCircle(Component* newOne) = 0;
    virtual std::string getName() = 0;
    virtual bool callingRoot(Component* newOne) = 0;

};


#endif //LEARNINGFORTEST_COMPONENT_H
