// 루나의 드론 점검

/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int main() {
    int count = 0;

    scanf("%d", &count);

    int drone[count];

    int workDrone = 0;

    for(int i = 0; i < count ;i++) {
        scanf("%d", &drone[i]);
        if(drone[i] == 1) workDrone++;
    }

    printf("%d\n", workDrone);

    return 0;
}