//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_TERMINALEXPRESSION_H
#define LEARNINGFORTEST_TERMINALEXPRESSION_H


#include "AbstractExpression.h"

class TerminalExpression: public AbstractExpression {
private:
    bool value;
public:
    TerminalExpression(bool v){
        this->value = v;
    }
    bool Interpreter() override{
        return this->value;
    };
};


#endif //LEARNINGFORTEST_TERMINALEXPRESSION_H
