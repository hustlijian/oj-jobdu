#include <stdio.h>
#include <string.h>
#include <time.h>

int map[26][26], G[26],flag[26];

int main(int argc, char* argv[])
{
    int n,k,i,j,v,mi,mj,min,t;
    char c,C;

    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &n),n) {
        //printf("%d\n", n);
        memset(map, -1, sizeof(map));
        memset(G, -1, sizeof(G));
        memset(flag, -1, sizeof(flag));

        for (i = 0; i < n-1; i++) {
            scanf(" %c %d", &c,&k);
            //printf("%c %d\n", c,k);
            for (j = 0; j < k; j++) {
                scanf(" %c %d", &C, &v);
                //printf("%c %d\n", C, v);
                map[c-'A'][C-'A'] =map[C-'A'][c-'A']= v;
            }
        }

        G[0] = 0;
        flag[0] = 1;
        t = 0;
        for (i = 1; i < n; i++) {
            min = -1;
            for (j = 0; j < i; j++) {
                for (k = 0; k < n; k++) {
                    if (flag[k]<0 && map[G[j]][k]>0) {
                        //printf("mi:%d mj:%d , G[j]:%d k:%d \n", mi,mj, G[j], k);
                        if (min < 0) {
                            mi = G[j], mj = k;
                            //printf("min<0,mi:%d mj:%d\n", mi, mj);
                            min = 1;
                        } else if (map[mi][mj] > map[G[j]][k]) {
                            mi = G[j], mj = k;
                            //printf("min>0,mi:%d mj:%d\n", mi, mj);
                        }
                    }
                }
            }
            flag[mj]=1;
            G[i]=mj;
            t+=map[mi][mj];
        }
        printf("%d\n", t);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
