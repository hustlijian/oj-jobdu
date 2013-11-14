#include <stdio.h>
#include <string.h>
#include <time.h>

char a[10];
int checked(int n)
{
    int i, j, l;
    sprintf(a, "%d", n);
    //printf("a: %s, len:%d\n", a, strlen(a));
    l = strlen(a);
    for (i = 0, j=l-1;i<j ; i++,j--) {
        if (a[i]!=a[j]) {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    for (i = 0; i < 256; i++) {
        if (checked(i*i)) {
            printf("%d\n", i);
        }
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
