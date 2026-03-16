/*
* [Full Name] 이경민
* [Student ID]: 22100487
* [Honor Code Pledge]: 나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>
#include <string.h> // strcpy, strlen
#include <ctype.h> // isdigit()
#include <stdlib.h> // atoi()

struct member {
    char name[20];          // 회원이름
    char memberCode[9];     // 회원식별번호
    char memberNum[7];      
    int mem_Number;          
    int age;                // 나이
    int birth;              
    int year;
    int month;
    int day;
    int compare;
};

int main() {
    struct member m[100];
    char own_num[100][9];

    int high_index, low_index;
    int high = -9999;
    int low = 9999;

    int count = 0;
    scanf("%d", &count);
    if(count < 1 || count > 100) return 0;

    for(int i = 0; i < count; i++) {
        scanf("%s %s", m[i].name, m[i].memberCode);
        strcpy(own_num[i], m[i].memberCode);
    }

    for(int i = 0; i < count; i++) {
        for(int j = 0; j < strlen(m[i].memberCode); j++) {
            if(isdigit(m[i].memberCode[j])) {
                m[i].memberNum[j - 1] = m[i].memberCode[j];
            }
        }
        m[i].mem_Number = atoi(m[i].memberNum);

        m[i].mem_Number /= 10;

        m[i].birth = m[i].mem_Number;

        m[i].year = m[i].birth / 10000;
        if(m[i].year >= 0 && m[i].year <= 26) m[i].year += 2000;
        else m[i].year += 1900;

        m[i].birth = m[i].birth - ((m[i].birth / 10000) * 10000);

        m[i].compare = m[i].birth;

        m[i].month = m[i].birth / 100;

        m[i].day = m[i].birth - (m[i].month * 100);
        
        m[i].age = 2026 - m[i].year;
    }

    for(int i = 0; i < count; i++) {
        if(m[i].age > high) {
            high = m[i].age;
            high_index = i;
        }
        else if(m[i].age == high) {
            if(m[i].compare < m[high_index].compare) {
                high = m[i].age;
                high_index = i;
            }
            else continue;
        }
        if(m[i].age < low) {
            low = m[i].age;
            low_index = i;
        }
        else if(m[i].age == low) {
            if(m[i].compare > m[low_index].compare) {
                low = m[i].age;
                low_index = i;
            }
            else continue;
        }
    }

    printf("Oldest : [%s] %s %d\n", own_num[high_index], m[high_index].name, m[high_index].age);
    printf("Youngest : [%s] %s %d\n", own_num[low_index], m[low_index].name, m[low_index].age);

    return 0;
}
