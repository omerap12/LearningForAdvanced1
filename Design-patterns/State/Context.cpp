//
// Created by omera on 08/02/2022.
//

#include "Context.h"

void Context::Request() {
    this->state->Handle();

}

void Context::setState(State *s) {
    this->state = s;
}


