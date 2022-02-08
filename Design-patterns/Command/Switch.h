//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_SWITCH_H
#define LEARNINGFORTEST_SWITCH_H

//the invoker

#include "Command.h"

class Switch {
private:
    Command* open;
    Command* close;
public:
    Switch(Command* o, Command* c){
        this->open = o;
        this->close = c;
    }

    void Open() const;
    void Close() const;
};


#endif //LEARNINGFORTEST_SWITCH_H
