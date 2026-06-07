#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int v) : data(v), next(nullptr) {}
};

class MyLLQueue
{
    private:
    Node* front;
    Node* rear;
    int count;

    public:
    MyLLQueue(): count(0), front(nullptr), rear(nullptr) {}
    ~MyLLQueue() { clear(); }

    bool isempty() const { return count == 0; }
    int getcount() const { return count; }
    void enqueue(int v);
    void dequeue();
    void print() const;
    void clear(); // 하나씩 지워야 해서 
    int getfront() const;
    int getrear() const;
};

void MyLLQueue::enqueue(int v) {
    Node* newNode = new Node(v);
    if(isempty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    count++;
}
void MyLLQueue::dequeue() {
    if (isempty()) return;
    Node* temp = front;
    front = front->next;
    delete temp;
    count--;
    if(isempty()) rear = nullptr;
}
void MyLLQueue::print() const {
    if(isempty()) {
        cout << "Empty!" << endl;
        return;
    }
    Node *cur = front;
    while(cur != nullptr) {
        cout << cur->data << endl;
        cur = cur->next;
    }
}
void MyLLQueue::clear() { // 하나씩 지워야 해서
    while(!isempty()) dequeue();
}
int MyLLQueue::getfront() const {
    if(isempty()) return -1;
    return front->data;
}
int MyLLQueue::getrear() const {
    if(isempty()) return -1;
    return front->data;
}

int main()
{
    MyLLQueue q1;
    MyLLQueue q2;
    q1 = q2;

    return 0;
}