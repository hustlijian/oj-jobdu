#include <stdio.h>
#include <time.h>

int map[22]={0,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946};
void init()
{
    int i;
    map[0]=0,map[1]=1;
    for (i = 2; i < 22; i++) {
        map[i]=map[i-1]+map[i-2];
        printf("%d,", map[i]);
    }
}
int main(int argc, char* argv[])
{
    int n;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    //init();
    while (~scanf("%d", &n)) {
        printf("n:%d\n", n);
        printf("%d\n", map[n]);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
