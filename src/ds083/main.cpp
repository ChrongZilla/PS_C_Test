#include "MaxHeap.h"
#include <iostream>
using namespace std;

int main() {
    MaxHeap h;
    int menu;

    while (1) {
        cout << "1. insert 2. delete 3. print 4. quit > ";
        cin >> menu;

        if (menu == 1) {
            // 새 값 입력 후 삽입
            int value;
            cout << "new value? ";
            cin >> value;
            h.insert(value);
        }
        else if (menu == 2) {
            // 최대값 삭제
            h.removeRoot();
        }
        else if (menu == 3) {
            // 현재 heap 출력
            cout << "==> Heap : ";
            h.print();
        }
        else break;
    }

    cout << "Bye!" << endl;
    return 0;
}