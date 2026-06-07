#include "BinaryTree.h"
#include <iostream>
using namespace std;

// 재귀함수 끝나는 조건 없으면 무한반복함
void BinaryTree::inorder(TreeNode* node) {
    if (node == nullptr) return;
    inorder(node->leftnode);
    cout << node->data << " ";
    inorder(node->rightnode);
}

// 트리 메모리 해제
void BinaryTree::clearTree(TreeNode* node) {
    if (node == nullptr) return;
    clearTree(node->leftnode);
    clearTree(node->rightnode);
    delete node;
}

void BinaryTree::makeTree(int* list, int size) {
    if (size == 0) return;

    queue<TreeNode*> q;

    // 노드 만들고 queue에 넣어놓기
    root = new TreeNode(list[0]);
    q.push(root);

    int i = 1;
    while (i < size) {
        // 다음 노드에서는 원래 queue에서 값을 빼놓은 뒤에 넣기
        TreeNode* cur = q.front();
        q.pop();

        if (i < size) { // left child
            if (list[i] != 0) {
                // 0이 아니면 노드 생성 후 Queue에 추가
                cur->leftnode = new TreeNode(list[i]);
                q.push(cur->leftnode);
            } else {
                // 0이면 빈 노드 (nullptr 유지, Queue에 추가 X)
                cur->leftnode = nullptr;
            }
            i++;
        }

        if (i < size) { // right child
            if (list[i] != 0) {
                cur->rightnode = new TreeNode(list[i]);
                q.push(cur->rightnode);
            } else {
                cur->rightnode = nullptr;
            }
            i++;
        }
    }
}

void BinaryTree::inorderPrint() {
    inorder(root);
    cout << endl;
}