#include <iostream>

#import "Icar.h"
#include "Car.h"
#include "ProxyCar.h"
#include "Driver.h"

int main() {
    Driver* driver = new Driver("Omer",23);
    Driver* driver2 = new Driver("Yali",13);
    Icar* real_car = new Car(); // the real car
    Icar* proxy_car = new ProxyCar(driver,real_car); //proxy car
    proxy_car->drive();
    Icar* proxy_car2 = new ProxyCar(driver2,real_car); //proxy car
    proxy_car2->drive();




}
