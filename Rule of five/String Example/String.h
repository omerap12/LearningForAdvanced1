//
// Created by omera on 10/02/2022.
//

#ifndef LEARNINGFORTEST_STRING_H
#define LEARNINGFORTEST_STRING_H

#include <iostream>
#include <cstring>

class String {
private:
    char* chars;
    int len;
public:
    /**
     * constructor.
     * @param other - the other char*.
     */
    String(const char* other){
        this->len =  strlen(other);
        this->chars = new char[len];
        strcpy(this->chars, other);
    }

    /**
     * destructor
     */
    ~String(){
        delete[] chars;
    }

    /**
     * copy assignment operator
     * @param s - the other string.
     * @return - same object address
     */
    String& operator = (const String& s){
        if (this != &s){
            delete[] chars;
            this->chars = nullptr;
            this->len = s.len;
            chars = new char[this->len];
            strcpy(this->chars,s.chars);
        }
        return *this;
    }


    /**
     * Copy constructor.
     * @param s - the other String.
     */
    String(const String& s){
        //calling the copy assignment operator
        *this = s;
    }

    /**
     * Move assignment operator.
     * @param s - the other string.
     * @return - same object address
     */
    String& operator = (String&& s){
        if (this != &s){
            this->len = s.len;
            this->chars = s.chars;
            s.len = 0;
            s.chars = nullptr;
        }
        return *this;
    }

    /**
     * move constructor - calling the move assignment operator
     * @param s - the String we need to move - && means it's temporary object. It's destructor will call himself.
     */
    String(String&&  s){
        *this = std::move(s);
    }














};


#endif //LEARNINGFORTEST_STRING_H
