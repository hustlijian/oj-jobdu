#include <stdio.h>
#include <time.h>
#define MAX 21
#define SUM 40

int total, a[MAX], n;

void check(int pos, int sum)
{
    if (sum==0) {
        total ++;
        return ;
    }
    if (pos>=n) {
        return ;
    }
    if (sum>=a[pos]) {
        check(pos+1, sum-a[pos]);
    }
    check(pos+1, sum);
}
int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();

    while (~scanf("%d", &n)) {
        //printf("%d\n", n);
        total = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        check(0, SUM);
        printf("%d\n", total);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
