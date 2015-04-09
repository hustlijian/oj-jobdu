#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAXN 204

int map[MAXN][MAXN];

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    int S, N, M, X, Y, K;
    int i, j;

    scanf("%d", &S);
    printf("%d\n", S);
    while (S--) {
        scanf("%d %d", &N, &M);
        printf("%d %d\n", N, M);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                scanf("%d", &map[i][j]);
                printf("%d ", map[i][j]);
            }
            puts("");
        }
        scanf("%d %d %d", &X, &Y, &K);
        printf("%d %d %d\n", X, Y, K);
    }
    return 0;
}
