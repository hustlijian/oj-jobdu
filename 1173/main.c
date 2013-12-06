#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int n,m,a[MAX],b[MAX];

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int check(int t)
{
    int f,m,l;
    f=0;
    l=n-1;
    while (f<=l) {
        if (a[f]==t) {
            return f;
        }
        if (a[l]==t) {
            return l;
        }
        m = (f+l)/2;
        if (a[m]==t) {
            return t;
        }
        if (a[m]<t) {
            f=m+1;
            l--;
        } else if (a[m]>t) {
            l=m-1;
            f++;
        }
    }
    return 0;
}
int main(int argc, char* argv[])
{
    int i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &n)) {
        //printf("%d\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            //printf("%d\n", a[i]);
        }
        qsort(a,n,sizeof(int),cmp);
        scanf("%d", &m);
        //printf("%d\n", m);
        for (i = 0; i < m; i++) {
            scanf("%d", &b[i]);
            //printf("%d\n", b[i]);
            if (check(b[i])) {
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
