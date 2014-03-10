#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10240

int main(int argc, char* argv[])
{
    char a[LEN], b[3*LEN];
    int i, j;

    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (fgets(a, LEN, stdin)!=NULL) {
        printf("%s\n", a);
        for (i = j=0; a[i]; i++) {
            if (a[i]==' ') {
                b[j++]='%';
                b[j++]='2';
                b[j++]='0';
            } else {
                b[j++] = a[i];
            }
        }
        b[j] = '\0';
        printf("%s\n", b);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
