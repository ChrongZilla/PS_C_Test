// 루나의 드론 점검

/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int index = 0;
    int loc_Book = 0;
    char name[20];
    scanf("%d", &loc_Book);

    char list[loc_Book][20];

    scanf("%s", name);

    for(int i = 0; i < loc_Book; i++) {
        scanf("%s", list[i]);
        if(strcmp(name, list[i]) == 0) {
            index = i + 1;
            break;
        }
        else index = -1;
    }

    printf("%d\n", index);

    return 0;
}