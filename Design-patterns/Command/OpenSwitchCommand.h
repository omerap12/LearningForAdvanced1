//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_OPENSWITCHCOMMAND_H
#define LEARNINGFORTEST_OPENSWITCHCOMMAND_H


#include "Command.h"
#include "Swichable.h"

class OpenSwitchCommand: public Command {
private:
    Swichable* light;
public:
    OpenSwitchCommand(Swichable* l) {
        this->light = l;
    }
    void Execute() override;

};


#endif //LEARNINGFORTEST_OPENSWITCHCOMMAND_H
