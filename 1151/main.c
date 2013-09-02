#include <stdio.h>
#define ROTATE_LEFT(x,n) (((x) << (n) & 0xffff) | ((x) >> (16 - (n)) & 0xffff))

int n;
int a, b;

int check()
{
    int i;
    for (i = 0; i < 16; i++) {
        if (ROTATE_LEFT(a, i) == b) {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
    scanf("%d", &n);

    while (n-->0) {
        scanf("%d %d", &a, &b);
        if (check()) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
	return 0;
}
