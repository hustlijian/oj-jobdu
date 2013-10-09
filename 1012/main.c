/**
 * 使用并查集，没有了解过，通过：http://zh.wikipedia.org/wiki/%E5%B9%B6%E6%9F%A5%E9%9B%86
 * 和http://t.jobdu.com/thread-7736-3-1.html，的讨论学习了，使用了路径压缩的并查集方法
 */
#include <stdio.h>
int father[1001];

int getfather(int v)
{
    if (father[v] == v) {
        return v;
    } else {
        father[v] = getfather(father[v]);
        return father[v];
    }
}
int main(int argc, char* argv[])
{
    int m, n, a, b, i, t;
    freopen("input.txt", "r", stdin);

    while (~scanf("%d %d", &n, &m), n) {
        //printf("%d %d\n", n, m);
        for (i = 1; i <= n; i++) {
            father[i] = i;
        }
        t = 0;
        while (m--) {
            scanf("%d %d", &a, &b);
            //printf("%d %d\n", a, b);
            father[getfather(a)] = father[getfather(b)];
        }
        for (i = 1; i <= n; i++) {
            if (father[i]==i) {
                t ++;
            } 
        }
        printf("%d\n", t -1);
    }

    return 0;
}
