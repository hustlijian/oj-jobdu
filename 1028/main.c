#include <stdio.h>
#include <string.h>

int map[100][100];
int vis[100];
int n;
int s;

int visited(int i, int t)
{
    int j;
    for (j = 1; j <= t; j++) {
        if (vis[j] == i) {
            return 1;
        }
    }
    return 0;
}

void count(int m)
{
    int i, j;
    int p=0,q;
    if (m>=n) {
        return;
    }
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (!visited(j, m) ) {
                if (!p) {
                    p = vis[i], q = j;
                }else if (map[p][q] > map[vis[i]][j]) {
                    p = vis[i], q = j;
                }
            }
        }
    }
    vis[i] = q;
    s += map[p][q];
    count(m+1);
}

int main(int argc, char* argv[])
{
    int i, a, b, c, d;
    freopen("input.txt", "r", stdin);
    while (scanf("%d", &n), n) {
        //printf("%d\n", n);
        memset(map, -1, sizeof(map));
        for (i = 0; i < n*(n-1)/2; i++) {
            scanf("%d %d %d %d", &a, &b, &c, &d);
            //printf("%d %d %d %d\n", a, b, c, d);
            map[a][b] = map[b][a] = d?0:c;
        }
        vis[1] = 1;
        s = 0;
        count(1);
        printf("%d\n", s);
    }
    return 0;
}
