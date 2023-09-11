#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <time.h>

long totalday(int y, int m, int d);

int main() {

    int sy, sm, sd, fy, fm, fd, dates;

    scanf("%d %d %d", &fy, &fm, &fd);
    scanf("%d %d %d", &sy, &sm, &sd);

    int limit_year,limit_month,limit_day;
    limit_year = sy - fy;
    limit_month = sm - fm;
    limit_day = sd - fd;

    dates = totalday(sy, sm, sd) - totalday(fy, fm, fd);

    if (limit_year< 1000) 
        printf("D-%d", dates);
    else if(limit_year ==1000 && limit_month<0)
        printf("D-%d", dates);
    else if(limit_year==1000 && limit_month ==0 && limit_day<0)
        printf("D-%d", dates);
    else 
        printf("gg");
    return 0;
}


long totalday(int y, int m, int d) {

    int months[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int i;
    long total = 0;

    total = (y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;

    if (!(y % 4) && y % 100 || !(y % 400))

        months[1]++;

    for (i = 0; i < m - 1; i++)

        total += months[i];

    total += d;

    return total; 

}