// 태양이의 보물 지도 탐험

/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int main() {
    char order[100];
    int count = 0;
    int x = 0;
    int y = 0;

    while(count <= 100) {
        scanf("%c", order[count]);

        if(order[count] == 'U') y++;
        else if(order[count] == 'R') x++;
        else if(order[count] == 'L') x--;
        else y--;

        count++;
    }

    return 0;
}
