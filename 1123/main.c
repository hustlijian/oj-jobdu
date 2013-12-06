#include <stdio.h>
#include <string.h>

int main(int argc, char const* argv[])
{
    int T,M,t[101],v[101],n[1001],i,j;

    freopen("input.txt", "r", stdin);

    while (~scanf("%d %d",&T,&M)) {
        //printf("%d %d\n", T, M);
        for (i = 1; i <= M; i++) {
            scanf("%d %d", &t[i],&v[i]);
            //printf("%d %d\n", t[i], v[i]);
        }
        memset(n,0,sizeof(n));
        for (i = 1; i <= M; i++) {
            for (j = T; j >=t[i]; j--) {
                if (n[j]<n[j-t[i]]+v[i]) {
                    n[j] = n[j-t[i]]+v[i];
                }
            }
        }
        printf("%d\n", n[T]);
    }
    return 0;
}
