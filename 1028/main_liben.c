#include <stdio.h>
#include <string.h>
 
#define maxsize 101
#define maxint  0x7fffffff
 
int map[maxsize][maxsize];
 
void init_map(int n)
{
      int i,j;
      for(i = 0;i < n;i ++)
            for(j = 0;j < n;j ++)
                  map[i][j] = maxint;
}
 
int prime(int n)
{
      int minarr[maxsize];
      char flag[maxsize];
      int i;
      for(i = 0;i < n;i ++){
            minarr[i] = map[0][i];
            flag[i] = 1;
      }
      flag[0] = 0;
      int sum = 0;
      for(i = 1;i < n;i ++){
            int j,minn = -1,min = maxint;
            for(j = 0;j < n;j ++){
                  if(flag[j] && min > minarr[j]){
                        minn = j;
                        min = minarr[j];
                  }
            }
            if(minn == -1)
                  break;
            sum += min;
            flag[minn] = 0;
            for(j = 0;j < n;j ++)
                  if(flag[j] && map[minn][j] < minarr[j])
                        minarr[j] = map[minn][j];
      }
      return sum;
}
 
int main()
{
      //freopen("d.txt","r",stdin);
      int n;
      while(scanf("%d",&n) && n){
            init_map(n);
            int i,u,v,w,f;
            for(i = 0;i < n*(n-1)/2;i ++){
                  scanf("%d%d%d%d",&u,&v,&w,&f);
                  if(f)
                        w = 0;
                  map[u-1][v-1] = map[v-1][u-1] = w;
            }
            printf("%d\n",prime(n));
      }
      //while(1);
      return 0;
}
 
/**************************************************************
    Problem: 1028
    User: libeninbeijing
    Language: C
    Result: Accepted
    Time:10 ms
    Memory:952 kb
****************************************************************/
