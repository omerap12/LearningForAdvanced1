//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_PROXYCAR_H
#define LEARNINGFORTEST_PROXYCAR_H

#include <memory>
#include "Icar.h"
#include "Car.h"
#include "Driver.h"

class ProxyCar:public Icar {
private:
    Icar* real_car;
    Driver* driver;
public:
    ProxyCar(Driver* d,Icar* car) {
        this->driver = d;
        this->real_car = car;
    }
    void drive() override;

};


#endif //LEARNINGFORTEST_PROXYCAR_H
