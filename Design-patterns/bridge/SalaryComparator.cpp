//
// Created by omera on 07/02/2022.
//

#include "SalaryComparator.h"

int SalaryComparator::compare(Employee *e1, Employee *e2) {
   return e1->getSalary() - e2->getSalary();
}
