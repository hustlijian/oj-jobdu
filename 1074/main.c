#include <stdio.h>
#include <string.h>
#include <time.h>

char a[10];
char b[10];
int checked(int n)
{
    int i, j, l;
    char t;
    sprintf(a, "%d", n);
    //printf("a: %s, len:%d\n", a, strlen(a));
    l = strlen(a);
    strcpy(b, a);
    for (i = 0, j=l-1;i<j ; i++,j--) {
        t = a[i],a[i] = a[j],a[j] = t;
    }
    b[l] = '\0';
    //printf("b: %s\n", b);
    return !strcmp(a,b);
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
