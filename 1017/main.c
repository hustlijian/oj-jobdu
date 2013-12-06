#include <stdio.h>
#include <string.h>
int map[101][101];
int N;
int vis[101];

int visited(int n, int t)
{
    int i;
    for (i = 1; i <= t; i++) {
        if (vis[i] == n) {
            return 1;
        }
    }
    return 0;
}
int min(int a)
{
    int min=-1, i, j, ai;
    for (i = 1; i < a; i++) {
        for (j = 1; j <= N; j++) {
            if (visited(j, a) == 0) {
                if (min<0) {
                    min = j;
                    ai = vis[i];
                }else if (map[ai][min] > map[vis[i]][j]) {
                    min = j;
                    ai = vis[i];
                }
            }
        }
    }
    vis[i] = min;
    return map[ai][min];

}
int Min()
{
    int i, t=0;
    vis[1] = 1;
    for (i = 2; i <= N; i++) {
        t += min(i);
    }
    return t;
}
int main(int argc, char* argv[])
{
    int t, i;
    int a, b, L;
    freopen("input.txt", "r", stdin);

    while (scanf("%d", &N), N) {
        //printf("%d\n", N);
        t = N*(N-1)/2;
        memset(map, -1, sizeof(map));
        memset(vis, 0, sizeof(vis));
        for (i = 0; i < t; i++) {
            scanf("%d %d %d", &a, &b, &L);
            //printf("%d %d %d\n", a, b, L);
            map[a][b] = map[b][a] = L;
        }
        printf("%d\n", Min());
    }
    return 0;
}
