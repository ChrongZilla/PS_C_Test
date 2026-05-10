// 월별 생일 집계

/*
이경민
22100487
나 이경민은 하나님과 사람 앞에서 정직하고 성실하게 테스트를 수행하겠습니다.
*/

#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    int birth; // 1. 생년월일 -> 2. 생년월일 - 연도 (20020604 -> 0604)
    int year; // 출생연도
    int month; // 출생월
    int day; // 출생일
    int age; // 나이 (2025-출생연도)
};

struct mon {
    char name[20];
    int p_day;
};

int main() {
    struct person p[100];
    struct mon jan[100], feb[100], mar[100], apr[100], may[100], jun[100], jul[100], aug[100], sep[100], oct[100], nov[100], dec[100];
    int p_count;
    int jan_c, feb_c, mar_c, apr_c, may_c, jun_c, jul_c, aug_c, sep_c, oct_c, nov_c, dec_c = 0;


    scanf("%d", &p_count);

    for(int i = 0; i < p_count; i++) {
        scanf("%s %d", p[i].name, &p[i].birth);
        
        p[i].year = p[i].birth / 10000;
        p[i].birth = p[i].birth - (p[i].year * 10000);
        p[i].month = p[i].birth / 100;
        p[i].day = p[i].birth - (p[i].month * 100);
        p[i].age = 2025 - p[i].year;

        if(p[i].month == 1) {
            strcpy(jan[jan_c].name, p[i].name);
            jan[jan_c].p_day = p[i].day;
            jan_c++;
        }
        else if(p[i].month == 2) {
            strcpy(feb[feb_c].name, p[i].name);
            feb[feb_c].p_day = p[i].day;
            feb_c++;
        }
        else if(p[i].month == 3) {
            strcpy(mar[mar_c].name, p[i].name);
            mar[mar_c].p_day = p[i].day;
            mar_c++;
        }
        else if(p[i].month == 4) {
            strcpy(apr[apr_c].name, p[i].name);
            apr[apr_c].p_day = p[i].day;
            apr_c++;
        }
        else if(p[i].month == 5) {
            strcpy(may[may_c].name, p[i].name);
            may[may_c].p_day = p[i].day;
            may_c++;
        }
        else if(p[i].month == 6) {
            strcpy(jun[jun_c].name, p[i].name);
            jun[jun_c].p_day = p[i].day;
            jun_c++;
        }
        else if(p[i].month == 7) {
            strcpy(jul[jul_c].name, p[i].name);
            jul[jul_c].p_day = p[i].day;
            jul_c++;
        }
        else if(p[i].month == 8) {
            strcpy(aug[aug_c].name, p[i].name);
            aug[aug_c].p_day = p[i].day;
            aug_c++;
        }
        else if(p[i].month == 9) {
            strcpy(sep[sep_c].name, p[i].name);
            sep[sep_c].p_day = p[i].day;
            sep_c++;
        }
        else if(p[i].month == 10) {
            strcpy(oct[oct_c].name, p[i].name);
            oct[oct_c].p_day = p[i].day;
            oct_c++;
        }
        else if(p[i].month == 11) {
            strcpy(nov[nov_c].name, p[i].name);
            nov[nov_c].p_day = p[i].day;
            nov_c++;
        }
        else if(p[i].month == 12) {
            strcpy(dec[dec_c].name, p[i].name);
            dec[dec_c].p_day = p[i].day;
            dec_c++;
        }
    }

    
    if(jan_c == 0) printf("[Jan] - 0\n");
    else {
        printf("[Jan] ");
        for(int i = 0; i < jan_c; i++) {
            printf("%s(%d) ", jan[i].name, jan[i].p_day);
        }
        printf("- %d\n", jan_c);
    }

    if(feb_c == 0) printf("[Feb] - 0\n");
    else {
        printf("[Feb] ");
        for(int i = 0; i < feb_c; i++) {
            printf("%s(%d) ", feb[i].name, feb[i].p_day);
        }
        printf("- %d\n", feb_c);
    }

    if(mar_c == 0) printf("[Mar] - 0\n");
    else {
        printf("[Mar] ");
        for(int i = 0; i < mar_c; i++) {
            printf("%s(%d) ", mar[i].name, mar[i].p_day);
        }
        printf("- %d\n", mar_c);
    }

    if(apr_c == 0) printf("[Apr] - 0\n");
    else {
        printf("[Apr] ");
        for(int i = 0; i < apr_c; i++) {
            printf("%s(%d) ", apr[i].name, apr[i].p_day);
        }
        printf("- %d\n", apr_c);
    }

    if(may_c == 0) printf("[May] - 0\n");
    else {
        printf("[May] ");
        for(int i = 0; i < may_c; i++) {
            printf("%s(%d) ", may[i].name, may[i].p_day);
        }
        printf("- %d\n", may_c);
    }

    if(jun_c == 0) printf("[Jun] - 0\n");
    else {
        printf("[Jun] ");
        for(int i = 0; i < jun_c; i++) {
            printf("%s(%d) ", jun[i].name, jun[i].p_day);
        }
        printf("- %d\n", jun_c);
    }

    if(jul_c == 0) printf("[Jul] - 0\n");
    else {
        printf("[Jul] ");
        for(int i = 0; i < jul_c; i++) {
            printf("%s(%d) ", jul[i].name, jul[i].p_day);
        }
        printf("- %d\n", jul_c);
    }

    if(aug_c == 0) printf("[Aug] - 0\n");
    else {
        printf("[Aug] ");
        for(int i = 0; i < aug_c; i++) {
            printf("%s(%d) ", aug[i].name, aug[i].p_day);
        }
        printf("- %d\n", aug_c);
    }

    if(sep_c == 0) printf("[Sep] - 0\n");
    else {
        printf("[Sep] ");
        for(int i = 0; i < sep_c; i++) {
            printf("%s(%d) ", sep[i].name, sep[i].p_day);
        }
        printf("- %d\n", sep_c);
    }

    if(oct_c == 0) printf("[Oct] - 0\n");
    else {
        printf("[Oct] ");
        for(int i = 0; i < oct_c; i++) {
            printf("%s(%d) ", oct[i].name, oct[i].p_day);
        }
        printf("- %d\n", oct_c);
    }

    if(nov_c == 0) printf("[Nov] - 0\n");
    else {
        printf("[Nov] ");
        for(int i = 0; i < nov_c; i++) {
            printf("%s(%d) ", nov[i].name, nov[i].p_day);
        }
        printf("- %d\n", nov_c);
    }

    if(dec_c == 0) printf("[Dec] - 0\n");
    else {
        printf("[Dec] ");
        for(int i = 0; i < dec_c; i++) {
            printf("%s(%d) ", dec[i].name, dec[i].p_day);
        }
        printf("- %d\n", dec_c);
    }

    return 0;
}