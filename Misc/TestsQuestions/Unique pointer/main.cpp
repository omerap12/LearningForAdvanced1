#include <iostream>
#include "List.h"


int main()
{
    List l;
    for (int i = 0; i<6; i++){
        l.push(i);
    }
    std::cout<<l<<std::endl;
    std::cout<<l.top()<<std::endl;
    l.pop();
    std::cout<<l.top()<<std::endl;
    std::cout<<"done"<<std::endl; // done
    return 0;

}
