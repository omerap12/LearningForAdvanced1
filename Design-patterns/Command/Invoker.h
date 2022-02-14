//
// Created by omera on 14/02/2022.
//

#ifndef LEARNINGFORTEST_INVOKER_H
#define LEARNINGFORTEST_INVOKER_H


#include "Command.h"

class Invoker {
private:
    Command* command;
public:

    void Execute() {
        this->command->Execute();
    }

    void setCommand(Command* c){
        this->command =c;
    }

};


#endif //LEARNINGFORTEST_INVOKER_H
