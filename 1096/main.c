#include <stdio.h>
#include <stdlib.h>

int isleap(int year)
{
   if( year%4 ==0 && (year%100 !=0 || year%400 ==0))
       return 1;
    return 0;
}

int count_year(int a, int b)
{
    int total, i;
    for (total = 0, i=a; i < b; i++) {
        if (isleap(i)) {
            total +=1;
        }
        total += 365;
    }
    return total;
}
int month[] ={
    31,28,31,30,31,30,31,31,30,31,30,31
};
int count_mon(int y, int m)
{
    int i, total;
    for (total = i = 0; i < m-1; i++) {
        total += month[i];
    }
    if (m > 2) {
        total += 1;
    }
    return total;
}
int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
    char a[9], b[9];
    int y,m,d,Y,M,D, total;

    while (scanf("%s %s", a, b) != EOF) {
        y = atoi(a);
        Y = atoi(b);
        if (y>Y) {
            m=y,y=Y,Y=m;
        }
       // printf("%d %d\n", y, Y);
        d = y % 100;
        y = y / 100;
        m = y % 100;
        y = y/100;
        D = Y % 100;
        Y = Y / 100;
        M = Y % 100;
        Y = Y/100;
       // printf("%d-%d-%d %d-%d-%d\n",y,m,d,Y,M,D);
        total = count_year(y, Y);
       //printf("year %d\n", total);
        total += count_mon(Y, M);
        total -= count_mon(y, m);
       // printf("month %d\n", total);
        total +=1+(D-d);
        printf("%d\n", total);
    }
	return 0;
}
