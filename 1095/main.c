#include <stdio.h>
#include <time.h>

void calc(int n)
{
    int i, mask;
    if (n==0) {
        printf("0");
        return ;
    }
    if (n==1) {
        return;
    }
    if (n==2) {
        printf("2");
        return ;
    }
    for (i = sizeof(n)*8-1; i >=0 ; i--) {
        mask = 1<<i;
        if (mask&n) {
            printf("2");
            if (i!=1) {
                printf("(");
            }
            calc(i);
            if (i!=1) {
                printf(")");
            }
            if (n%mask) {
                printf("+");
            }
        }
    }
}
int main(int argc, char* argv[])
{
    int n;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &n)) {
        printf("%d\n", n);
        calc(n);
        printf("\n");
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
