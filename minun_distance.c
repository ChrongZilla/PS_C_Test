// 민준의 이동 기록 계산

/*
이경민
22100487
나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int main() {
    int count = 0;
    int total_distance = 0;

    scanf("%d", &count);

    if(count < 1 || count > 100) {
        return 0;
    }

    int distance[count];

    for(int i = 0; i < count; i++) {
        scanf("%d", &distance[i]);
    }

    for(int i = 0; i < count; i++) {
        total_distance += distance[i];
    }

    printf("%d\n", total_distance);

    return 0;
}