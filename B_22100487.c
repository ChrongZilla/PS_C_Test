/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>

#define MAX 50

typedef struct {
    char name[20];
    int score;
} Student;

float calcAverage(int total_sum, int num_stu);

int main() {
    Student s[MAX];
    int count;
    int sum = 0;

    scanf("%d", &count);
    if(count < 1 || count > 50) return 0;

    for(int i = 0; i < count; i++) {
        scanf("%s %d", s[i].name, &s[i].score);
        sum += s[i].score;
    }

    float avg = calcAverage(sum, count);

    printf("Avg: %.2f\n", avg);
    printf("Above Avg:\n");
    for(int i = 0; i < count; i++) {
        if((float)s[i].score >= avg) printf("%s %d\n", s[i].name, s[i].score);
    }

    return 0;
}

float calcAverage(int total_sum, int num_stu) {

    float avg_f = (float)total_sum / (float)num_stu;

    return avg_f;
}
