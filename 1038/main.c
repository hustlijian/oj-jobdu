#include <stdio.h>
#include <time.h>
#define MAX 10

int map[MAX]={1,1,2,6,24,120,720,5040,40320,362880};
void init()
{
    int i;
    map[0] = 1;
    for (i = 1; i < MAX; i++) {
        map[i] = map[i-1]*i;
        printf("%d,", map[i]);
    }
}

int check(int n, int pos)
{
    if (pos>MAX) {
        return 0;
    }
    if (n==map[pos]) {
        return 1;
    }
    if (check(n,pos+1)) {
        return 1;
    }
    return check(n-map[pos],pos+1);
}
int main(int argc, char* argv[])
{
    int n;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();

    //init();
    while (~scanf("%d",&n)) {
        printf("%d\n", n);
        printf("%s\n", check(n,0)?"YES":"NO");
    }
    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
