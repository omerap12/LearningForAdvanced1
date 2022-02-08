//
// Created by omera on 08/02/2022.
//

#include "LecturerCreator.h"
#include "Lecturer.h"

Worker* LecturerCreator::create() {
    return new Lecturer();
}
