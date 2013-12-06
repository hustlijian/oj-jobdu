#include <stdio.h>
#include <time.h>

int a[2][101];
int main(int argc, char* argv[])
{
    int n, i, j;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();

    while (~scanf("%d", &n)) {
        //printf("%d\n", n);
        for (i = 2; i <= n; i++) {
            a[i%2][0] = 1;
            printf("%d", a[i%2][0]);
            for (j = 1; j < i-1; j++) {
                a[i%2][j] = a[(i+1)%2][j-1]+a[(i+1)%2][j];
                printf(" %d", a[i%2][j]);
            }
            a[i%2][i-1] = 1;
            printf(" %d\n", a[i%2][i-1]);
        }
    }
    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
