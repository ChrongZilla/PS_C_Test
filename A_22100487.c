// A_22100487.c

/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int main() {
    int count;
    int sum = 0;
    float avg = 0;

    scanf("%d", &count);

    if(count < 1 || count > 100) return 0;

    int score[count];

    for(int i = 0; i < count; i++) {
        scanf("%d", &score[i]);
        if(score[i] < 0 || score[i] > 100) return 0;
        sum += score[i];
    }

    avg = (float)sum / (float)count;

    int high = -9999;
    int low = 9999;

    for(int i = 0; i < count; i++) {
        if(score[i] >= high)
            high = score[i];
        if(score[i] <= low)
            low = score[i];
    }

    printf("Students: %d Total: %d Average: %.2f (High: %d, Low: %d)\n", count, sum, avg, high, low);

    return 0;
}