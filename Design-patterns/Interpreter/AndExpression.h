//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_ANDEXPRESSION_H
#define LEARNINGFORTEST_ANDEXPRESSION_H


#include "AbstractExpression.h"

class AndExpression: public AbstractExpression {
private:
    AbstractExpression* exp1;
    AbstractExpression* exp2;
public:
    AndExpression(AbstractExpression* e1, AbstractExpression* e2){
        this->exp1 = e1;
        this->exp2 = e2;
    }
    bool Interpreter() override{
        return this->exp1->Interpreter() && this->exp2->Interpreter();
    }
};


#endif //LEARNINGFORTEST_ANDEXPRESSION_H
