#include "QueueLinkedList.h"
#include <iostream>
using namespace std;

int main() {
    QueueLinkedList q;
    int choice, value;

    while (true) {
        cout << "1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter a Value: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.showFront();
            break;
        case 4:
            q.showRear();
            break;
        case 5:
            q.displayQueue();
            break;
        case 6:
            cout << "bye!" << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cout << "\n";
    }

    return 0;
}