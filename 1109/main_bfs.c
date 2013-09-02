#include<stdio.h>
#include<string.h>

int d[1001][1001];

int main(void)
{
        int n,m;
        while(scanf("%d%d",&n,&m) != EOF)
        {
                if(n == 0)
                        return 0;
                int i,j,a,b;
                for(i = 0; i < 1001; ++i)
                        for(j = 0; j < 1001; ++j)
                                d[i][j] = 0;
                for(i = 0; i < m; ++i)
                {
                        scanf("%d%d",&a,&b);
                        if(a != b)      //要考虑a，b不是同一结点；
                        {
                            d[a][b] = 1;
                            d[b][a] = 1;
                        }
                }
                int flag[1001];      //标志数组,1为已遍历过
                for(i = 0; i < 1001; ++i)
                        flag[i] = 0;
                int Q[1001], front = 0, tail = 1;   //队列存放遍历节点
                Q[front] = 1; 
                while(front != tail)
                {
                        int j = Q[front];
                        flag[j] = 1;
                        for(i = 1; i <= n; ++i)
                        {
                                if(d[j][i] == 1 && flag[i] == 0)
                                {
                                        flag[i] = 1;
                                        Q[tail] = i;
                                        tail++;
                                }
                        }
                        front++;
                }
                if(front == n)   //表示遍历过n个结点
                        printf("YES\n");
                else
                        printf("NO\n");
        }
        return 0;
}
