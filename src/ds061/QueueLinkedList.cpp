#include "QueueLinkedList.h"
#include <iostream>

using namespace std;

QueueLinkedList::QueueLinkedList() {
    front = NULL;
    rear = NULL;
}

QueueLinkedList::~QueueLinkedList() {
    while (!isempty()) {
        dequeue();
    }
}

bool QueueLinkedList::isempty() {
    if(front == NULL && rear == NULL) return true;
    else return false;
}

void QueueLinkedList::enqueue(int value) {
    Node* ptr = new Node();
    ptr->data = value;
    ptr->link = NULL;

    if (front == NULL) {
        front = ptr;
        rear = ptr;
    } else {
        rear->link = ptr;
        rear = ptr;
    }
}

void QueueLinkedList::dequeue() {
    if (isempty()) {
        cout << "Queue is empty" << endl;
    } else if (front == rear) {
        free(front);
        front = rear = NULL;
    } else {
        Node* ptr = front;
        front = front->link;
        free(ptr);
    }
}

void QueueLinkedList::showFront() {
    if (isempty())
        cout << "Queue is empty" << endl;
    else
        cout << "element at front: " << front->data << endl;
}

void QueueLinkedList::showRear() {
    if (isempty())
        cout << "Queue is empty" << endl;
    else
        cout << "element at rear: " << rear->data << endl;
}

void QueueLinkedList::displayQueue() {
    if (isempty()) {
        cout << "Queue is empty" << endl;
    } else {
        Node* ptr = front;
        while (ptr != NULL) {
            cout << ptr->data;
            if (ptr->link != NULL)
                cout << " -> ";
            ptr = ptr->link;
        }
        cout << endl;
    }
}