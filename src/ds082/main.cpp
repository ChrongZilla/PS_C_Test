#include "BinaryTree.h"
#include <iostream>
using namespace std;

int main() {
    int n, method;
    cin >> n >> method;

    int* list = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    BinaryTree tree;
    tree.makeTree(list, n);
    tree.traversalPrint(method);

    delete[] list;
    return 0;
}