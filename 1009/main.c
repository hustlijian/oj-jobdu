/**
 * 建立两个排序的二叉树，对比就可以了
 * 因为只有小于10的长度，就用一个1024的数组来模拟完全二叉树
 */
#include <stdio.h>
#include <string.h>

void tree(int *T, char *s)
{
    int i, t, j;
    for (i = 0; s[i]; i++) {
        t = s[i] - '0';
        for (j = 1; j < 1024;) {
            if (T[j]<0) {
                T[j] = t;break;
            }
            j *= 2;
            if (T[j/2]<t) {
                j++;
            }
        }
    }
}

int main(int argc, char* argv[])
{
    int n, i;
    char B[11], A[11];
    int a[1024], b[1024];

    freopen("input.txt", "r", stdin);

    while (scanf("%d", &n), n) {
        //printf("n=%d\n", n);
        scanf("%s", A);
        //printf("%s\n", A);
        memset(a, -1, sizeof(a));
        tree(a, A);
        while(n--) {
            scanf("%s", B);
            //printf("%s\n", B);
            memset(b, -1, sizeof(b));
            tree(b, B);
            for (i = 0; i < 1024; i++) {
                if (a[i]!=b[i]) {
                    break;
                }
            }
            if (i==1024) {
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }

    return 0;
}
