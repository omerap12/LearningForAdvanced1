#include <iostream>
#include "Person.h"


int main() {
    Person p(22,1000);
    p.print(); //22 1000

    p++;
    p.print(); //23 1050

    ++p;
    p.print(); //24 1100

    p--;
    p.print(); //23 1050

    --p;
    p.print(); //22 1000
}
