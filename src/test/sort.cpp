#include <iostream>

using namespace std;

void swap(int &a, int&b) {
    int temp = a;
    a = b;
    b = temp;
}

void print(int *list, int s) {
    for(int i = 0; i < s; i++) {
        if(i > 0 && i < s) cout << " -> ";
        cout << list[i];
    }
    cout << endl;
}

void bubblesort(int *list, int s) {
    for(int i = s - 1; i > 0; i--) {
        bool swapped = false;
        for(int j = 0; j < i; j++) {
            if(list[j] > list[j+1]) swap(list[j], list[j+1]);
            swapped = true;
        }

        if(!swapped) break;
    }
}

// 제일 작은 수가 왼쪽 min
void selectionsort(int *list, int s) {
    for(int i = 0; i < s - 1; i++) {
        int min_i = i;
        for(int j = i + 1; j < s; j++) {
            if(list[j] < list[min_i]) min_i = j;
        }
        if(min_i != i) swap(list[min_i], list[i]);
    }
}

// key 값을 기준으로 숫자가 키값보다 크다면 오른쪽 한칸
void insertionsort(int *list, int s) {
    for(int i = 1; i < s; i++) {
        int key = list[i];
        int j = i - 1;
        for(; j >= 0; j--) {
            if(key < list[j]) list[j+1] =list[j];
            else {
                break;
            }
        }
        /*
        while(j >= 0 && list[j] > key) {
            list[j + 1] = list[j];
            j--;
        }
        */
        list[j + 1] = key;
        
    }
}

// quicksort

// mergesort


int main() {
    int list[] = {10, 20, 3, 13, 55};
    int size = sizeof(list) / sizeof(list[0]);

    print(list, size);
    bubblesort(list, size);
    print(list, size);

    return 0;
}