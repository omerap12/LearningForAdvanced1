//
// Created by omera on 07/02/2022.
//

#include "BubbleSorter.h"

void BubbleSorter::sort(Employee* employees[], Comparator* c,int length) {
    int i, j;
    for (i = 0; i < length-1; i++)
        for (j = 0; j < length-i-1; j++) {
            if (c->compare(employees[j],employees[j+1])>=0) {
                Employee* temp = employees[j];
                employees[j] = employees[j+1];
                employees[j+1] = temp;
        }
    }
}
