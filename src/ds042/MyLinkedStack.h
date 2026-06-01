#ifndef MYLINKEDSTACK_H
#define MYLINKEDSTACK_H

#include <string>

class Node {
public:
    int data;
    Node* next;
    Node(int v) {
        data = v;
        next = nullptr;
    }
};

class MyLinkedStack {
private:
    Node* stacktop;

public:
    MyLinkedStack();
    ~MyLinkedStack();

    void initialize();
    bool isempty() const;
    void push(const int& value);
    void pop();
    int top() const;
    int getcount() const;
    void printall() const;
    bool calculate(const std::string& op, int& result);
};

#endif
