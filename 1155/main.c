#include <stdio.h>

int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
    int a, n;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        //printf("%d\n", a);
        if (a%2) {
            printf("0 0\n");
        } else {
            if (a%4) {
                printf("%d %d\n", a/4+1, a/2);
            } else {
                printf("%d %d\n", a/4, a/2);
            }
        }
    }

	return 0;
}
