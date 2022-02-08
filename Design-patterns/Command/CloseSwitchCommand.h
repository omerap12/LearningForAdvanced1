//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_CLOSESWITCHCOMMAND_H
#define LEARNINGFORTEST_CLOSESWITCHCOMMAND_H

#include "Command.h"
#include "Swichable.h"

//concrete command
class CloseSwitchCommand:public Command {
private:
    Swichable* light;
public:
    CloseSwitchCommand(Swichable* l) {
        this->light = l;
    }
    void Execute() override;



};


#endif //LEARNINGFORTEST_CLOSESWITCHCOMMAND_H
