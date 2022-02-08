//
// Created by omera on 08/02/2022.
//

#include "TACreator.h"
#include "TA.h"

Worker *TACreator::create() {
    return new TA();
}
