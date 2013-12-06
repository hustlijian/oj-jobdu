#include <stdio.h>
#include <string.h>
#include <time.h>

int map[1001], C, N, a[101], b[101];

int main(int argc, char* argv[])
{
    int i, j;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d%d", &C, &N)) {
        //printf("%d %d\n", C, N);
        for (i = 0; i < N; i++) {
            scanf("%d%d", &a[i], &b[i]);
            //printf("%d %d\n", a[i], b[i]);
        }
        memset(map, 0, sizeof(map));
        for (i = 0; i < N; i++) {
            for (j = C; j >= a[i]; j--) {
                if (map[j]<map[j-a[i]]+b[i]) {
                    map[j] = map[j-a[i]]+b[i];
                }
            }
        }
        printf("%d\n", map[C]);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
