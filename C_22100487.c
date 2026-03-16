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
    char membership;        // 회원 등급
    int trans;              
    int age;                // 나이
    int month;              // 생일 월
};

int main() {
    struct member m;
    char own_num[9];

    int year;

    char mon[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    scanf("%s %s", m.name, m.memberCode);
    strcpy(own_num, m.memberCode);

    for(int i = 0; i < strlen(m.memberCode); i++) {
        if(isdigit(m.memberCode[i])) {
            m.memberNum[i - 1] = m.memberCode[i];
        }
    }

    m.mem_Number = atoi(m.memberNum);

    m.trans = m.mem_Number % 10;

    m.mem_Number /= 10;

    m.membership = m.memberCode[0];

    year = m.mem_Number / 10000;

    if(year >= 0 && year <= 26) year += 2000;
    else year += 1900;

    m.age = 2026 - year;

    m.mem_Number = m.mem_Number - ((m.mem_Number / 10000) * 10000);
    m.month = m.mem_Number / 100;

    m.mem_Number -= m.month * 100;
    int day = m.mem_Number;

    printf("%s : ", m.name);
    if(m.membership == 'B') printf("Basic, ");
    else if(m.membership == 'S') printf("Silver, ");
    else if(m.membership == 'G') printf("Gold, ");
    else printf("VIP, ");
    printf("%s %d, ", mon[m.month - 1], day);
    if(m.trans == 1) printf("Male\n");
    else printf("Female\n");

    return 0;
}
