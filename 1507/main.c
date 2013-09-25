#include <stdio.h>

int main(int argc, char* argv[])
{
    int m, n, i;
    freopen("input.txt", "r", stdin);

    while (~scanf("%d %d", &m, &n)) {
        //printf("%d %d\n", m, n);
        for (i = 0; i < n; i++) {
            m++;
        }
        printf("%d\n", m);
    }
	return 0;
}
