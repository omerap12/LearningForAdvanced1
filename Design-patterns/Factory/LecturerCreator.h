//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_LECTURERCREATOR_H
#define LEARNINGFORTEST_LECTURERCREATOR_H


#include "WorkerFactory.h"

class LecturerCreator: public WorkerFactory {
public:
    Worker* create() override;

};


#endif //LEARNINGFORTEST_LECTURERCREATOR_H
