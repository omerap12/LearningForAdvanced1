//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_OREXPRESSION_H
#define LEARNINGFORTEST_OREXPRESSION_H


#include "AbstractExpression.h"

class OrExpression: public AbstractExpression {
private:
    AbstractExpression* exp1;
    AbstractExpression* exp2;
public:
    OrExpression(AbstractExpression* e1, AbstractExpression* e2){
        this->exp1 = e1;
        this->exp2 = e2;
    }
    bool Interpreter() override{
        return this->exp1->Interpreter() || this->exp2->Interpreter();
    }
};


#endif //LEARNINGFORTEST_OREXPRESSION_H
