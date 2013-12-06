#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int n,a[1001],d,i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d",&n)) {
        //printf("%d\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d",&a[i]);
            //printf("%d ",a[i]);
        }
        scanf("%d", &d);
        //printf("%d\n", d);
        i = 1 << (d-1);
        if (i>n) {
            printf("EMPTY\n");
            continue;
        }
        printf("%d", a[i-1]);
        for (i++;i<n&&i<(1<<d);i++) {
            printf(" %d",a[i-1]);
        }
        printf("\n");
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
