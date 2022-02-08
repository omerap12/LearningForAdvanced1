//
// Created by omera on 08/02/2022.
//

#include "Switch.h"

void Switch::Open() const {
    this->open->Execute();
}
void Switch::Close() const{
    this->close->Execute();
}
