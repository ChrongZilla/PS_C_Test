#include "MaxHeap.h"
#include <iostream>
using namespace std;

#define _DEBUG

// heap의 모든 값을 level order로 출력
void printHeap(const vector<int>& heap) {
    cout << "==> Heap : ";
    for (int v : heap) cout << v << " ";
    cout << endl;
}

// 새 값을 heap 끝에 추가 후 heapify-up
void MaxHeap::insert(int v) {
    if (heap.size() >= MAX) {
        cout << "\n[Overflow] Heap is full. Could not insertKey\n";
        return;
    }

    heap.push_back(v);
    int i = heap.size() - 1;

    // 부모보다 크면 swap하며 위로 올라감
    while (i > 0 && heap[i] > heap[parent(i)]) {
        swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }

#ifdef _DEBUG
    printHeap(heap);
#endif
}

// 루트(최대값) 제거 후 heapify-down
void MaxHeap::removeRoot() {
    if (heap.empty()) {
        cout << "\nCould not deleteKey (Heap is empty)\n";
        return;
    }

#ifdef _DEBUG
    cout << "=> Delete " << heap[0] << endl;
#endif

    // 마지막 노드를 루트로 올리고 pop
    heap[0] = heap.back();
    heap.pop_back();

    int s = heap.size();
    int i = 0;

    while (true) {
        int largest = i;
        int l = leftchild(i);
        int r = rightchild(i);

        // 자식 중 더 큰 값 찾기
        if (l < s && heap[largest] < heap[l]) largest = l;
        if (r < s && heap[largest] < heap[r]) largest = r;

        // 자신이 가장 크면 종료
        if (largest == i) break;

        swap(heap[i], heap[largest]);
        i = largest;
    }

#ifdef _DEBUG
    printHeap(heap);
#endif
}

// heap의 모든 값을 level order로 출력
void MaxHeap::print() {
    for (int v : heap) cout << v << " ";
    cout << endl;
}

// 루트(최대값) 반환
int MaxHeap::top() {
    if (heap.empty()) return -1;
    return heap[0];
}