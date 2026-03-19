// 누가 가장 나이가 많나요?

/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

int main() {
    char mon[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    int count;
    scanf("%d", &count);

    char name[count][20];
    int birth[count];
    int age[count];
    int year[count];
    int month[count];
    int day[count];

    int old = -9999;
    int old_index = 0;

    for(int i = 0; i < count; i++) {
        scanf("%s %d", name[i], &birth[i]);
        year[i] = birth[i] / 10000;
        age[i] = 2025 - year[i];
        month[i] = (birth[i] % 10000) / 100;
        day[i] = (birth[i] % 10000) - (month[i] * 100);
        if(age[i] > old) {
            old = age[i];
            old_index = i;
        }
        else if(age[i] == old) {
            if(month[i] < month[old_index]) {
                old = age[i];
                old_index = i;
            }
            else continue;
        }
    }

    printf("%s - %d (%s %d, %d)\n", name[old_index], age[old_index], mon[month[old_index] - 1], day[old_index], year[old_index]);

    return 0;
}