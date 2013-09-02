//AC：并查集
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAX = 1000 + 5;
int n, m;
int f[MAX];

void Init(void)
{
    memset(f, -1, sizeof(f));
}

int getFather(int u)
{
    return (f[u] == -1)?  u : f[u] = getFather(f[u]);
}

int main()
{
    int i;
    int u, v;
    int t;
    while (scanf("%d %d", &n, &m) && n != 0)
    {
        Init();
        for (i=1; i<=m; i++)
        {
            cin >> u >> v;
            t = v;
            int fu = getFather(u);
            int fv = getFather(v);
            if (fu != fv)
            {
                f[fu] = fv;
            }
        }
        // 如果图连通，那么有且仅有一个结点的父结点编号为-1
        int ans = 0;
        for (i=1; i<=n && ans < 2; i++)
        {
            if (-1 == f[i])
            {
                ans++;
            }
        }
        (ans == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
