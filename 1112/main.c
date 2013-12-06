#include <stdio.h>
#include <time.h>
#define MAX 30

int main(int argc, char* argv[])
{
    int k,i,j,m;
    int a[MAX], b[MAX];
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    while (~scanf("%d", &k)) {
        for (i = 0; i < k; i++) {
            scanf("%d", &a[i]);
            b[i] = 1;
        }
        for (i = 0; i < k; i++) {
            for (j = 0; j < i; j++) {
                if (a[j]>=a[i] &&(b[j]+1 > b[i])) {
                    b[i]=b[j]+1;
                }
            }
        }
        for (i = m=0; i < k; i++) {
            if (m<b[i]) {
                m=b[i];
            }
        }
        printf("%d\n", m);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
