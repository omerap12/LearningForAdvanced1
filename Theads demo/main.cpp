#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include "Person.h"

std::mutex personMutex;
std::condition_variable condition;


void moneyAdd(int money,Person& p){
    std::lock_guard<std::mutex> locker(personMutex);
    p.money+=money;
    std::cout<<"Money in person "<<p.money<<std::endl;
    condition.notify_all();
}
void dropMoney(int money, Person& p){
    std::unique_lock<std::mutex> locker(personMutex);
    condition.wait(locker,[&p]{return p.money != 0;}); //wait untill lock is off and person not broke
    p.money -= money;
    if (p.money < 0){
        std::cout<<"You are at overdraft "<<p.money<<std::endl;
        return;
    }
    std::cout<<"Money "<<p.money<<std::endl;
}


int main() {
    Person* p = new Person("omer",20);

    /**
     * To pass a reference parameter to std::thread, you need to convert it to a reference_wrapper at the call site
     * This is because std::thread copies its arguments, and references cannot be copied.
     */
    std::thread t1(moneyAdd,100,std::ref(*p));
    std::thread t2(dropMoney,100,std::ref(*p));
    std::thread t3(dropMoney,100,std::ref(*p));
    std::thread t4(moneyAdd,100,std::ref(*p));

    t1.join();
    t2.join();
    t3.join();
    t4.join();










}
