#include <stdio.h>
int check(int a)
{
    int i;
    for (i = 2; i*i < a; i++) {
        if (a%(i*i) == 0) {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char* argv[])
{
    int n;
    freopen("input.txt", "r", stdin);

    while (scanf("%d", &n),n) {
        //printf("%d\n", n);
        if (check(n)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
