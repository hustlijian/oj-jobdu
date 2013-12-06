#include <stdio.h>
#include <time.h>

#define MAX 30

int N,i,c;
int a[MAX],b[2*MAX-3];

void move(int p)
{
    int i,j,t;
    for (i = 0,j=p-1; i < j; i++,j--) {
        t = a[i],a[i]=a[j],a[j]=t;
    }
}
void check()
{
    int i,j,m;
    for (i = 0; i < N; i++) {
        m = 0;
        for (j = 1; j < (N-i); j++) {
            if (a[m]<a[j]) {
                m = j;
            }
        }
        //printf("a[m]:%d, i: %d j:%d\n", a[m], i, j);
        if (m == (N-i-1)) {
            continue;
        }
        if (m) {
            move(m+1);
            b[c++] = m+1;
        }
        move(N-i);
        b[c++] = N-i;
    }
}
int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d",&N),N) {
        //printf("%d\n", N);
        for (i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            //printf("%d ", a[i]);
        }
        c = 0;
        check();
        printf("%d", c);
        for (i = 0; i < c; i++) {
            printf(" %d", b[i]);
        }
        printf("\n");
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
