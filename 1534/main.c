#include <stdio.h>
#include <stlib.h>
#include <time.h>

#define MAX 100000

int A[MAX],B[MAX],m,n,k;

int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d %d %d",&m,&n,&k)) {
        //printf("%d %d %d \n", m, n, k);
        for (i = 0; i < m; i++) {
            scanf("%d", &A[i]);
            //printf("%d ", A[i]);
        }
        //printf("\n");
        for (i = 0; i < n; i++) {
            scanf("%d", &B[i]);
            //printf("%d ", B[i]);
        }
        //printf("\n");
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
