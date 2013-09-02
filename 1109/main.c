#include <stdio.h>
#include <string.h>

#define MAX 1001

int n, m;
int map[MAX][MAX];
int visited[MAX];
int count;

void init()
{
    memset(map, 0, sizeof(map));
    memset(visited, 0, sizeof(visited));
    count = 0;
}
void Dfs(int i)
{
    int j;
    for (j = 1; j <= n; j++) {
        if (!visited[j] && map[i][j]) {
            count++;
            visited[j] = 1;
            Dfs(j);
        }
    }
}

int main(int argc, char* argv[])
{
    int i, a, b;
	freopen("input.txt", "r", stdin);
    while (scanf("%d %d", &n, &m), n) {
        init();
        for (i = 0; i < m; i++) {
            scanf("%d %d", &a, &b);
            map[a][b] = map[b][a] = 1;
        }
        Dfs(1);
        if (count == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

	return 0;
}
