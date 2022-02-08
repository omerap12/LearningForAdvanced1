#include <iostream>
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"


int main() {
    /**
     * set observers and subject, observers state change only if info is omer (they get notify every time)
     */
    Observer* c = new ConcreteObserver();
    Observer* c1 = new ConcreteObserver();
    c->printState();
    c1->printState();
    ConcreteSubject* s = new ConcreteSubject();
    s->GetState();
    s->Attach(c);
    s->Attach(c1);
    s->setState("omer");
    s->Detach(c1);
    s->setState("on");










}
