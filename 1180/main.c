#include <stdio.h>
#include <time.h>

#define MAX 100

int a[MAX][MAX],N,i,j,f;

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &N)) {
        //printf("%d\n", N);
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &a[i][j]);
                //printf("%d ", a[i][j]);
            }
            //printf("\n");
        }
        for (f=i = 0; !f&&i < N; i++) {
            for (j = 0; j < i; j++) {
                if (a[i][j]!=a[j][i]) {
                    f = 1;
                }
            }
        }
        if (f) {
            printf("No!\n");
        } else {
            printf("Yes!\n");
        }
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
