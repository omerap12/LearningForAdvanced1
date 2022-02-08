//
// Created by omera on 08/02/2022.
//

#ifndef LEARNINGFORTEST_SWICHABLE_H
#define LEARNINGFORTEST_SWICHABLE_H

//Reciever

class Swichable {
private:
    bool isOn;
public:
    Swichable(){
        this->isOn = false;
    }
    void PowerOn(); //action
    void PowerOf(); //action
    void print() const;
};


#endif //LEARNINGFORTEST_SWICHABLE_H
