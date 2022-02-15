//
// Created by omera on 15/02/2022.
//

#ifndef LEARNINGFORTEST_NODE_H
#define LEARNINGFORTEST_NODE_H


#include <memory>
#include <iostream>

class Node {
private:
    int x;
public:
    std::unique_ptr<Node> next;
    Node(int value) : x(value) {};

    ~Node() {
        std::cout << "Node is free" << std::endl;
    }

    int getX() {
        return x;
    }
};


#endif //LEARNINGFORTEST_NODE_H
