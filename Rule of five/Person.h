//
// Created by omera on 09/02/2022.
//

#ifndef LEARNINGFORTEST_PERSON_H
#define LEARNINGFORTEST_PERSON_H


#include <string>
#include <iostream>

class Person {
private:
    char* name;
    int age;

public:
    /**
     * constructor.
     */
     Person(char* n, int a){
         this->name = n;
         this->age = a;
     }
     /**
      * print function.
      */
     void print() const{
         std::cout<<"My name is "<<this->name<<" and I'm "<<this->age<<" years old"<<std::endl;
     }
     /**
      * getters
      */
      char* getName() const{
          return this->name;
      }
      int getAge() const{
          return this->age;
      }
      /**
       * setters
       */
       void setName(char* n){
           this->name = n;
       }
       void setAge(int a){
           this->age = a;
       }











     /**
      * destructor
      */
      ~Person(){
          std::cout<<"Destructor called."<<std::endl;
      }

      /**
       * Copy  constructor
       */
       Person(const Person& other) {
           std::cout<<"Copy constructor"<<std::endl;
           this->name = other.getName();
           this->age = other.getAge();
       }

       /**
        * copy assignment operator
        */
        Person& operator = (const Person& other){
            std::cout<<"Copy assignment operator"<<std::endl;

            //performs no operation if you try to assign the object to itself
            if (this != &other){
                //free the current resources if there are
                this->name = other.getName();
                this->age = other.getAge();
            }
        }

        /**
         * move constructor
         */
         Person(Person&& other){
            std::cout<<"move constructor operator"<<std::endl;
            this->name = other.getName();
             this->age = other.getAge();

             /**
              * Assign the data members of the source object to default values.
              * This prevents the destructor from freeing resources (such as memory) multiple times
              */

             other.setName(nullptr);
             other.setAge(0);
         }

         /**
          * move assignment operator
          */
          Person& operator = (Person&& other){
              std::cout<<"move assignment operator"<<std::endl;
              //performs no operation if you try to assign the object to itself
              if(this!=&other){
                  delete(this->name);
                  this->name = other.getName();
                  this->age = other.getAge();
                  /**
                    * Assign the data members of the source object to default values.
                    * This prevents the destructor from freeing resources (such as memory) multiple times
                   */
                  other.setName(nullptr);
                  other.setAge(0);
              }
              return *this;
          }
};


#endif //LEARNINGFORTEST_PERSON_H
