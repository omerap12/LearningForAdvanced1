//
// Created by omera on 08/02/2022.
//

#include "CloseSwitchCommand.h"

void CloseSwitchCommand::Execute() {
    this->light->PowerOf();
}
