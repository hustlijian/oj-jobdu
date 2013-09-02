#include <stdio.h>
#include <stdlib.h>

#define MAX 100+1
#define LEN 10+1

int n;
int weight[MAX];
int pos[MAX];
char color[MAX][LEN];

int cmp(const void *a, const void *b)
{
    int i=*((int*)a);
    int j=*((int*)b);
    if (weight[i]>weight[j]) {
        return -1;
    }
    if (weight[i]<weight[j]) {
        return 1;
    }
    return 0;
}
int main(int argc, char* argv[])
{
    int i;
	freopen("input.txt", "r", stdin);
    while(scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d %s", &weight[i], color[i]);
            //printf("%d %s\n", weight[i], color[i]);
        }
        for (i = 0; i < n; i++) {
            pos[i] = i;
        }
        qsort(pos,n,sizeof(int),cmp);
        for (i = 0; i < n; i++) {
            printf("%s\n", color[pos[i]]);
        }
    }

	return 0;
}
