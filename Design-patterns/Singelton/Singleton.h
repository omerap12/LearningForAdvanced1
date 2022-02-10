//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_SINGLETON_H
#define LEARNINGFORTEST_SINGLETON_H


#include <string>

class Singleton {
private:
    std::string name;
    Singleton(){
        this->name = std::move("Omer");
    }
public:
    static Singleton& getInstance() {
        static Singleton *singleton = new Singleton();
        return *singleton;
    }
    std::string getName() const{
        return this->name;
    }

    ~Singleton() = delete;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;


};


#endif //LEARNINGFORTEST_SINGLETON_H
