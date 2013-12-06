#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int S(int *a, int len)
{
    int i;
    for (i = 0; i < len-1; i++) {
        if (a[i]!=a[i+1]) {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char* argv[])
{
    int N, *a, i,c,*b;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (scanf("%d", &N), N) {
        //printf("%d\n", N);
        a = malloc(sizeof(int)*N);
        b = malloc(sizeof(int)*N);
        for (i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            //printf("%d\n", a[i]);
        }
        for (c = 0; S(a,N); c++) {
            for (i = 1; i < N; i++) {
                b[i] = a[i]/2+a[i-1]/2;
                if (b[i]%2) {
                    b[i]++;
                }
            }
            b[0] = a[0]/2+a[N-1]/2;
            if (b[0]%2) {
                b[0]++;
            }
            memcpy(a,b,sizeof(int)*N);
        }
        printf("%d %d\n", c,a[0]);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
