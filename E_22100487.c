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
    int birth;
    int year;
    int age;                // 나이
    int month;              // 생일 월
    int day;
};

struct mon {
    char name[20];
    int p_day;
    char mem[7];
};

int main() {
    struct member m[100];
    struct mon jan[100], feb[100], mar[100], apr[100], may[100], jun[100], jul[100], aug[100], sep[100], oct[100], nov[100], dec[100];
    char own_num[100][9];
    int jan_c, feb_c, mar_c, apr_c, may_c, jun_c, jul_c, aug_c, sep_c, oct_c, nov_c, dec_c = 0;
    int count;

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

        m[i].month = m[i].birth / 100;

        m[i].day = m[i].birth - (m[i].month * 100);
        
        m[i].age = 2026 - m[i].year;

        m[i].membership = m[i].memberCode[0];

        if(m[i].month == 1) {
            strcpy(jan[jan_c].name, m[i].name);
            jan[jan_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(jan[jan_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(jan[jan_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(jan[jan_c].mem, "Gold");
            else strcpy(jan[jan_c].mem, "VIP");
            jan_c++;
        }
        else if(m[i].month == 2) {
            strcpy(feb[feb_c].name, m[i].name);
            feb[feb_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(feb[feb_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(feb[feb_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(feb[feb_c].mem, "Gold");
            else strcpy(feb[feb_c].mem, "VIP");
            feb_c++;
        }
        else if(m[i].month == 3) {
            strcpy(mar[mar_c].name, m[i].name);
            mar[mar_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(mar[mar_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(mar[mar_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(mar[mar_c].mem, "Gold");
            else strcpy(mar[mar_c].mem, "VIP");
            mar_c++;
        }
        else if(m[i].month == 4) {
            strcpy(apr[apr_c].name, m[i].name);
            apr[apr_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(apr[apr_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(apr[apr_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(apr[apr_c].mem, "Gold");
            else strcpy(apr[apr_c].mem, "VIP");
            apr_c++;
        }
        else if(m[i].month == 5) {
            strcpy(may[may_c].name, m[i].name);
            may[may_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(may[may_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(may[may_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(may[may_c].mem, "Gold");
            else strcpy(may[may_c].mem, "VIP");
            may_c++;
        }
        else if(m[i].month == 6) {
            strcpy(jun[jun_c].name, m[i].name);
            jun[jun_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(jun[jun_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(jun[jun_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(jun[jun_c].mem, "Gold");
            else strcpy(jun[jun_c].mem, "VIP");
            jun_c++;
        }
        else if(m[i].month == 7) {
            strcpy(jul[jul_c].name, m[i].name);
            jul[jul_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(jul[jul_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(jul[jul_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(jul[jul_c].mem, "Gold");
            else strcpy(jul[jul_c].mem, "VIP");
            jul_c++;
        }
        else if(m[i].month == 8) {
            strcpy(aug[aug_c].name, m[i].name);
            aug[aug_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(aug[aug_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(aug[aug_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(aug[aug_c].mem, "Gold");
            else strcpy(aug[aug_c].mem, "VIP");
            aug_c++;
        }
        else if(m[i].month == 9) {
            strcpy(sep[sep_c].name, m[i].name);
            sep[sep_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(sep[sep_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(sep[sep_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(sep[sep_c].mem, "Gold");
            else strcpy(sep[sep_c].mem, "VIP");
            sep_c++;
        }
        else if(m[i].month == 10) {
            strcpy(oct[oct_c].name, m[i].name);
            oct[oct_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(oct[oct_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(oct[oct_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(oct[oct_c].mem, "Gold");
            else strcpy(oct[oct_c].mem, "VIP");
            oct_c++;
        }
        else if(m[i].month == 11) {
            strcpy(nov[nov_c].name, m[i].name);
            nov[nov_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(nov[nov_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(nov[nov_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(nov[nov_c].mem, "Gold");
            else strcpy(nov[nov_c].mem, "VIP");
            nov_c++;
        }
        else if(m[i].month == 12) {
            strcpy(dec[dec_c].name, m[i].name);
            dec[dec_c].p_day = m[i].age;
            if(m[i].membership == 'B') strcpy(dec[dec_c].mem, "Basic");
            else if(m[i].membership == 'S') strcpy(dec[dec_c].mem, "Silver");
            else if(m[i].membership == 'G') strcpy(dec[dec_c].mem, "Gold");
            else strcpy(dec[dec_c].mem, "VIP");
            dec_c++;
        }
    }

    if(jan_c == 0) printf("[Jan] - None\n");
    else {
        printf("[Jan] ");
        for(int i = 0; i < jan_c; i++) {
            printf("%s(%s, %d) ", jan[i].name, jan[i].mem, jan[i].p_day);
        }
        printf("\n");
    }

    if(feb_c == 0) printf("[Feb] - None\n");
    else {
        printf("[Feb] ");
        for(int i = 0; i < feb_c; i++) {
            printf("%s(%s, %d) ", feb[i].name, feb[i].mem, feb[i].p_day);
        }
        printf("\n");
    }

    if(mar_c == 0) printf("[Mar] - None\n");
    else {
        printf("[Mar] ");
        for(int i = 0; i < mar_c; i++) {
            printf("%s(%s, %d) ", mar[i].name, mar[i].mem, mar[i].p_day);
        }
        printf("\n");
    }

    if(apr_c == 0) printf("[Apr] - None\n");
    else {
        printf("[Apr] ");
        for(int i = 0; i < apr_c; i++) {
            printf("%s(%s, %d) ", apr[i].name, apr[i].mem, apr[i].p_day);
        }
        printf("\n");
    }

    if(may_c == 0) printf("[May] - None\n");
    else {
        printf("[May] ");
        for(int i = 0; i < may_c; i++) {
            printf("%s(%s, %d) ", may[i].name, may[i].mem, may[i].p_day);
        }
        printf("\n");
    }

    if(jun_c == 0) printf("[Jun] - None\n");
    else {
        printf("[Jun] ");
        for(int i = 0; i < jun_c; i++) {
            printf("%s(%s, %d) ", jun[i].name, jun[i].mem, jun[i].p_day);
        }
        printf("\n");
    }

    if(jul_c == 0) printf("[Jul] - None\n");
    else {
        printf("[Jul] ");
        for(int i = 0; i < jul_c; i++) {
            printf("%s(%s, %d) ", jul[i].name, jul[i].mem, jul[i].p_day);
        }
        printf("\n");
    }

    if(aug_c == 0) printf("[Aug] - None\n");
    else {
        printf("[Aug] ");
        for(int i = 0; i < aug_c; i++) {
            printf("%s(%s, %d) ", aug[i].name, aug[i].mem, aug[i].p_day);
        }
        printf("\n");
    }

    if(sep_c == 0) printf("[Sep] - None\n");
    else {
        printf("[Sep] ");
        for(int i = 0; i < sep_c; i++) {
            printf("%s(%s, %d) ", sep[i].name, sep[i].mem, sep[i].p_day);
        }
        printf("\n");
    }

    if(oct_c == 0) printf("[Oct] - None\n");
    else {
        printf("[Oct] ");
        for(int i = 0; i < oct_c; i++) {
            printf("%s(%s, %d) ", oct[i].name, oct[i].mem, oct[i].p_day);
        }
        printf("\n");
    }

    if(nov_c == 0) printf("[Nov] - None\n");
    else {
        printf("[Nov] ");
        for(int i = 0; i < nov_c; i++) {
            printf("%s(%s, %d) ", nov[i].name, nov[i].mem, nov[i].p_day);
        }
        printf("\n");
    }

    if(dec_c == 0) printf("[Dec] - None\n");
    else {
        printf("[Dec] ");
        for(int i = 0; i < dec_c; i++) {
            printf("%s(%s, %d) ", dec[i].name, dec[i].mem, dec[i].p_day);
        }
        printf("\n");
    }
    

    return 0;
}
