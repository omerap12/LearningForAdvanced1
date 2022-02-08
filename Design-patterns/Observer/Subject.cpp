//
// Created by omera on 08/02/2022.
//

#include <iostream>
#include "Subject.h"

void Subject::Attach(Observer *newOne) {
    this->observers.push_back(newOne);
}

void Subject::Detach(Observer *toRemove) {
    int length = this->observers.size();
    for (int i = 0; i<length; i++){
        if (this->observers[i] == toRemove){
            this->observers.erase(this->observers.begin()+i); //delete observer
            std::cout<<"Observer removed"<<std::endl;
        }
    }
}

void Subject::Notify(std::string event) {
    for (Observer* o:this->observers){
        o->Update(event);
    }
}



