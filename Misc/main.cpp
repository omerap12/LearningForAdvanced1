#include <iostream>
#include "Point.h"

// because compare is global function we can access private data members.
int compare(const Point& p1, const Point& p2){
    return p1.m_x - p2.m_y;
}

int main() {
    Point p1(1,2);
    Point p2(2,2);
    //return 1-2  = -1
    std::cout<<compare(p1,p2)<<std::endl;
    Point p3(4,5);
    Point p4(1,4);
    //return 4-4 = 0
    std::cout<<compare(p3,p4)<<std::endl;
}
