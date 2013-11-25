#include <stdio.h>
#include <string.h>
#include <time.h>

char a[31],k[8];
int i,j,n,m,y;
int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%s", a)) {
        if (!strcmp(a,"-1")) {
            break;
        }
        for (j=0,i=2; i < 10; i++) {
            for (y=m=0; a[m]; m++) {
                y = a[m]-'0' + y*10;
                y %= i;
            }
            if (!y) {
                k[j++] = i;
            }
        }
        if (!j) {
            printf("none\n");
        } else {
            printf("%d", k[0]);
            for (i = 1; i < j; i++) {
                printf(" %d", k[i]);
            }
            printf("\n");
        }
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
