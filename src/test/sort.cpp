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

int partition(int *list, int left, int right) {
    int pivot = list[right];
    int i = left; // left - 1

    for(int j = left; j < right; j++) {
        if(list[j] < pivot) {
            /*
            i++;
            swap(list[i], list[j]);
            */
            swap(list[i], list[j]);
            i++;
        }
    }

    swap(list[i], list[right]); // swap(list[i+1], list[right]);

    return i; // return i + 1;
}

// quicksort(list, 0, size-1)
void quicksort(int *list, int left, int right) {

    if(left < right) {
        int pivotIndex = partition(list, left, right);

        quicksort(list, left, pivotIndex - 1);
        quicksort(list, pivotIndex + 1, right);
    }
}

// mergesort
/*
   0 1 2 3

 0 1     2 3

0   1   2   3
*/

void merge(int *list, int left, int mid, int right) {
    // 배열 사이즈 & 동적 메모리 할당
    int s = right - left - 1;
    int *temp = new int[s];

    int i = left;
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= right) {
        if(list[i] <= list[j])
            temp[k++] = list[i++];
        else
            temp[k++] = list[j++];
    }

    while(i <= mid)
        temp[k++] = list[i++];
    
    while(j<= right)
        temp[k++] = list[j++];

    for(int t = 0; t < s; t++)
        list[left + t] = temp[t];

    // 메모리 제거
    delete[] temp;
}


void mergesort(int *list, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergesort(list, left, mid);
        mergesort(list, mid + 1, right);

        merge(list, left, mid, right);
    }
}

int main() {
    int list[] = {10, 20, 3, 13, 55};
    int size = sizeof(list) / sizeof(list[0]);

    print(list, size);
    bubblesort(list, size);
    print(list, size);

    return 0;
}