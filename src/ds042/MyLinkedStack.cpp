#include "MyLinkedStack.h"
#include <iostream>
#include <sstream>
using namespace std;

// 생성자 -> stacktop을 nullptr로 초기화
MyLinkedStack::MyLinkedStack() : stacktop(nullptr) {}

// 소멸자
MyLinkedStack::~MyLinkedStack() { initialize(); }

// 노드가 없을 때까지 계속 pop
void MyLinkedStack::initialize() {
    while (!isempty()) 
        pop();
}

bool MyLinkedStack::isempty() const { return stacktop == nullptr; }

// 새 노드를 만들어 stacktop 앞에 연결 : newNode -> (기존 stacktop) -> ... 순서로 연결
void MyLinkedStack::push(const int& value) {
    Node* newNode = new Node(value);
    newNode->next = stacktop;   // 새 노드의 next를 현재 top으로 연결
    stacktop = newNode;         // stacktop을 새 노드로 갱신
}

// tacktop 노드를 제거하고 메모리 해제
void MyLinkedStack::pop() {
    if (isempty()) return;
    Node* temp = stacktop;      // 지울 노드를 임시 포인터로 보관
    stacktop = temp->next;      // stacktop을 다음 노드로 이동
    delete temp;                // 기존 top 노드 메모리 해제
}

// stacktop의 데이터를 반환 (pop X)
int MyLinkedStack::top() const {
    if (isempty()) return -1;   // 빈 스택이면 -1 반환
    return stacktop->data;
}

// getcount: 스택에 있는 노드 개수를 세서 반환
int MyLinkedStack::getcount() const {
    int count = 0;
    Node* temp = stacktop;
    while (temp != nullptr) { count++; temp = temp->next; }
    return count;
}

// printall: 스택 전체를 top부터 순서대로 출력
// 예: 70 -> 60 -> 40 -> 30 (4 nodes)
void MyLinkedStack::printall() const {
    if (isempty()) { cout << "Stack is empty" << endl; return; }
    Node* temp = stacktop;
    int cnt = getcount(), i = 0;
    while (temp != nullptr) {
        cout << temp->data;
        if (i < cnt - 1) cout << " -> ";   // 마지막 노드 뒤에는 -> 안 붙임
        temp = temp->next; i++;
    }
    cout << " (" << cnt << " nodes)" << endl;
}

bool MyLinkedStack::calculate(const string& op, int& result) {
    int b = top(); pop();
    int a = top(); pop();
 
    if      (op == "+") result = a + b;
    else if (op == "-") result = a - b;
    else if (op == "*") result = a * b;
    else if (op == "/") {
        if (b == 0) return false;   // Division by 0
        result = a / b;
    }
    return true;
}