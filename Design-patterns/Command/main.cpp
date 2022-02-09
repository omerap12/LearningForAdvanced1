#include <iostream>
#include "Swichable.h"
#include "OpenSwitchCommand.h"
#include "CloseSwitchCommand.h"


int main() {
    Swichable* light = new Swichable();
    light->print(); //light is off
    Command* openCommand = new OpenSwitchCommand(light);
    Command* closeCommand = new CloseSwitchCommand(light);
    openCommand->Execute(); //light is on
    closeCommand->Execute(); //light is off
}
