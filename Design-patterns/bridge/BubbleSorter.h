//
// Created by omera on 07/02/2022.
//

#ifndef LEARNINGFORTEST_BUBBLESORTER_H
#define LEARNINGFORTEST_BUBBLESORTER_H

#include "Sorter.h"
class BubbleSorter:public Sorter {
public:
    void sort(Employee* employees[], Comparator* c,int length);
};


#endif //LEARNINGFORTEST_BUBBLESORTER_H
