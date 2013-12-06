#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    char a[12], b[12];
    int t, i, j;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%s%s", a, b)) {
        //printf("%s %s\n", a, b);
        for (t=i=0; a[i];i++) {
            for (j=0; b[j]; j++) {
                t += (a[i]-'0')*(b[j]-'0');
            }
        }
        printf("%d\n", t);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
