#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAX = 1000 + 5;
int n, m;
bool map[MAX][MAX];
bool visit[MAX];
int ans;

void init(void)
{
    memset(map, false, sizeof(map));
    memset(visit, false, sizeof(visit));
    ans = 0;
}

void Dfs(int p)
{
    for (int i = 1; i<=n; i++) {
        if (!visit[i] && map[p][i]) {
            ans ++;
            visit[i] = true;
            Dfs(i);
        }
    }
}

int main(int argc, char const* argv[])
{
    int i, u, v;
    while (scanf("%d %d", &n, &m) && n) {
        init();
        for (i = 0; i < m ; i++) {
            cin >> u >> v;
            map[u][v] = map[v][u] = true;
        }
        Dfs(1);
        (ans == n) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
