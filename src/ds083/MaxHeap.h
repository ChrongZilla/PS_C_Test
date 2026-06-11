#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <vector>

#define MAX 20

class MaxHeap {
    std::vector<int> heap;

    // 부모/자식 인덱스 계산
    int parent(int i)     { return (i - 1) / 2; }
    int leftchild(int i)  { return 2 * i + 1; }
    int rightchild(int i) { return 2 * i + 2; }

public:
    void insert(int v);
    void removeRoot();
    int top();
    void print();
    const std::vector<int>& getHeap() const { return heap; }
};

void printHeap(const std::vector<int>& heap);

#endif