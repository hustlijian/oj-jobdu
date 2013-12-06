#include <stdio.h>
#include <string.h>
#include <time.h>

int m, n;
int node[1001];
int map[1001][1001];
int vis[1001];
int count;

void conn(int start)
{
    int i ;

    for (i = 1; i <=n; i++) {
        if (map[start][i] && !vis[i]) {
            count++;
            vis[i] = 1;
            conn(i);
        }
    }
}

int odd()
{
    int i;
    for (i = 1; i <= n; i++) {
        if (node[i]%2) {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char* argv[])
{
    int a, b;
    freopen("input.txt", "r", stdin);

    while (scanf("%d %d", &n, &m), n) {
        //printf("%d %d\n", n, m);
        memset(node, 0, sizeof(node));
        memset(map, 0, sizeof(map));
        memset(vis, 0, sizeof(vis));
        while (m--) {
            scanf("%d %d", &a, &b);
            //printf("%d %d\n", a, b);
            node[a]++;
            node[b]++;
            map[a][b] = map[b][a] = 1;
        }
        vis[1] = 1;
        count = 1;
        conn(1);
        if (count==n && odd()) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}
