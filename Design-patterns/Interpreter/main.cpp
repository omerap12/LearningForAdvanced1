#include <iostream>
#include "TerminalExpression.h"
#include "OrExpression.h"
#include "AndExpression.h"


int main() {
    AbstractExpression* T = new TerminalExpression(true);
    AbstractExpression* F = new TerminalExpression(false);
    AbstractExpression* Or = new OrExpression(T,F); //1
    AbstractExpression* And = new AndExpression(T,F); //0
    AbstractExpression* OverAll = new AndExpression(Or,And); //0
    std::cout<<OverAll->Interpreter()<<std::endl; //print 0
}
