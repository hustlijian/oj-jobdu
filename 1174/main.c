#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[1001],n,k;

int cmp(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}
int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &n)) {
        //printf("%d\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            //printf("%d ", a[i]);
        }
        qsort(a,n,sizeof(int),cmp);
        scanf("%d", &k);
        for (i = 0; k&&i < n ; i++) {
            while (a[i]==a[i+1]) {
                i++;
            }
            k--;
        }
        printf("%d\n", a[i-1]);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
