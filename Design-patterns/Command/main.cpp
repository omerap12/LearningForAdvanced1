#include <iostream>
#include "Swichable.h"
#include "OpenSwitchCommand.h"
#include "CloseSwitchCommand.h"
#include "Invoker.h"


int main() {
    Swichable* light = new Swichable();
    light->print(); //light is off
    Command* openCommand = new OpenSwitchCommand(light);
    Command* closeCommand = new CloseSwitchCommand(light);

    Invoker* invoker = new Invoker();
    invoker->setCommand(openCommand);
    invoker->Execute();

    invoker->setCommand(closeCommand);
    invoker->Execute();

}
