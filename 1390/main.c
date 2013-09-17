/*
 * 可以转化为求一个f[n] = f[n-1]+f[n-2]的问题
 * 如果是竖的就还有n-1,如果放横的就要两个，还有n-2
 * 到只有一行，就一种(竖),只有两行就有两种(全竖或全横)
 */
#include <stdio.h>

int main(int argc, char* argv[])
{
    int n, i;
    long f[71];

    freopen("input.txt", "r", stdin);

    f[0] = f[1] = 1;
    for (i = 2; i < 71; i++) {
        f[i] = f[i-1]+f[i-2];
    }
    while (~scanf("%d", &n)) {
        //printf("%d\n", n);
        printf("%ld\n", f[n]);
    }

	return 0;
}
