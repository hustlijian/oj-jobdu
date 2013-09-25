#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, i, t;
    freopen("input.txt", "r", stdin);

    while (scanf("%d %d", &a, &b),a||b) {
        //printf("%d %d\n", a, b);
        a = a %1000;
        t = a;
        for (i = 1; i < b; i++) {
            t *= a;
            t %= 1000;
        }
        printf("%d\n", t);
    }
	return 0;
}
