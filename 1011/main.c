#include <stdio.h>
#define N -1

int a[10000], k;
void M()
{
    int i, j, t, ai,aj,m;
    i = j = t = 0;
    m = N;//任意一个负数
    while(j < k) {
        //printf("j:%d t+a[j]:%d\n", j, t+a[j]);
        if ((t+a[j])>=0) {
            t += a[j];
            if (m<t) {
                ai = i;
                aj = j;
                m = t;
            }
            j++;
        }else{
            j++;
            i = j;
            t = 0;
        }
        //printf("t : %d\n", t);
    }
    if (m == N) {
        printf("0 %d %d\n", a[0], a[k-1]);
    }else{
        printf("%d %d %d\n", m, a[ai], a[aj]);
    }
}

int main(int argc, char* argv[])
{
    int i;

    freopen("input.txt", "r", stdin);
    while (scanf("%d", &k),k) {
        for (i = 0; i < k; i++) {
            scanf("%d", &a[i]);
        }
        M();
    }
    return 0;
}
