/*
이경민
22100487
나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>
#include <string.h>

#define MAX 20

struct Info {
    char name[MAX];
    int birth;
    int year;
    int month;
    int day;
    int age;
};

int main() {
    struct Info in;

    scanf("%s %d", in.name ,&in.birth);

    in.year = in.birth / 10000;

    in.birth = in.birth - (in.year * 10000);
    in.month = in.birth / 100;

    in.day = in.birth - (in.month * 100);
    
    in.age = 2025 - in.year;

    switch(in.month){
        case 1 :
            printf("%s - %d (Jan %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 2 :
            printf("%s - %d (Feb %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 3 :
            printf("%s - %d (Mar %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 4 :
            printf("%s - %d (Apr %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 5 :
            printf("%s - %d (May %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 6 :
            printf("%s - %d (Jun %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 7 :
            printf("%s - %d (Jul %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 8 :
            printf("%s - %d (Aug %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 9 :
            printf("%s - %d (Sep %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 10 :
            printf("%s - %d (Oct %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 11 :
            printf("%s - %d (Nov %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
        case 12 :
            printf("%s - %d (Dec %d, %d)\n", in.name, in.age, in.day, in.year);
            return 0;
    }

    return 0;
}