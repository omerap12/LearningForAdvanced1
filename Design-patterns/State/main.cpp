#include <iostream>
#include "State.h"
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"


int main() {
    Context* context = new Context();
    State* s = new ConcreteStateA();
    State* s1 = new ConcreteStateB();
    context->setState(s);
    context->Request(); //HELLO
    context->setState(s1);
    context->Request(); //hello
}
