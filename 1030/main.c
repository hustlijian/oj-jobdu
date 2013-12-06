/* 参考akQuan的思路，记录最晚开始时间，使用暴力的全局搜索
 * 获得最好结果。
 */
#include <stdio.h>
#include <time.h>
#include <string.h>

int a[30][4], n, vis[30];
int sum, max;

void dfs(int time)
{
    int i;
    for (i = 0; i < n; i++) {
        if (a[i][3]>=time && vis[i] == 0) {
            sum += a[i][0];
            vis[i] = 1;
            if (max<sum) {
                max = sum;
            }
            dfs(time+a[i][1]);
            vis[i] = 0;
            sum -= a[i][0];
        }
    }
}
int main(int argc, char* argv[])
{
    int i;

    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();

    while (scanf("%d", &n), n>0) {
        //printf("%d\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
            a[i][3] = a[i][2] - a[i][1];
        }
        sum = max = 0;
        memset(vis, 0, sizeof(vis));
        dfs(0);
        printf("%d\n", max);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
