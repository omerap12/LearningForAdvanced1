//
// Created by omera on 15/02/2022.
//

#ifndef LEARNINGFORTEST_LIST_H
#define LEARNINGFORTEST_LIST_H


#include <memory>
#include "Node.h"

class List {
    std::unique_ptr<Node> head;
public:
    List():head(nullptr){};

    void push(int x){
        auto temp = std::unique_ptr<Node>(new Node(x));
        if (head)
            temp->next = std::move(head);
        head = std::move(temp);
    };

    void pop(){
        if (head)
            head = std::move(head->next);
    }

    int top(){
        return head->getX();
    }

    ~List(){
        while(head)
            head = std::move(head->next);
    }

    friend std::ostream& operator <<(std::ostream& out, const List& list){
        Node* head = list.head.get();
        while(head){
            out<<head->getX()<<" ";
            head = head->next.get();
        }
        out<<""<<std::endl;
    }
};

#endif //LEARNINGFORTEST_LIST_H
