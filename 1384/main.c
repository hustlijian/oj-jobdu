#include <stdio.h>
#define LEN 1001
int find(int *a, int m, int n, int t){
    int i=0,j=n-1,key;
    while ((i<m) && (j>=0)) {
        key = *(a+i*LEN+j);
        if (key>t)j--;
        else if (key<t)i++;
        else if (key==t)return 1;
    }
    return 0;
}
int main(){
    int m,n,t,i,j;
    int map[LEN][LEN];
    while (~scanf("%d %d %d", &m, &n, &t)) {
        for (i = 0; i < m; i++)for (j = 0; j < n; j++)scanf("%d", &map[i][j]);
        if (find(map, m, n, t))puts("Yes");
        else puts("No");
    }
    return 0;
}
