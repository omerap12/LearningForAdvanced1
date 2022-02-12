#include <iostream>
#include "DivisionByZeroException.h"

double div(double x, double y) throw (int, DivisionByZeroException){
    if (y == 0)
        throw DivisionByZeroException();
    if (x == 2) {
        throw -1;
    }
    return x/y;
}

int main() {
    double x = 5;
    double y = 0;
    try {
        div(x,y);
    }
    //x is two, bad habit - we want to throw objects!
    catch (int a) {
        std::cout << a << std::endl;
    }
    //error division by 0
    catch (DivisionByZeroException& error){
        error.print();
    }
    //something else happened that we didn't think of
    catch(...){
        std::cout<<"Something else happened"<<std::endl;
    }
    return 0;
}
