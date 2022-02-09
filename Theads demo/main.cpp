#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::condition_variable cv;
std::mutex m;
long balance = 0;

void addMoney(int money){
    std::lock_guard<std::mutex> lg(m);
    balance += money;
    std::cout<<"Money add: current Balance "<<balance<<std::endl;
    cv.notify_all();
}

void withdrawMoney(int money){
    std::unique_lock<std::mutex> ul(m);
    cv.wait(ul,[]{return (balance != 0);});
    if (balance >= money){
        balance -= money;
        std::cout<<"Amount deducted "<<money<<std::endl;
    }else{
        std::cout <<"Amount can't be deducted"<<std::endl;
    }
    std::cout<<"Current balance "<<balance<<std::endl;
}

int main() {
    std::thread t1(withdrawMoney,500);
    std::thread t2(addMoney,500);
    t1.join();
    t2.join();
    return 0;

}
