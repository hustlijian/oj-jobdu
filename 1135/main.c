#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct  _Str{
    int len;
    char str[101];
}Str;

int *a,n,i,j;
Str *b;

int cmp(const void* m, const void* n)
{
    int p, q;
    p = *(int *)m, q = *(int*)n;
    return ((b[p].len)-(b[q].len));
}
int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d\n", &n)) {
        //printf("%d\n", n);
        a = (int*)malloc(n*sizeof(int));
        b = (Str*)malloc(n*sizeof(Str));
        for (i = 0; i < n; i++) {
            gets(b[i].str);
            //puts(b[i].str);
            b[i].len = strlen(b[i].str);
            if (!strcmp("stop", b[i].str)) {
                break;
            }
            a[i]=i;
        }
        qsort(a,i,sizeof(int),cmp);
        for (j = 0; j < i; j++) {
            puts(b[a[j]].str);
        }
        free(a),free(b);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
