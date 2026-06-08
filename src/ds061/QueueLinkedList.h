#ifndef QUEUEINTLIST_H
#define QUEUEINTLIST_H

struct Node {
    int data;
    Node* link;
};

class QueueLinkedList {
private:
    Node* front;
    Node* rear;

public:
    QueueLinkedList();
    ~QueueLinkedList();

    bool isempty();
    void enqueue(int value);
    void dequeue();
    void showFront();
    void showRear();
    void displayQueue();
};

#endif