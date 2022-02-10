//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_PROTOTYPE_H
#define LEARNINGFORTEST_PROTOTYPE_H

//interface
class Prototype {
public:
    virtual Prototype* Clone() = 0;
    virtual int getId() = 0;
    virtual bool checkIfSame(Prototype* other) = 0;
    virtual void print() const = 0;
    virtual Prototype* getChild() = 0;
};


#endif //LEARNINGFORTEST_PROTOTYPE_H
