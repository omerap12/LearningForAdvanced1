#include <iostream>
#include <vector>
#include "CFbuilder.h"


int main() {
    /**
     * Reversal of control. The choice of who to initialize first, what to initialize.
     * in what value and if at all, is the choice of the creator of the object,
     * (literally the customer who wants to create the object) in this the builder design template helps us
     */
    CFbuilder c;
    CorrelatedFeatures a = c.setCor(1).setF2("B").setF1("A").build();
    std::cout <<a.feature1<<" "<<a.feature2<<" "<<a.correlation<<std::endl;
    CorrelatedFeatures b = c.setCor(2).setF2("D").setF1("C").build();
    std::cout <<b.feature1<<" "<<b.feature2<<" "<<b.correlation<<std::endl;

}
