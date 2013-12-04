#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int i,n;
    double x,y;

    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%lf %d", &x,&n)) {
        //printf("%lf %d\n", x, n);
        y = x;
        for (i = 0; i < n; i++) {
            y = y*2/3+x/(3*y*y);
        }
        printf("%lf\n", y);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
