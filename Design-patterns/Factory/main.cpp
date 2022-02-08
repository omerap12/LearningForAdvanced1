#include <iostream>
#include <map>
#include "Worker.h"
#include "WorkerFactory.h"
#include "TACreator.h"
#include "LecturerCreator.h"

/**
 * create the map - key is the user input of a class value is the creator of the class
 * @return
 */
std::map<std::string,WorkerFactory*> makeMap() {
    WorkerFactory* ta = new TACreator();
    WorkerFactory* lecturer = new LecturerCreator();

    std::map<std::string,WorkerFactory*> map;
    map["Ta"] = ta;
    map["Lecturer"] = lecturer;
    return map;
}

/**
 * function that creates the class according to user input
 * @param makers - the map stores user input as key and creator as value
 * @param user_input - user input
 * @return - new object according to user input
 */
Worker* createWorker(std::map<std::string,WorkerFactory*> makers,std::string user_input){
    if (makers.find(user_input) == makers.end()) { //check if the string is in the map
        //means not in map
        return nullptr;
    }
    return makers[user_input]->create();
}


int main() {
    //calling create map function
    std::map<std::string,WorkerFactory*> mapOfCreators = makeMap();
    //create something that exist
    Worker* omer = createWorker(mapOfCreators,"Lecturer");
    omer->work(); //prints Lecturer in working..

    //create something that doesn't exist
    Worker* yali = createWorker(mapOfCreators,"Student");
    if (yali == nullptr)
        std::cout<<"Nullptr"<<std::endl;
}
