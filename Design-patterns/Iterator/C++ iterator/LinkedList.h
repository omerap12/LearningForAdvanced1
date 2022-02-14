//
// Created by omer on 14/02/2022.
//

#ifndef LEARNINING_FO_TEST_LINKEDLIST_H
#define LEARNINING_FO_TEST_LINKEDLIST_H


#include <iostream>

class LinkedList {
private:
    int m_value;
    LinkedList* next;
public:
    LinkedList(int value){
        this->m_value = value;
        this->next = nullptr;
    }
    void add(LinkedList* other){
        LinkedList* temp = this;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = other;
    }

    int getVal() const{
        return this->m_value;
    }

    /**
     * iterator class.
     */
    class Iterator {
    private:
        LinkedList* m_current;
    public:
        Iterator(LinkedList* current){
            this->m_current = current;
        }

        LinkedList* operator *(){
            return this->m_current;
        }

        void operator ++(){
            this->m_current = this->m_current->next;
        }

        bool operator != (Iterator other){
            return this->m_current != other.m_current;
        }
    };

    Iterator begin(){
        return Iterator(this);
    }
    Iterator end(){
        return Iterator(nullptr);
    }

};


#endif //LEARNINING_FO_TEST_LINKEDLIST_H
