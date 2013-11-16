#include <stdio.h>
#include <string.h>
#include <time.h>
char map[10001];
int main(int argc, char* argv[])
{
    int L,M,a,b,i,t;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d %d", &L, &M)) {
        //printf("%d %d\n", L, M);
        memset(map,1,sizeof(map));
        while (M--) {
            scanf("%d%d", &a, &b);
            //printf("%d %d\n", a, b);
            for (i = a; i <= b; i++) {
                map[i] = 0;
            }
        }
        for (t=i=0; i <= L; i++) {
            t += map[i];
        }
        printf("%d\n", t);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
